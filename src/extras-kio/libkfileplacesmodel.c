#include "../extras-kbookmarks/libkbookmark.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqdatastream.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqmimedata.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../extras-solid/libdevice.hpp"
#include "libkfileplacesmodel.hpp"
#include "libkfileplacesmodel.h"

KFilePlacesModel* k_fileplacesmodel_new() {
    return KFilePlacesModel_new();
}

KFilePlacesModel* k_fileplacesmodel_new2(void* parent) {
    return KFilePlacesModel_new2((QObject*)parent);
}

const QMetaObject* k_fileplacesmodel_meta_object(void* self) {
    return KFilePlacesModel_MetaObject((KFilePlacesModel*)self);
}

void* k_fileplacesmodel_metacast(void* self, const char* param1) {
    return KFilePlacesModel_Metacast((KFilePlacesModel*)self, param1);
}

int32_t k_fileplacesmodel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFilePlacesModel_Metacall((KFilePlacesModel*)self, param1, param2, param3);
}

void k_fileplacesmodel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KFilePlacesModel_OnMetacall((KFilePlacesModel*)self, (intptr_t)callback);
}

int32_t k_fileplacesmodel_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KFilePlacesModel_QBaseMetacall((KFilePlacesModel*)self, param1, param2, param3);
}

const char* k_fileplacesmodel_tr(const char* s) {
    libqt_string _str = KFilePlacesModel_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QUrl* k_fileplacesmodel_url(void* self, void* index) {
    return KFilePlacesModel_Url((KFilePlacesModel*)self, (QModelIndex*)index);
}

bool k_fileplacesmodel_setup_needed(void* self, void* index) {
    return KFilePlacesModel_SetupNeeded((KFilePlacesModel*)self, (QModelIndex*)index);
}

bool k_fileplacesmodel_is_teardown_allowed(void* self, void* index) {
    return KFilePlacesModel_IsTeardownAllowed((KFilePlacesModel*)self, (QModelIndex*)index);
}

bool k_fileplacesmodel_is_eject_allowed(void* self, void* index) {
    return KFilePlacesModel_IsEjectAllowed((KFilePlacesModel*)self, (QModelIndex*)index);
}

bool k_fileplacesmodel_is_teardown_overlay_recommended(void* self, void* index) {
    return KFilePlacesModel_IsTeardownOverlayRecommended((KFilePlacesModel*)self, (QModelIndex*)index);
}

int32_t k_fileplacesmodel_device_accessibility(void* self, void* index) {
    return KFilePlacesModel_DeviceAccessibility((KFilePlacesModel*)self, (QModelIndex*)index);
}

QIcon* k_fileplacesmodel_icon(void* self, void* index) {
    return KFilePlacesModel_Icon((KFilePlacesModel*)self, (QModelIndex*)index);
}

const char* k_fileplacesmodel_text(void* self, void* index) {
    libqt_string _str = KFilePlacesModel_Text((KFilePlacesModel*)self, (QModelIndex*)index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_fileplacesmodel_is_hidden(void* self, void* index) {
    return KFilePlacesModel_IsHidden((KFilePlacesModel*)self, (QModelIndex*)index);
}

bool k_fileplacesmodel_is_group_hidden(void* self, int32_t type) {
    return KFilePlacesModel_IsGroupHidden((KFilePlacesModel*)self, type);
}

bool k_fileplacesmodel_is_group_hidden2(void* self, void* index) {
    return KFilePlacesModel_IsGroupHidden2((KFilePlacesModel*)self, (QModelIndex*)index);
}

bool k_fileplacesmodel_is_device(void* self, void* index) {
    return KFilePlacesModel_IsDevice((KFilePlacesModel*)self, (QModelIndex*)index);
}

Solid__Device* k_fileplacesmodel_device_for_index(void* self, void* index) {
    return KFilePlacesModel_DeviceForIndex((KFilePlacesModel*)self, (QModelIndex*)index);
}

KBookmark* k_fileplacesmodel_bookmark_for_index(void* self, void* index) {
    return KFilePlacesModel_BookmarkForIndex((KFilePlacesModel*)self, (QModelIndex*)index);
}

KBookmark* k_fileplacesmodel_bookmark_for_url(void* self, void* searchUrl) {
    return KFilePlacesModel_BookmarkForUrl((KFilePlacesModel*)self, (QUrl*)searchUrl);
}

int32_t k_fileplacesmodel_group_type(void* self, void* index) {
    return KFilePlacesModel_GroupType((KFilePlacesModel*)self, (QModelIndex*)index);
}

libqt_list /* of QModelIndex* */ k_fileplacesmodel_group_indexes(void* self, int32_t type) {
    libqt_list _arr = KFilePlacesModel_GroupIndexes((KFilePlacesModel*)self, type);
    return _arr;
}

QAction* k_fileplacesmodel_teardown_action_for_index(void* self, void* index) {
    return KFilePlacesModel_TeardownActionForIndex((KFilePlacesModel*)self, (QModelIndex*)index);
}

QAction* k_fileplacesmodel_eject_action_for_index(void* self, void* index) {
    return KFilePlacesModel_EjectActionForIndex((KFilePlacesModel*)self, (QModelIndex*)index);
}

QAction* k_fileplacesmodel_partition_action_for_index(void* self, void* index) {
    return KFilePlacesModel_PartitionActionForIndex((KFilePlacesModel*)self, (QModelIndex*)index);
}

void k_fileplacesmodel_request_teardown(void* self, void* index) {
    KFilePlacesModel_RequestTeardown((KFilePlacesModel*)self, (QModelIndex*)index);
}

void k_fileplacesmodel_request_eject(void* self, void* index) {
    KFilePlacesModel_RequestEject((KFilePlacesModel*)self, (QModelIndex*)index);
}

void k_fileplacesmodel_request_setup(void* self, void* index) {
    KFilePlacesModel_RequestSetup((KFilePlacesModel*)self, (QModelIndex*)index);
}

void k_fileplacesmodel_add_place(void* self, const char* text, void* url) {
    KFilePlacesModel_AddPlace((KFilePlacesModel*)self, qstring(text), (QUrl*)url);
}

void k_fileplacesmodel_add_place2(void* self, const char* text, void* url, const char* iconName, const char* appName, void* after) {
    KFilePlacesModel_AddPlace2((KFilePlacesModel*)self, qstring(text), (QUrl*)url, qstring(iconName), qstring(appName), (QModelIndex*)after);
}

void k_fileplacesmodel_edit_place(void* self, void* index, const char* text, void* url) {
    KFilePlacesModel_EditPlace((KFilePlacesModel*)self, (QModelIndex*)index, qstring(text), (QUrl*)url);
}

void k_fileplacesmodel_remove_place(void* self, void* index) {
    KFilePlacesModel_RemovePlace((KFilePlacesModel*)self, (QModelIndex*)index);
}

void k_fileplacesmodel_set_place_hidden(void* self, void* index, bool hidden) {
    KFilePlacesModel_SetPlaceHidden((KFilePlacesModel*)self, (QModelIndex*)index, hidden);
}

void k_fileplacesmodel_set_group_hidden(void* self, int32_t type, bool hidden) {
    KFilePlacesModel_SetGroupHidden((KFilePlacesModel*)self, type, hidden);
}

bool k_fileplacesmodel_move_place(void* self, int itemRow, int row) {
    return KFilePlacesModel_MovePlace((KFilePlacesModel*)self, itemRow, row);
}

int32_t k_fileplacesmodel_hidden_count(void* self) {
    return KFilePlacesModel_HiddenCount((KFilePlacesModel*)self);
}

QVariant* k_fileplacesmodel_data(void* self, void* index, int role) {
    return KFilePlacesModel_Data((KFilePlacesModel*)self, (QModelIndex*)index, role);
}

void k_fileplacesmodel_on_data(void* self, QVariant* (*callback)(void*, void*, int)) {
    KFilePlacesModel_OnData((KFilePlacesModel*)self, (intptr_t)callback);
}

QVariant* k_fileplacesmodel_qbase_data(void* self, void* index, int role) {
    return KFilePlacesModel_QBaseData((KFilePlacesModel*)self, (QModelIndex*)index, role);
}

QModelIndex* k_fileplacesmodel_index(void* self, int row, int column, void* parent) {
    return KFilePlacesModel_Index((KFilePlacesModel*)self, row, column, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_index(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KFilePlacesModel_OnIndex((KFilePlacesModel*)self, (intptr_t)callback);
}

QModelIndex* k_fileplacesmodel_qbase_index(void* self, int row, int column, void* parent) {
    return KFilePlacesModel_QBaseIndex((KFilePlacesModel*)self, row, column, (QModelIndex*)parent);
}

QModelIndex* k_fileplacesmodel_parent(void* self, void* child) {
    return KFilePlacesModel_Parent((KFilePlacesModel*)self, (QModelIndex*)child);
}

void k_fileplacesmodel_on_parent(void* self, QModelIndex* (*callback)(void*, void*)) {
    KFilePlacesModel_OnParent((KFilePlacesModel*)self, (intptr_t)callback);
}

QModelIndex* k_fileplacesmodel_qbase_parent(void* self, void* child) {
    return KFilePlacesModel_QBaseParent((KFilePlacesModel*)self, (QModelIndex*)child);
}

libqt_map /* of int to char* */ k_fileplacesmodel_role_names(void* self) {
    return KFilePlacesModel_RoleNames((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_role_names(void* self, libqt_map /* of int to char* */ (*callback)()) {
    KFilePlacesModel_OnRoleNames((KFilePlacesModel*)self, (intptr_t)callback);
}

libqt_map /* of int to char* */ k_fileplacesmodel_qbase_role_names(void* self) {
    return KFilePlacesModel_QBaseRoleNames((KFilePlacesModel*)self);
}

int32_t k_fileplacesmodel_row_count(void* self, void* parent) {
    return KFilePlacesModel_RowCount((KFilePlacesModel*)self, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_row_count(void* self, int32_t (*callback)(void*, void*)) {
    KFilePlacesModel_OnRowCount((KFilePlacesModel*)self, (intptr_t)callback);
}

int32_t k_fileplacesmodel_qbase_row_count(void* self, void* parent) {
    return KFilePlacesModel_QBaseRowCount((KFilePlacesModel*)self, (QModelIndex*)parent);
}

int32_t k_fileplacesmodel_column_count(void* self, void* parent) {
    return KFilePlacesModel_ColumnCount((KFilePlacesModel*)self, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_column_count(void* self, int32_t (*callback)(void*, void*)) {
    KFilePlacesModel_OnColumnCount((KFilePlacesModel*)self, (intptr_t)callback);
}

int32_t k_fileplacesmodel_qbase_column_count(void* self, void* parent) {
    return KFilePlacesModel_QBaseColumnCount((KFilePlacesModel*)self, (QModelIndex*)parent);
}

QModelIndex* k_fileplacesmodel_closest_item(void* self, void* url) {
    return KFilePlacesModel_ClosestItem((KFilePlacesModel*)self, (QUrl*)url);
}

int32_t k_fileplacesmodel_supported_drop_actions(void* self) {
    return KFilePlacesModel_SupportedDropActions((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_supported_drop_actions(void* self, int32_t (*callback)()) {
    KFilePlacesModel_OnSupportedDropActions((KFilePlacesModel*)self, (intptr_t)callback);
}

int32_t k_fileplacesmodel_qbase_supported_drop_actions(void* self) {
    return KFilePlacesModel_QBaseSupportedDropActions((KFilePlacesModel*)self);
}

int32_t k_fileplacesmodel_flags(void* self, void* index) {
    return KFilePlacesModel_Flags((KFilePlacesModel*)self, (QModelIndex*)index);
}

void k_fileplacesmodel_on_flags(void* self, int32_t (*callback)(void*, void*)) {
    KFilePlacesModel_OnFlags((KFilePlacesModel*)self, (intptr_t)callback);
}

int32_t k_fileplacesmodel_qbase_flags(void* self, void* index) {
    return KFilePlacesModel_QBaseFlags((KFilePlacesModel*)self, (QModelIndex*)index);
}

const char** k_fileplacesmodel_mime_types(void* self) {
    libqt_list _arr = KFilePlacesModel_MimeTypes((KFilePlacesModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_fileplacesmodel_mime_types");
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

void k_fileplacesmodel_on_mime_types(void* self, const char** (*callback)()) {
    KFilePlacesModel_OnMimeTypes((KFilePlacesModel*)self, (intptr_t)callback);
}

const char** k_fileplacesmodel_qbase_mime_types(void* self) {
    libqt_list _arr = KFilePlacesModel_QBaseMimeTypes((KFilePlacesModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_fileplacesmodel_mime_types");
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

QMimeData* k_fileplacesmodel_mime_data(void* self, libqt_list indexes) {
    return KFilePlacesModel_MimeData((KFilePlacesModel*)self, indexes);
}

void k_fileplacesmodel_on_mime_data(void* self, QMimeData* (*callback)(void*, QModelIndex**)) {
    KFilePlacesModel_OnMimeData((KFilePlacesModel*)self, (intptr_t)callback);
}

QMimeData* k_fileplacesmodel_qbase_mime_data(void* self, libqt_list indexes) {
    return KFilePlacesModel_QBaseMimeData((KFilePlacesModel*)self, indexes);
}

bool k_fileplacesmodel_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KFilePlacesModel_DropMimeData((KFilePlacesModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KFilePlacesModel_OnDropMimeData((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_qbase_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KFilePlacesModel_QBaseDropMimeData((KFilePlacesModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_fileplacesmodel_refresh(void* self) {
    KFilePlacesModel_Refresh((KFilePlacesModel*)self);
}

QUrl* k_fileplacesmodel_converted_url(void* url) {
    return KFilePlacesModel_ConvertedUrl((QUrl*)url);
}

void k_fileplacesmodel_set_supported_schemes(void* self, const char* schemes[static 1]) {
    size_t schemes_len = libqt_strv_length(schemes);
    libqt_string* schemes_qstr = (libqt_string*)malloc(schemes_len * sizeof(libqt_string));
    if (schemes_qstr == NULL) {
        fprintf(stderr, "Memory allocation failed in k_fileplacesmodel_set_supported_schemes");
        abort();
    }
    for (size_t i = 0; i < schemes_len; ++i) {
        schemes_qstr[i] = qstring(schemes[i]);
    }
    libqt_list schemes_list = qlist(schemes_qstr, schemes_len);
    KFilePlacesModel_SetSupportedSchemes((KFilePlacesModel*)self, schemes_list);
    free(schemes_qstr);
}

const char** k_fileplacesmodel_supported_schemes(void* self) {
    libqt_list _arr = KFilePlacesModel_SupportedSchemes((KFilePlacesModel*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_fileplacesmodel_supported_schemes");
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

void k_fileplacesmodel_error_message(void* self, const char* message) {
    KFilePlacesModel_ErrorMessage((KFilePlacesModel*)self, qstring(message));
}

void k_fileplacesmodel_on_error_message(void* self, void (*callback)(void*, const char*)) {
    KFilePlacesModel_Connect_ErrorMessage((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_setup_done(void* self, void* index, bool success) {
    KFilePlacesModel_SetupDone((KFilePlacesModel*)self, (QModelIndex*)index, success);
}

void k_fileplacesmodel_on_setup_done(void* self, void (*callback)(void*, void*, bool)) {
    KFilePlacesModel_Connect_SetupDone((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_teardown_done(void* self, void* index, int32_t error, void* errorData) {
    KFilePlacesModel_TeardownDone((KFilePlacesModel*)self, (QModelIndex*)index, error, (QVariant*)errorData);
}

void k_fileplacesmodel_on_teardown_done(void* self, void (*callback)(void*, void*, int32_t, void*)) {
    KFilePlacesModel_Connect_TeardownDone((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_group_hidden_changed(void* self, int32_t group, bool hidden) {
    KFilePlacesModel_GroupHiddenChanged((KFilePlacesModel*)self, group, hidden);
}

void k_fileplacesmodel_on_group_hidden_changed(void* self, void (*callback)(void*, int32_t, bool)) {
    KFilePlacesModel_Connect_GroupHiddenChanged((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_reloaded(void* self) {
    KFilePlacesModel_Reloaded((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_reloaded(void* self, void (*callback)(void*)) {
    KFilePlacesModel_Connect_Reloaded((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_supported_schemes_changed(void* self) {
    KFilePlacesModel_SupportedSchemesChanged((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_supported_schemes_changed(void* self, void (*callback)(void*)) {
    KFilePlacesModel_Connect_SupportedSchemesChanged((KFilePlacesModel*)self, (intptr_t)callback);
}

const char* k_fileplacesmodel_tr2(const char* s, const char* c) {
    libqt_string _str = KFilePlacesModel_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_fileplacesmodel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KFilePlacesModel_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesmodel_add_place3(void* self, const char* text, void* url, const char* iconName) {
    KFilePlacesModel_AddPlace3((KFilePlacesModel*)self, qstring(text), (QUrl*)url, qstring(iconName));
}

void k_fileplacesmodel_add_place4(void* self, const char* text, void* url, const char* iconName, const char* appName) {
    KFilePlacesModel_AddPlace4((KFilePlacesModel*)self, qstring(text), (QUrl*)url, qstring(iconName), qstring(appName));
}

void k_fileplacesmodel_edit_place4(void* self, void* index, const char* text, void* url, const char* iconName) {
    KFilePlacesModel_EditPlace4((KFilePlacesModel*)self, (QModelIndex*)index, qstring(text), (QUrl*)url, qstring(iconName));
}

void k_fileplacesmodel_edit_place5(void* self, void* index, const char* text, void* url, const char* iconName, const char* appName) {
    KFilePlacesModel_EditPlace5((KFilePlacesModel*)self, (QModelIndex*)index, qstring(text), (QUrl*)url, qstring(iconName), qstring(appName));
}

bool k_fileplacesmodel_has_index(void* self, int row, int column) {
    return QAbstractItemModel_HasIndex((QAbstractItemModel*)self, row, column);
}

bool k_fileplacesmodel_insert_row(void* self, int row) {
    return QAbstractItemModel_InsertRow((QAbstractItemModel*)self, row);
}

bool k_fileplacesmodel_insert_column(void* self, int column) {
    return QAbstractItemModel_InsertColumn((QAbstractItemModel*)self, column);
}

bool k_fileplacesmodel_remove_row(void* self, int row) {
    return QAbstractItemModel_RemoveRow((QAbstractItemModel*)self, row);
}

bool k_fileplacesmodel_remove_column(void* self, int column) {
    return QAbstractItemModel_RemoveColumn((QAbstractItemModel*)self, column);
}

bool k_fileplacesmodel_move_row(void* self, void* sourceParent, int sourceRow, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveRow((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceRow, (QModelIndex*)destinationParent, destinationChild);
}

bool k_fileplacesmodel_move_column(void* self, void* sourceParent, int sourceColumn, void* destinationParent, int destinationChild) {
    return QAbstractItemModel_MoveColumn((QAbstractItemModel*)self, (QModelIndex*)sourceParent, sourceColumn, (QModelIndex*)destinationParent, destinationChild);
}

bool k_fileplacesmodel_check_index(void* self, void* index) {
    return QAbstractItemModel_CheckIndex((QAbstractItemModel*)self, (QModelIndex*)index);
}

void k_fileplacesmodel_data_changed(void* self, void* topLeft, void* bottomRight) {
    QAbstractItemModel_DataChanged((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight);
}

void k_fileplacesmodel_on_data_changed(void* self, void (*callback)(void*, void*, void*)) {
    QAbstractItemModel_Connect_DataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_header_data_changed(void* self, int32_t orientation, int first, int last) {
    QAbstractItemModel_HeaderDataChanged((QAbstractItemModel*)self, orientation, first, last);
}

void k_fileplacesmodel_on_header_data_changed(void* self, void (*callback)(void*, int32_t, int, int)) {
    QAbstractItemModel_Connect_HeaderDataChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_layout_changed(void* self) {
    QAbstractItemModel_LayoutChanged((QAbstractItemModel*)self);
}

void k_fileplacesmodel_on_layout_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_layout_about_to_be_changed(void* self) {
    QAbstractItemModel_LayoutAboutToBeChanged((QAbstractItemModel*)self);
}

void k_fileplacesmodel_on_layout_about_to_be_changed(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged((QAbstractItemModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_has_index3(void* self, int row, int column, void* parent) {
    return QAbstractItemModel_HasIndex3((QAbstractItemModel*)self, row, column, (QModelIndex*)parent);
}

bool k_fileplacesmodel_insert_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_InsertRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_fileplacesmodel_insert_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_InsertColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_fileplacesmodel_remove_row2(void* self, int row, void* parent) {
    return QAbstractItemModel_RemoveRow2((QAbstractItemModel*)self, row, (QModelIndex*)parent);
}

bool k_fileplacesmodel_remove_column2(void* self, int column, void* parent) {
    return QAbstractItemModel_RemoveColumn2((QAbstractItemModel*)self, column, (QModelIndex*)parent);
}

bool k_fileplacesmodel_check_index2(void* self, void* index, int32_t options) {
    return QAbstractItemModel_CheckIndex2((QAbstractItemModel*)self, (QModelIndex*)index, options);
}

void k_fileplacesmodel_data_changed3(void* self, void* topLeft, void* bottomRight, libqt_list roles) {
    QAbstractItemModel_DataChanged3((QAbstractItemModel*)self, (QModelIndex*)topLeft, (QModelIndex*)bottomRight, roles);
}

void k_fileplacesmodel_on_data_changed3(void* self, void (*callback)(void*, void*, void*, int*)) {
    QAbstractItemModel_Connect_DataChanged3((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_layout_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutChanged1((QAbstractItemModel*)self, parents);
}

void k_fileplacesmodel_on_layout_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_layout_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_fileplacesmodel_on_layout_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_layout_about_to_be_changed1(void* self, libqt_list parents) {
    QAbstractItemModel_LayoutAboutToBeChanged1((QAbstractItemModel*)self, parents);
}

void k_fileplacesmodel_on_layout_about_to_be_changed1(void* self, void (*callback)(void*, QPersistentModelIndex**)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged1((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_layout_about_to_be_changed2(void* self, libqt_list parents, int32_t hint) {
    QAbstractItemModel_LayoutAboutToBeChanged2((QAbstractItemModel*)self, parents, hint);
}

void k_fileplacesmodel_on_layout_about_to_be_changed2(void* self, void (*callback)(void*, QPersistentModelIndex**, int32_t)) {
    QAbstractItemModel_Connect_LayoutAboutToBeChanged2((QAbstractItemModel*)self, (intptr_t)callback);
}

const char* k_fileplacesmodel_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_fileplacesmodel_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_fileplacesmodel_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_fileplacesmodel_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_fileplacesmodel_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_fileplacesmodel_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_fileplacesmodel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_fileplacesmodel_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_fileplacesmodel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_fileplacesmodel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_fileplacesmodel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_fileplacesmodel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_fileplacesmodel_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_fileplacesmodel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_fileplacesmodel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_fileplacesmodel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_fileplacesmodel_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_fileplacesmodel_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_fileplacesmodel_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_fileplacesmodel_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_fileplacesmodel_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_fileplacesmodel_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_fileplacesmodel_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_fileplacesmodel_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_fileplacesmodel_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_fileplacesmodel_dynamic_property_names");
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

QBindingStorage* k_fileplacesmodel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_fileplacesmodel_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_fileplacesmodel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_fileplacesmodel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_fileplacesmodel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_fileplacesmodel_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_fileplacesmodel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_fileplacesmodel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_fileplacesmodel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_fileplacesmodel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_fileplacesmodel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QModelIndex* k_fileplacesmodel_sibling(void* self, int row, int column, void* idx) {
    return KFilePlacesModel_Sibling((KFilePlacesModel*)self, row, column, (QModelIndex*)idx);
}

QModelIndex* k_fileplacesmodel_qbase_sibling(void* self, int row, int column, void* idx) {
    return KFilePlacesModel_QBaseSibling((KFilePlacesModel*)self, row, column, (QModelIndex*)idx);
}

void k_fileplacesmodel_on_sibling(void* self, QModelIndex* (*callback)(void*, int, int, void*)) {
    KFilePlacesModel_OnSibling((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_has_children(void* self, void* parent) {
    return KFilePlacesModel_HasChildren((KFilePlacesModel*)self, (QModelIndex*)parent);
}

bool k_fileplacesmodel_qbase_has_children(void* self, void* parent) {
    return KFilePlacesModel_QBaseHasChildren((KFilePlacesModel*)self, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_has_children(void* self, bool (*callback)(void*, void*)) {
    KFilePlacesModel_OnHasChildren((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_set_data(void* self, void* index, void* value, int role) {
    return KFilePlacesModel_SetData((KFilePlacesModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

bool k_fileplacesmodel_qbase_set_data(void* self, void* index, void* value, int role) {
    return KFilePlacesModel_QBaseSetData((KFilePlacesModel*)self, (QModelIndex*)index, (QVariant*)value, role);
}

void k_fileplacesmodel_on_set_data(void* self, bool (*callback)(void*, void*, void*, int)) {
    KFilePlacesModel_OnSetData((KFilePlacesModel*)self, (intptr_t)callback);
}

QVariant* k_fileplacesmodel_header_data(void* self, int section, int32_t orientation, int role) {
    return KFilePlacesModel_HeaderData((KFilePlacesModel*)self, section, orientation, role);
}

QVariant* k_fileplacesmodel_qbase_header_data(void* self, int section, int32_t orientation, int role) {
    return KFilePlacesModel_QBaseHeaderData((KFilePlacesModel*)self, section, orientation, role);
}

void k_fileplacesmodel_on_header_data(void* self, QVariant* (*callback)(void*, int, int32_t, int)) {
    KFilePlacesModel_OnHeaderData((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KFilePlacesModel_SetHeaderData((KFilePlacesModel*)self, section, orientation, (QVariant*)value, role);
}

bool k_fileplacesmodel_qbase_set_header_data(void* self, int section, int32_t orientation, void* value, int role) {
    return KFilePlacesModel_QBaseSetHeaderData((KFilePlacesModel*)self, section, orientation, (QVariant*)value, role);
}

void k_fileplacesmodel_on_set_header_data(void* self, bool (*callback)(void*, int, int32_t, void*, int)) {
    KFilePlacesModel_OnSetHeaderData((KFilePlacesModel*)self, (intptr_t)callback);
}

libqt_map /* of int to QVariant* */ k_fileplacesmodel_item_data(void* self, void* index) {
    return KFilePlacesModel_ItemData((KFilePlacesModel*)self, (QModelIndex*)index);
}

libqt_map /* of int to QVariant* */ k_fileplacesmodel_qbase_item_data(void* self, void* index) {
    return KFilePlacesModel_QBaseItemData((KFilePlacesModel*)self, (QModelIndex*)index);
}

void k_fileplacesmodel_on_item_data(void* self, libqt_map /* of int to QVariant* */ (*callback)(void*, void*)) {
    KFilePlacesModel_OnItemData((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return KFilePlacesModel_SetItemData((KFilePlacesModel*)self, (QModelIndex*)index, roles);
}

bool k_fileplacesmodel_qbase_set_item_data(void* self, void* index, libqt_map /* of int to QVariant* */ roles) {
    return KFilePlacesModel_QBaseSetItemData((KFilePlacesModel*)self, (QModelIndex*)index, roles);
}

void k_fileplacesmodel_on_set_item_data(void* self, bool (*callback)(void*, void*, libqt_map /* of int to QVariant* */)) {
    KFilePlacesModel_OnSetItemData((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_clear_item_data(void* self, void* index) {
    return KFilePlacesModel_ClearItemData((KFilePlacesModel*)self, (QModelIndex*)index);
}

bool k_fileplacesmodel_qbase_clear_item_data(void* self, void* index) {
    return KFilePlacesModel_QBaseClearItemData((KFilePlacesModel*)self, (QModelIndex*)index);
}

void k_fileplacesmodel_on_clear_item_data(void* self, bool (*callback)(void*, void*)) {
    KFilePlacesModel_OnClearItemData((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KFilePlacesModel_CanDropMimeData((KFilePlacesModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

bool k_fileplacesmodel_qbase_can_drop_mime_data(void* self, void* data, int32_t action, int row, int column, void* parent) {
    return KFilePlacesModel_QBaseCanDropMimeData((KFilePlacesModel*)self, (QMimeData*)data, action, row, column, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_can_drop_mime_data(void* self, bool (*callback)(void*, void*, int32_t, int, int, void*)) {
    KFilePlacesModel_OnCanDropMimeData((KFilePlacesModel*)self, (intptr_t)callback);
}

int32_t k_fileplacesmodel_supported_drag_actions(void* self) {
    return KFilePlacesModel_SupportedDragActions((KFilePlacesModel*)self);
}

int32_t k_fileplacesmodel_qbase_supported_drag_actions(void* self) {
    return KFilePlacesModel_QBaseSupportedDragActions((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_supported_drag_actions(void* self, int32_t (*callback)()) {
    KFilePlacesModel_OnSupportedDragActions((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_insert_rows(void* self, int row, int count, void* parent) {
    return KFilePlacesModel_InsertRows((KFilePlacesModel*)self, row, count, (QModelIndex*)parent);
}

bool k_fileplacesmodel_qbase_insert_rows(void* self, int row, int count, void* parent) {
    return KFilePlacesModel_QBaseInsertRows((KFilePlacesModel*)self, row, count, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_insert_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KFilePlacesModel_OnInsertRows((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_insert_columns(void* self, int column, int count, void* parent) {
    return KFilePlacesModel_InsertColumns((KFilePlacesModel*)self, column, count, (QModelIndex*)parent);
}

bool k_fileplacesmodel_qbase_insert_columns(void* self, int column, int count, void* parent) {
    return KFilePlacesModel_QBaseInsertColumns((KFilePlacesModel*)self, column, count, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_insert_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KFilePlacesModel_OnInsertColumns((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_remove_rows(void* self, int row, int count, void* parent) {
    return KFilePlacesModel_RemoveRows((KFilePlacesModel*)self, row, count, (QModelIndex*)parent);
}

bool k_fileplacesmodel_qbase_remove_rows(void* self, int row, int count, void* parent) {
    return KFilePlacesModel_QBaseRemoveRows((KFilePlacesModel*)self, row, count, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_remove_rows(void* self, bool (*callback)(void*, int, int, void*)) {
    KFilePlacesModel_OnRemoveRows((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_remove_columns(void* self, int column, int count, void* parent) {
    return KFilePlacesModel_RemoveColumns((KFilePlacesModel*)self, column, count, (QModelIndex*)parent);
}

bool k_fileplacesmodel_qbase_remove_columns(void* self, int column, int count, void* parent) {
    return KFilePlacesModel_QBaseRemoveColumns((KFilePlacesModel*)self, column, count, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_remove_columns(void* self, bool (*callback)(void*, int, int, void*)) {
    KFilePlacesModel_OnRemoveColumns((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KFilePlacesModel_MoveRows((KFilePlacesModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_fileplacesmodel_qbase_move_rows(void* self, void* sourceParent, int sourceRow, int count, void* destinationParent, int destinationChild) {
    return KFilePlacesModel_QBaseMoveRows((KFilePlacesModel*)self, (QModelIndex*)sourceParent, sourceRow, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_fileplacesmodel_on_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KFilePlacesModel_OnMoveRows((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KFilePlacesModel_MoveColumns((KFilePlacesModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

bool k_fileplacesmodel_qbase_move_columns(void* self, void* sourceParent, int sourceColumn, int count, void* destinationParent, int destinationChild) {
    return KFilePlacesModel_QBaseMoveColumns((KFilePlacesModel*)self, (QModelIndex*)sourceParent, sourceColumn, count, (QModelIndex*)destinationParent, destinationChild);
}

void k_fileplacesmodel_on_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KFilePlacesModel_OnMoveColumns((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_fetch_more(void* self, void* parent) {
    KFilePlacesModel_FetchMore((KFilePlacesModel*)self, (QModelIndex*)parent);
}

void k_fileplacesmodel_qbase_fetch_more(void* self, void* parent) {
    KFilePlacesModel_QBaseFetchMore((KFilePlacesModel*)self, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_fetch_more(void* self, void (*callback)(void*, void*)) {
    KFilePlacesModel_OnFetchMore((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_can_fetch_more(void* self, void* parent) {
    return KFilePlacesModel_CanFetchMore((KFilePlacesModel*)self, (QModelIndex*)parent);
}

bool k_fileplacesmodel_qbase_can_fetch_more(void* self, void* parent) {
    return KFilePlacesModel_QBaseCanFetchMore((KFilePlacesModel*)self, (QModelIndex*)parent);
}

void k_fileplacesmodel_on_can_fetch_more(void* self, bool (*callback)(void*, void*)) {
    KFilePlacesModel_OnCanFetchMore((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_sort(void* self, int column, int32_t order) {
    KFilePlacesModel_Sort((KFilePlacesModel*)self, column, order);
}

void k_fileplacesmodel_qbase_sort(void* self, int column, int32_t order) {
    KFilePlacesModel_QBaseSort((KFilePlacesModel*)self, column, order);
}

void k_fileplacesmodel_on_sort(void* self, void (*callback)(void*, int, int32_t)) {
    KFilePlacesModel_OnSort((KFilePlacesModel*)self, (intptr_t)callback);
}

QModelIndex* k_fileplacesmodel_buddy(void* self, void* index) {
    return KFilePlacesModel_Buddy((KFilePlacesModel*)self, (QModelIndex*)index);
}

QModelIndex* k_fileplacesmodel_qbase_buddy(void* self, void* index) {
    return KFilePlacesModel_QBaseBuddy((KFilePlacesModel*)self, (QModelIndex*)index);
}

void k_fileplacesmodel_on_buddy(void* self, QModelIndex* (*callback)(void*, void*)) {
    KFilePlacesModel_OnBuddy((KFilePlacesModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_fileplacesmodel_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KFilePlacesModel_Match((KFilePlacesModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_fileplacesmodel_qbase_match(void* self, void* start, int role, void* value, int hits, int32_t flags) {
    libqt_list _arr = KFilePlacesModel_QBaseMatch((KFilePlacesModel*)self, (QModelIndex*)start, role, (QVariant*)value, hits, flags);
    return _arr;
}

void k_fileplacesmodel_on_match(void* self, QModelIndex** (*callback)(void*, void*, int, void*, int, int32_t)) {
    KFilePlacesModel_OnMatch((KFilePlacesModel*)self, (intptr_t)callback);
}

QSize* k_fileplacesmodel_span(void* self, void* index) {
    return KFilePlacesModel_Span((KFilePlacesModel*)self, (QModelIndex*)index);
}

QSize* k_fileplacesmodel_qbase_span(void* self, void* index) {
    return KFilePlacesModel_QBaseSpan((KFilePlacesModel*)self, (QModelIndex*)index);
}

void k_fileplacesmodel_on_span(void* self, QSize* (*callback)(void*, void*)) {
    KFilePlacesModel_OnSpan((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_multi_data(void* self, void* index, void* roleDataSpan) {
    KFilePlacesModel_MultiData((KFilePlacesModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_fileplacesmodel_qbase_multi_data(void* self, void* index, void* roleDataSpan) {
    KFilePlacesModel_QBaseMultiData((KFilePlacesModel*)self, (QModelIndex*)index, (QModelRoleDataSpan*)roleDataSpan);
}

void k_fileplacesmodel_on_multi_data(void* self, void (*callback)(void*, void*, void*)) {
    KFilePlacesModel_OnMultiData((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_submit(void* self) {
    return KFilePlacesModel_Submit((KFilePlacesModel*)self);
}

bool k_fileplacesmodel_qbase_submit(void* self) {
    return KFilePlacesModel_QBaseSubmit((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_submit(void* self, bool (*callback)()) {
    KFilePlacesModel_OnSubmit((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_revert(void* self) {
    KFilePlacesModel_Revert((KFilePlacesModel*)self);
}

void k_fileplacesmodel_qbase_revert(void* self) {
    KFilePlacesModel_QBaseRevert((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_revert(void* self, void (*callback)()) {
    KFilePlacesModel_OnRevert((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_reset_internal_data(void* self) {
    KFilePlacesModel_ResetInternalData((KFilePlacesModel*)self);
}

void k_fileplacesmodel_qbase_reset_internal_data(void* self) {
    KFilePlacesModel_QBaseResetInternalData((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_reset_internal_data(void* self, void (*callback)()) {
    KFilePlacesModel_OnResetInternalData((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_event(void* self, void* event) {
    return KFilePlacesModel_Event((KFilePlacesModel*)self, (QEvent*)event);
}

bool k_fileplacesmodel_qbase_event(void* self, void* event) {
    return KFilePlacesModel_QBaseEvent((KFilePlacesModel*)self, (QEvent*)event);
}

void k_fileplacesmodel_on_event(void* self, bool (*callback)(void*, void*)) {
    KFilePlacesModel_OnEvent((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_event_filter(void* self, void* watched, void* event) {
    return KFilePlacesModel_EventFilter((KFilePlacesModel*)self, (QObject*)watched, (QEvent*)event);
}

bool k_fileplacesmodel_qbase_event_filter(void* self, void* watched, void* event) {
    return KFilePlacesModel_QBaseEventFilter((KFilePlacesModel*)self, (QObject*)watched, (QEvent*)event);
}

void k_fileplacesmodel_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KFilePlacesModel_OnEventFilter((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_timer_event(void* self, void* event) {
    KFilePlacesModel_TimerEvent((KFilePlacesModel*)self, (QTimerEvent*)event);
}

void k_fileplacesmodel_qbase_timer_event(void* self, void* event) {
    KFilePlacesModel_QBaseTimerEvent((KFilePlacesModel*)self, (QTimerEvent*)event);
}

void k_fileplacesmodel_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesModel_OnTimerEvent((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_child_event(void* self, void* event) {
    KFilePlacesModel_ChildEvent((KFilePlacesModel*)self, (QChildEvent*)event);
}

void k_fileplacesmodel_qbase_child_event(void* self, void* event) {
    KFilePlacesModel_QBaseChildEvent((KFilePlacesModel*)self, (QChildEvent*)event);
}

void k_fileplacesmodel_on_child_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesModel_OnChildEvent((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_custom_event(void* self, void* event) {
    KFilePlacesModel_CustomEvent((KFilePlacesModel*)self, (QEvent*)event);
}

void k_fileplacesmodel_qbase_custom_event(void* self, void* event) {
    KFilePlacesModel_QBaseCustomEvent((KFilePlacesModel*)self, (QEvent*)event);
}

void k_fileplacesmodel_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KFilePlacesModel_OnCustomEvent((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_connect_notify(void* self, void* signal) {
    KFilePlacesModel_ConnectNotify((KFilePlacesModel*)self, (QMetaMethod*)signal);
}

void k_fileplacesmodel_qbase_connect_notify(void* self, void* signal) {
    KFilePlacesModel_QBaseConnectNotify((KFilePlacesModel*)self, (QMetaMethod*)signal);
}

void k_fileplacesmodel_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KFilePlacesModel_OnConnectNotify((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_disconnect_notify(void* self, void* signal) {
    KFilePlacesModel_DisconnectNotify((KFilePlacesModel*)self, (QMetaMethod*)signal);
}

void k_fileplacesmodel_qbase_disconnect_notify(void* self, void* signal) {
    KFilePlacesModel_QBaseDisconnectNotify((KFilePlacesModel*)self, (QMetaMethod*)signal);
}

void k_fileplacesmodel_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KFilePlacesModel_OnDisconnectNotify((KFilePlacesModel*)self, (intptr_t)callback);
}

QModelIndex* k_fileplacesmodel_create_index(void* self, int row, int column) {
    return KFilePlacesModel_CreateIndex((KFilePlacesModel*)self, row, column);
}

QModelIndex* k_fileplacesmodel_qbase_create_index(void* self, int row, int column) {
    return KFilePlacesModel_QBaseCreateIndex((KFilePlacesModel*)self, row, column);
}

void k_fileplacesmodel_on_create_index(void* self, QModelIndex* (*callback)(void*, int, int)) {
    KFilePlacesModel_OnCreateIndex((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_encode_data(void* self, libqt_list indexes, void* stream) {
    KFilePlacesModel_EncodeData((KFilePlacesModel*)self, indexes, (QDataStream*)stream);
}

void k_fileplacesmodel_qbase_encode_data(void* self, libqt_list indexes, void* stream) {
    KFilePlacesModel_QBaseEncodeData((KFilePlacesModel*)self, indexes, (QDataStream*)stream);
}

void k_fileplacesmodel_on_encode_data(void* self, void (*callback)(void*, QModelIndex**, void*)) {
    KFilePlacesModel_OnEncodeData((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KFilePlacesModel_DecodeData((KFilePlacesModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

bool k_fileplacesmodel_qbase_decode_data(void* self, int row, int column, void* parent, void* stream) {
    return KFilePlacesModel_QBaseDecodeData((KFilePlacesModel*)self, row, column, (QModelIndex*)parent, (QDataStream*)stream);
}

void k_fileplacesmodel_on_decode_data(void* self, bool (*callback)(void*, int, int, void*, void*)) {
    KFilePlacesModel_OnDecodeData((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_begin_insert_rows(void* self, void* parent, int first, int last) {
    KFilePlacesModel_BeginInsertRows((KFilePlacesModel*)self, (QModelIndex*)parent, first, last);
}

void k_fileplacesmodel_qbase_begin_insert_rows(void* self, void* parent, int first, int last) {
    KFilePlacesModel_QBaseBeginInsertRows((KFilePlacesModel*)self, (QModelIndex*)parent, first, last);
}

void k_fileplacesmodel_on_begin_insert_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KFilePlacesModel_OnBeginInsertRows((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_end_insert_rows(void* self) {
    KFilePlacesModel_EndInsertRows((KFilePlacesModel*)self);
}

void k_fileplacesmodel_qbase_end_insert_rows(void* self) {
    KFilePlacesModel_QBaseEndInsertRows((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_end_insert_rows(void* self, void (*callback)()) {
    KFilePlacesModel_OnEndInsertRows((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_begin_remove_rows(void* self, void* parent, int first, int last) {
    KFilePlacesModel_BeginRemoveRows((KFilePlacesModel*)self, (QModelIndex*)parent, first, last);
}

void k_fileplacesmodel_qbase_begin_remove_rows(void* self, void* parent, int first, int last) {
    KFilePlacesModel_QBaseBeginRemoveRows((KFilePlacesModel*)self, (QModelIndex*)parent, first, last);
}

void k_fileplacesmodel_on_begin_remove_rows(void* self, void (*callback)(void*, void*, int, int)) {
    KFilePlacesModel_OnBeginRemoveRows((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_end_remove_rows(void* self) {
    KFilePlacesModel_EndRemoveRows((KFilePlacesModel*)self);
}

void k_fileplacesmodel_qbase_end_remove_rows(void* self) {
    KFilePlacesModel_QBaseEndRemoveRows((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_end_remove_rows(void* self, void (*callback)()) {
    KFilePlacesModel_OnEndRemoveRows((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KFilePlacesModel_BeginMoveRows((KFilePlacesModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

bool k_fileplacesmodel_qbase_begin_move_rows(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationRow) {
    return KFilePlacesModel_QBaseBeginMoveRows((KFilePlacesModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationRow);
}

void k_fileplacesmodel_on_begin_move_rows(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KFilePlacesModel_OnBeginMoveRows((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_end_move_rows(void* self) {
    KFilePlacesModel_EndMoveRows((KFilePlacesModel*)self);
}

void k_fileplacesmodel_qbase_end_move_rows(void* self) {
    KFilePlacesModel_QBaseEndMoveRows((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_end_move_rows(void* self, void (*callback)()) {
    KFilePlacesModel_OnEndMoveRows((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_begin_insert_columns(void* self, void* parent, int first, int last) {
    KFilePlacesModel_BeginInsertColumns((KFilePlacesModel*)self, (QModelIndex*)parent, first, last);
}

void k_fileplacesmodel_qbase_begin_insert_columns(void* self, void* parent, int first, int last) {
    KFilePlacesModel_QBaseBeginInsertColumns((KFilePlacesModel*)self, (QModelIndex*)parent, first, last);
}

void k_fileplacesmodel_on_begin_insert_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KFilePlacesModel_OnBeginInsertColumns((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_end_insert_columns(void* self) {
    KFilePlacesModel_EndInsertColumns((KFilePlacesModel*)self);
}

void k_fileplacesmodel_qbase_end_insert_columns(void* self) {
    KFilePlacesModel_QBaseEndInsertColumns((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_end_insert_columns(void* self, void (*callback)()) {
    KFilePlacesModel_OnEndInsertColumns((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_begin_remove_columns(void* self, void* parent, int first, int last) {
    KFilePlacesModel_BeginRemoveColumns((KFilePlacesModel*)self, (QModelIndex*)parent, first, last);
}

void k_fileplacesmodel_qbase_begin_remove_columns(void* self, void* parent, int first, int last) {
    KFilePlacesModel_QBaseBeginRemoveColumns((KFilePlacesModel*)self, (QModelIndex*)parent, first, last);
}

void k_fileplacesmodel_on_begin_remove_columns(void* self, void (*callback)(void*, void*, int, int)) {
    KFilePlacesModel_OnBeginRemoveColumns((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_end_remove_columns(void* self) {
    KFilePlacesModel_EndRemoveColumns((KFilePlacesModel*)self);
}

void k_fileplacesmodel_qbase_end_remove_columns(void* self) {
    KFilePlacesModel_QBaseEndRemoveColumns((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_end_remove_columns(void* self, void (*callback)()) {
    KFilePlacesModel_OnEndRemoveColumns((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KFilePlacesModel_BeginMoveColumns((KFilePlacesModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

bool k_fileplacesmodel_qbase_begin_move_columns(void* self, void* sourceParent, int sourceFirst, int sourceLast, void* destinationParent, int destinationColumn) {
    return KFilePlacesModel_QBaseBeginMoveColumns((KFilePlacesModel*)self, (QModelIndex*)sourceParent, sourceFirst, sourceLast, (QModelIndex*)destinationParent, destinationColumn);
}

void k_fileplacesmodel_on_begin_move_columns(void* self, bool (*callback)(void*, void*, int, int, void*, int)) {
    KFilePlacesModel_OnBeginMoveColumns((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_end_move_columns(void* self) {
    KFilePlacesModel_EndMoveColumns((KFilePlacesModel*)self);
}

void k_fileplacesmodel_qbase_end_move_columns(void* self) {
    KFilePlacesModel_QBaseEndMoveColumns((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_end_move_columns(void* self, void (*callback)()) {
    KFilePlacesModel_OnEndMoveColumns((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_begin_reset_model(void* self) {
    KFilePlacesModel_BeginResetModel((KFilePlacesModel*)self);
}

void k_fileplacesmodel_qbase_begin_reset_model(void* self) {
    KFilePlacesModel_QBaseBeginResetModel((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_begin_reset_model(void* self, void (*callback)()) {
    KFilePlacesModel_OnBeginResetModel((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_end_reset_model(void* self) {
    KFilePlacesModel_EndResetModel((KFilePlacesModel*)self);
}

void k_fileplacesmodel_qbase_end_reset_model(void* self) {
    KFilePlacesModel_QBaseEndResetModel((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_end_reset_model(void* self, void (*callback)()) {
    KFilePlacesModel_OnEndResetModel((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_change_persistent_index(void* self, void* from, void* to) {
    KFilePlacesModel_ChangePersistentIndex((KFilePlacesModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_fileplacesmodel_qbase_change_persistent_index(void* self, void* from, void* to) {
    KFilePlacesModel_QBaseChangePersistentIndex((KFilePlacesModel*)self, (QModelIndex*)from, (QModelIndex*)to);
}

void k_fileplacesmodel_on_change_persistent_index(void* self, void (*callback)(void*, void*, void*)) {
    KFilePlacesModel_OnChangePersistentIndex((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KFilePlacesModel_ChangePersistentIndexList((KFilePlacesModel*)self, from, to);
}

void k_fileplacesmodel_qbase_change_persistent_index_list(void* self, libqt_list from, libqt_list to) {
    KFilePlacesModel_QBaseChangePersistentIndexList((KFilePlacesModel*)self, from, to);
}

void k_fileplacesmodel_on_change_persistent_index_list(void* self, void (*callback)(void*, QModelIndex**, QModelIndex**)) {
    KFilePlacesModel_OnChangePersistentIndexList((KFilePlacesModel*)self, (intptr_t)callback);
}

libqt_list /* of QModelIndex* */ k_fileplacesmodel_persistent_index_list(void* self) {
    libqt_list _arr = KFilePlacesModel_PersistentIndexList((KFilePlacesModel*)self);
    return _arr;
}

libqt_list /* of QModelIndex* */ k_fileplacesmodel_qbase_persistent_index_list(void* self) {
    libqt_list _arr = KFilePlacesModel_QBasePersistentIndexList((KFilePlacesModel*)self);
    return _arr;
}

void k_fileplacesmodel_on_persistent_index_list(void* self, QModelIndex** (*callback)()) {
    KFilePlacesModel_OnPersistentIndexList((KFilePlacesModel*)self, (intptr_t)callback);
}

QObject* k_fileplacesmodel_sender(void* self) {
    return KFilePlacesModel_Sender((KFilePlacesModel*)self);
}

QObject* k_fileplacesmodel_qbase_sender(void* self) {
    return KFilePlacesModel_QBaseSender((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_sender(void* self, QObject* (*callback)()) {
    KFilePlacesModel_OnSender((KFilePlacesModel*)self, (intptr_t)callback);
}

int32_t k_fileplacesmodel_sender_signal_index(void* self) {
    return KFilePlacesModel_SenderSignalIndex((KFilePlacesModel*)self);
}

int32_t k_fileplacesmodel_qbase_sender_signal_index(void* self) {
    return KFilePlacesModel_QBaseSenderSignalIndex((KFilePlacesModel*)self);
}

void k_fileplacesmodel_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KFilePlacesModel_OnSenderSignalIndex((KFilePlacesModel*)self, (intptr_t)callback);
}

int32_t k_fileplacesmodel_receivers(void* self, const char* signal) {
    return KFilePlacesModel_Receivers((KFilePlacesModel*)self, signal);
}

int32_t k_fileplacesmodel_qbase_receivers(void* self, const char* signal) {
    return KFilePlacesModel_QBaseReceivers((KFilePlacesModel*)self, signal);
}

void k_fileplacesmodel_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KFilePlacesModel_OnReceivers((KFilePlacesModel*)self, (intptr_t)callback);
}

bool k_fileplacesmodel_is_signal_connected(void* self, void* signal) {
    return KFilePlacesModel_IsSignalConnected((KFilePlacesModel*)self, (QMetaMethod*)signal);
}

bool k_fileplacesmodel_qbase_is_signal_connected(void* self, void* signal) {
    return KFilePlacesModel_QBaseIsSignalConnected((KFilePlacesModel*)self, (QMetaMethod*)signal);
}

void k_fileplacesmodel_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KFilePlacesModel_OnIsSignalConnected((KFilePlacesModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_rows_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_rows_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_rows_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_rows_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_RowsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_columns_about_to_be_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_columns_inserted(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsInserted((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_columns_about_to_be_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_columns_removed(void* self, void (*callback)(void*, void*, int, int)) {
    QAbstractItemModel_Connect_ColumnsRemoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_model_about_to_be_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelAboutToBeReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_model_reset(void* self, void (*callback)(void*)) {
    QAbstractItemModel_Connect_ModelReset((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_rows_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_rows_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_RowsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_columns_about_to_be_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsAboutToBeMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_columns_moved(void* self, void (*callback)(void*, void*, int, int, void*, int)) {
    QAbstractItemModel_Connect_ColumnsMoved((QAbstractItemModel*)self, (intptr_t)callback);
}

void k_fileplacesmodel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_fileplacesmodel_delete(void* self) {
    KFilePlacesModel_Delete((KFilePlacesModel*)(self));
}
