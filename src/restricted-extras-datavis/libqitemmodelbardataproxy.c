#include "libqabstractdataproxy.hpp"
#include "../libqabstractitemmodel.hpp"
#include "libqbardataproxy.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqregularexpression.hpp"
#include "libqitemmodelbardataproxy.hpp"
#include "libqitemmodelbardataproxy.h"

QItemModelBarDataProxy* q_itemmodelbardataproxy_new() {
    return QItemModelBarDataProxy_New();
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new2(void* itemModel) {
    return QItemModelBarDataProxy_New2((QAbstractItemModel*)itemModel);
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new3(void* itemModel, const char* valueRole) {
    return QItemModelBarDataProxy_New3((QAbstractItemModel*)itemModel, qstring(valueRole));
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new4(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole) {
    return QItemModelBarDataProxy_New4((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(valueRole));
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new5(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rotationRole) {
    return QItemModelBarDataProxy_New5((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(valueRole), qstring(rotationRole));
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new6(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rowCategories[static 1], const char* columnCategories[static 1]) {
    size_t rowCategories_len = libqt_strv_length(rowCategories);
    libqt_string* rowCategories_qstr = (libqt_string*)malloc(rowCategories_len * sizeof(libqt_string));
    if (rowCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_new6\n");
        abort();
    }
    for (size_t i = 0; i < rowCategories_len; ++i)
        rowCategories_qstr[i] = qstring(rowCategories[i]);
    libqt_list rowCategories_list = qlist(rowCategories_qstr, rowCategories_len);
    size_t columnCategories_len = libqt_strv_length(columnCategories);
    libqt_string* columnCategories_qstr = (libqt_string*)malloc(columnCategories_len * sizeof(libqt_string));
    if (columnCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_new6\n");
        abort();
    }
    for (size_t i = 0; i < columnCategories_len; ++i)
        columnCategories_qstr[i] = qstring(columnCategories[i]);
    libqt_list columnCategories_list = qlist(columnCategories_qstr, columnCategories_len);

    QItemModelBarDataProxy* _out = QItemModelBarDataProxy_New6((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(valueRole), rowCategories_list, columnCategories_list);
    free(rowCategories_qstr);
    free(columnCategories_qstr);
    return _out;
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new7(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rotationRole, const char* rowCategories[static 1], const char* columnCategories[static 1]) {
    size_t rowCategories_len = libqt_strv_length(rowCategories);
    libqt_string* rowCategories_qstr = (libqt_string*)malloc(rowCategories_len * sizeof(libqt_string));
    if (rowCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_new7\n");
        abort();
    }
    for (size_t i = 0; i < rowCategories_len; ++i)
        rowCategories_qstr[i] = qstring(rowCategories[i]);
    libqt_list rowCategories_list = qlist(rowCategories_qstr, rowCategories_len);
    size_t columnCategories_len = libqt_strv_length(columnCategories);
    libqt_string* columnCategories_qstr = (libqt_string*)malloc(columnCategories_len * sizeof(libqt_string));
    if (columnCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_new7\n");
        abort();
    }
    for (size_t i = 0; i < columnCategories_len; ++i)
        columnCategories_qstr[i] = qstring(columnCategories[i]);
    libqt_list columnCategories_list = qlist(columnCategories_qstr, columnCategories_len);

    QItemModelBarDataProxy* _out = QItemModelBarDataProxy_New7((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(valueRole), qstring(rotationRole), rowCategories_list, columnCategories_list);
    free(rowCategories_qstr);
    free(columnCategories_qstr);
    return _out;
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new8(void* parent) {
    return QItemModelBarDataProxy_New8((QObject*)parent);
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new9(void* itemModel, void* parent) {
    return QItemModelBarDataProxy_New9((QAbstractItemModel*)itemModel, (QObject*)parent);
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new10(void* itemModel, const char* valueRole, void* parent) {
    return QItemModelBarDataProxy_New10((QAbstractItemModel*)itemModel, qstring(valueRole), (QObject*)parent);
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new11(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, void* parent) {
    return QItemModelBarDataProxy_New11((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(valueRole), (QObject*)parent);
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new12(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rotationRole, void* parent) {
    return QItemModelBarDataProxy_New12((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(valueRole), qstring(rotationRole), (QObject*)parent);
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new13(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rowCategories[static 1], const char* columnCategories[static 1], void* parent) {
    size_t rowCategories_len = libqt_strv_length(rowCategories);
    libqt_string* rowCategories_qstr = (libqt_string*)malloc(rowCategories_len * sizeof(libqt_string));
    if (rowCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_new13\n");
        abort();
    }
    for (size_t i = 0; i < rowCategories_len; ++i)
        rowCategories_qstr[i] = qstring(rowCategories[i]);
    libqt_list rowCategories_list = qlist(rowCategories_qstr, rowCategories_len);
    size_t columnCategories_len = libqt_strv_length(columnCategories);
    libqt_string* columnCategories_qstr = (libqt_string*)malloc(columnCategories_len * sizeof(libqt_string));
    if (columnCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_new13\n");
        abort();
    }
    for (size_t i = 0; i < columnCategories_len; ++i)
        columnCategories_qstr[i] = qstring(columnCategories[i]);
    libqt_list columnCategories_list = qlist(columnCategories_qstr, columnCategories_len);

    QItemModelBarDataProxy* _out = QItemModelBarDataProxy_New13((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(valueRole), rowCategories_list, columnCategories_list, (QObject*)parent);
    free(rowCategories_qstr);
    free(columnCategories_qstr);
    return _out;
}

QItemModelBarDataProxy* q_itemmodelbardataproxy_new14(void* itemModel, const char* rowRole, const char* columnRole, const char* valueRole, const char* rotationRole, const char* rowCategories[static 1], const char* columnCategories[static 1], void* parent) {
    size_t rowCategories_len = libqt_strv_length(rowCategories);
    libqt_string* rowCategories_qstr = (libqt_string*)malloc(rowCategories_len * sizeof(libqt_string));
    if (rowCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_new14\n");
        abort();
    }
    for (size_t i = 0; i < rowCategories_len; ++i)
        rowCategories_qstr[i] = qstring(rowCategories[i]);
    libqt_list rowCategories_list = qlist(rowCategories_qstr, rowCategories_len);
    size_t columnCategories_len = libqt_strv_length(columnCategories);
    libqt_string* columnCategories_qstr = (libqt_string*)malloc(columnCategories_len * sizeof(libqt_string));
    if (columnCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_new14\n");
        abort();
    }
    for (size_t i = 0; i < columnCategories_len; ++i)
        columnCategories_qstr[i] = qstring(columnCategories[i]);
    libqt_list columnCategories_list = qlist(columnCategories_qstr, columnCategories_len);

    QItemModelBarDataProxy* _out = QItemModelBarDataProxy_New14((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(valueRole), qstring(rotationRole), rowCategories_list, columnCategories_list, (QObject*)parent);
    free(rowCategories_qstr);
    free(columnCategories_qstr);
    return _out;
}

const QMetaObject* q_itemmodelbardataproxy_meta_object(const void* self) {
    return QItemModelBarDataProxy_MetaObject((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QItemModelBarDataProxy_OnMetaObject((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

const QMetaObject* q_itemmodelbardataproxy_super_meta_object(const void* self) {
    return QItemModelBarDataProxy_SuperMetaObject((QItemModelBarDataProxy*)self);
}

void* q_itemmodelbardataproxy_metacast(void* self, const char* param1) {
    return QItemModelBarDataProxy_Metacast((QItemModelBarDataProxy*)self, param1);
}

void q_itemmodelbardataproxy_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QItemModelBarDataProxy_OnMetacast((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void* q_itemmodelbardataproxy_super_metacast(void* self, const char* param1) {
    return QItemModelBarDataProxy_SuperMetacast((QItemModelBarDataProxy*)self, param1);
}

int32_t q_itemmodelbardataproxy_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QItemModelBarDataProxy_Metacall((QItemModelBarDataProxy*)self, param1, param2, param3);
}

void q_itemmodelbardataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QItemModelBarDataProxy_OnMetacall((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

int32_t q_itemmodelbardataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QItemModelBarDataProxy_SuperMetacall((QItemModelBarDataProxy*)self, param1, param2, param3);
}

const char* q_itemmodelbardataproxy_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelbardataproxy_set_item_model(void* self, void* itemModel) {
    QItemModelBarDataProxy_SetItemModel((QItemModelBarDataProxy*)self, (QAbstractItemModel*)itemModel);
}

QAbstractItemModel* q_itemmodelbardataproxy_item_model(const void* self) {
    return QItemModelBarDataProxy_ItemModel((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_set_row_role(void* self, const char* role) {
    QItemModelBarDataProxy_SetRowRole((QItemModelBarDataProxy*)self, qstring(role));
}

const char* q_itemmodelbardataproxy_row_role(const void* self) {
    libqt_string _str = QItemModelBarDataProxy_RowRole((QItemModelBarDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelbardataproxy_set_column_role(void* self, const char* role) {
    QItemModelBarDataProxy_SetColumnRole((QItemModelBarDataProxy*)self, qstring(role));
}

const char* q_itemmodelbardataproxy_column_role(const void* self) {
    libqt_string _str = QItemModelBarDataProxy_ColumnRole((QItemModelBarDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelbardataproxy_set_value_role(void* self, const char* role) {
    QItemModelBarDataProxy_SetValueRole((QItemModelBarDataProxy*)self, qstring(role));
}

const char* q_itemmodelbardataproxy_value_role(const void* self) {
    libqt_string _str = QItemModelBarDataProxy_ValueRole((QItemModelBarDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelbardataproxy_set_rotation_role(void* self, const char* role) {
    QItemModelBarDataProxy_SetRotationRole((QItemModelBarDataProxy*)self, qstring(role));
}

const char* q_itemmodelbardataproxy_rotation_role(const void* self) {
    libqt_string _str = QItemModelBarDataProxy_RotationRole((QItemModelBarDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelbardataproxy_set_row_categories(void* self, const char* categories[static 1]) {
    size_t categories_len = libqt_strv_length(categories);
    libqt_string* categories_qstr = (libqt_string*)malloc(categories_len * sizeof(libqt_string));
    if (categories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_set_row_categories\n");
        abort();
    }
    for (size_t i = 0; i < categories_len; ++i)
        categories_qstr[i] = qstring(categories[i]);
    libqt_list categories_list = qlist(categories_qstr, categories_len);
    QItemModelBarDataProxy_SetRowCategories((QItemModelBarDataProxy*)self, categories_list);
    free(categories_qstr);
}

const char** q_itemmodelbardataproxy_row_categories(const void* self) {
    libqt_list _arr = QItemModelBarDataProxy_RowCategories((QItemModelBarDataProxy*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_row_categories\n");
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

void q_itemmodelbardataproxy_set_column_categories(void* self, const char* categories[static 1]) {
    size_t categories_len = libqt_strv_length(categories);
    libqt_string* categories_qstr = (libqt_string*)malloc(categories_len * sizeof(libqt_string));
    if (categories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_set_column_categories\n");
        abort();
    }
    for (size_t i = 0; i < categories_len; ++i)
        categories_qstr[i] = qstring(categories[i]);
    libqt_list categories_list = qlist(categories_qstr, categories_len);
    QItemModelBarDataProxy_SetColumnCategories((QItemModelBarDataProxy*)self, categories_list);
    free(categories_qstr);
}

const char** q_itemmodelbardataproxy_column_categories(const void* self) {
    libqt_list _arr = QItemModelBarDataProxy_ColumnCategories((QItemModelBarDataProxy*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_column_categories\n");
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

void q_itemmodelbardataproxy_set_use_model_categories(void* self, bool enable) {
    QItemModelBarDataProxy_SetUseModelCategories((QItemModelBarDataProxy*)self, enable);
}

bool q_itemmodelbardataproxy_use_model_categories(const void* self) {
    return QItemModelBarDataProxy_UseModelCategories((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_set_auto_row_categories(void* self, bool enable) {
    QItemModelBarDataProxy_SetAutoRowCategories((QItemModelBarDataProxy*)self, enable);
}

bool q_itemmodelbardataproxy_auto_row_categories(const void* self) {
    return QItemModelBarDataProxy_AutoRowCategories((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_set_auto_column_categories(void* self, bool enable) {
    QItemModelBarDataProxy_SetAutoColumnCategories((QItemModelBarDataProxy*)self, enable);
}

bool q_itemmodelbardataproxy_auto_column_categories(const void* self) {
    return QItemModelBarDataProxy_AutoColumnCategories((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_remap(void* self, const char* rowRole, const char* columnRole, const char* valueRole, const char* rotationRole, const char* rowCategories[static 1], const char* columnCategories[static 1]) {
    size_t rowCategories_len = libqt_strv_length(rowCategories);
    libqt_string* rowCategories_qstr = (libqt_string*)malloc(rowCategories_len * sizeof(libqt_string));
    if (rowCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_remap\n");
        abort();
    }
    for (size_t i = 0; i < rowCategories_len; ++i)
        rowCategories_qstr[i] = qstring(rowCategories[i]);
    libqt_list rowCategories_list = qlist(rowCategories_qstr, rowCategories_len);
    size_t columnCategories_len = libqt_strv_length(columnCategories);
    libqt_string* columnCategories_qstr = (libqt_string*)malloc(columnCategories_len * sizeof(libqt_string));
    if (columnCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_remap\n");
        abort();
    }
    for (size_t i = 0; i < columnCategories_len; ++i)
        columnCategories_qstr[i] = qstring(columnCategories[i]);
    libqt_list columnCategories_list = qlist(columnCategories_qstr, columnCategories_len);
    QItemModelBarDataProxy_Remap((QItemModelBarDataProxy*)self, qstring(rowRole), qstring(columnRole), qstring(valueRole), qstring(rotationRole), rowCategories_list, columnCategories_list);
    free(rowCategories_qstr);

    free(columnCategories_qstr);
}

int32_t q_itemmodelbardataproxy_row_category_index(void* self, const char* category) {
    return QItemModelBarDataProxy_RowCategoryIndex((QItemModelBarDataProxy*)self, qstring(category));
}

int32_t q_itemmodelbardataproxy_column_category_index(void* self, const char* category) {
    return QItemModelBarDataProxy_ColumnCategoryIndex((QItemModelBarDataProxy*)self, qstring(category));
}

void q_itemmodelbardataproxy_set_row_role_pattern(void* self, const void* pattern) {
    QItemModelBarDataProxy_SetRowRolePattern((QItemModelBarDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelbardataproxy_row_role_pattern(const void* self) {
    return QItemModelBarDataProxy_RowRolePattern((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_set_column_role_pattern(void* self, const void* pattern) {
    QItemModelBarDataProxy_SetColumnRolePattern((QItemModelBarDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelbardataproxy_column_role_pattern(const void* self) {
    return QItemModelBarDataProxy_ColumnRolePattern((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_set_value_role_pattern(void* self, const void* pattern) {
    QItemModelBarDataProxy_SetValueRolePattern((QItemModelBarDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelbardataproxy_value_role_pattern(const void* self) {
    return QItemModelBarDataProxy_ValueRolePattern((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_set_rotation_role_pattern(void* self, const void* pattern) {
    QItemModelBarDataProxy_SetRotationRolePattern((QItemModelBarDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelbardataproxy_rotation_role_pattern(const void* self) {
    return QItemModelBarDataProxy_RotationRolePattern((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_set_row_role_replace(void* self, const char* replace) {
    QItemModelBarDataProxy_SetRowRoleReplace((QItemModelBarDataProxy*)self, qstring(replace));
}

const char* q_itemmodelbardataproxy_row_role_replace(const void* self) {
    libqt_string _str = QItemModelBarDataProxy_RowRoleReplace((QItemModelBarDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelbardataproxy_set_column_role_replace(void* self, const char* replace) {
    QItemModelBarDataProxy_SetColumnRoleReplace((QItemModelBarDataProxy*)self, qstring(replace));
}

const char* q_itemmodelbardataproxy_column_role_replace(const void* self) {
    libqt_string _str = QItemModelBarDataProxy_ColumnRoleReplace((QItemModelBarDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelbardataproxy_set_value_role_replace(void* self, const char* replace) {
    QItemModelBarDataProxy_SetValueRoleReplace((QItemModelBarDataProxy*)self, qstring(replace));
}

const char* q_itemmodelbardataproxy_value_role_replace(const void* self) {
    libqt_string _str = QItemModelBarDataProxy_ValueRoleReplace((QItemModelBarDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelbardataproxy_set_rotation_role_replace(void* self, const char* replace) {
    QItemModelBarDataProxy_SetRotationRoleReplace((QItemModelBarDataProxy*)self, qstring(replace));
}

const char* q_itemmodelbardataproxy_rotation_role_replace(const void* self) {
    libqt_string _str = QItemModelBarDataProxy_RotationRoleReplace((QItemModelBarDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelbardataproxy_set_multi_match_behavior(void* self, int32_t behavior) {
    QItemModelBarDataProxy_SetMultiMatchBehavior((QItemModelBarDataProxy*)self, behavior);
}

int32_t q_itemmodelbardataproxy_multi_match_behavior(const void* self) {
    return QItemModelBarDataProxy_MultiMatchBehavior((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_item_model_changed(void* self, const void* itemModel) {
    QItemModelBarDataProxy_ItemModelChanged((QItemModelBarDataProxy*)self, (QAbstractItemModel*)itemModel);
}

void q_itemmodelbardataproxy_on_item_model_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelBarDataProxy_Connect_ItemModelChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_row_role_changed(void* self, const char* role) {
    QItemModelBarDataProxy_RowRoleChanged((QItemModelBarDataProxy*)self, qstring(role));
}

void q_itemmodelbardataproxy_on_row_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelBarDataProxy_Connect_RowRoleChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_column_role_changed(void* self, const char* role) {
    QItemModelBarDataProxy_ColumnRoleChanged((QItemModelBarDataProxy*)self, qstring(role));
}

void q_itemmodelbardataproxy_on_column_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelBarDataProxy_Connect_ColumnRoleChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_value_role_changed(void* self, const char* role) {
    QItemModelBarDataProxy_ValueRoleChanged((QItemModelBarDataProxy*)self, qstring(role));
}

void q_itemmodelbardataproxy_on_value_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelBarDataProxy_Connect_ValueRoleChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_rotation_role_changed(void* self, const char* role) {
    QItemModelBarDataProxy_RotationRoleChanged((QItemModelBarDataProxy*)self, qstring(role));
}

void q_itemmodelbardataproxy_on_rotation_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelBarDataProxy_Connect_RotationRoleChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_row_categories_changed(void* self) {
    QItemModelBarDataProxy_RowCategoriesChanged((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_on_row_categories_changed(void* self, void (*callback)(void*)) {
    QItemModelBarDataProxy_Connect_RowCategoriesChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_column_categories_changed(void* self) {
    QItemModelBarDataProxy_ColumnCategoriesChanged((QItemModelBarDataProxy*)self);
}

void q_itemmodelbardataproxy_on_column_categories_changed(void* self, void (*callback)(void*)) {
    QItemModelBarDataProxy_Connect_ColumnCategoriesChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_use_model_categories_changed(void* self, bool enable) {
    QItemModelBarDataProxy_UseModelCategoriesChanged((QItemModelBarDataProxy*)self, enable);
}

void q_itemmodelbardataproxy_on_use_model_categories_changed(void* self, void (*callback)(void*, bool)) {
    QItemModelBarDataProxy_Connect_UseModelCategoriesChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_auto_row_categories_changed(void* self, bool enable) {
    QItemModelBarDataProxy_AutoRowCategoriesChanged((QItemModelBarDataProxy*)self, enable);
}

void q_itemmodelbardataproxy_on_auto_row_categories_changed(void* self, void (*callback)(void*, bool)) {
    QItemModelBarDataProxy_Connect_AutoRowCategoriesChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_auto_column_categories_changed(void* self, bool enable) {
    QItemModelBarDataProxy_AutoColumnCategoriesChanged((QItemModelBarDataProxy*)self, enable);
}

void q_itemmodelbardataproxy_on_auto_column_categories_changed(void* self, void (*callback)(void*, bool)) {
    QItemModelBarDataProxy_Connect_AutoColumnCategoriesChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_row_role_pattern_changed(void* self, const void* pattern) {
    QItemModelBarDataProxy_RowRolePatternChanged((QItemModelBarDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelbardataproxy_on_row_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelBarDataProxy_Connect_RowRolePatternChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_column_role_pattern_changed(void* self, const void* pattern) {
    QItemModelBarDataProxy_ColumnRolePatternChanged((QItemModelBarDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelbardataproxy_on_column_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelBarDataProxy_Connect_ColumnRolePatternChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_value_role_pattern_changed(void* self, const void* pattern) {
    QItemModelBarDataProxy_ValueRolePatternChanged((QItemModelBarDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelbardataproxy_on_value_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelBarDataProxy_Connect_ValueRolePatternChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_rotation_role_pattern_changed(void* self, const void* pattern) {
    QItemModelBarDataProxy_RotationRolePatternChanged((QItemModelBarDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelbardataproxy_on_rotation_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelBarDataProxy_Connect_RotationRolePatternChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_row_role_replace_changed(void* self, const char* replace) {
    QItemModelBarDataProxy_RowRoleReplaceChanged((QItemModelBarDataProxy*)self, qstring(replace));
}

void q_itemmodelbardataproxy_on_row_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelBarDataProxy_Connect_RowRoleReplaceChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_column_role_replace_changed(void* self, const char* replace) {
    QItemModelBarDataProxy_ColumnRoleReplaceChanged((QItemModelBarDataProxy*)self, qstring(replace));
}

void q_itemmodelbardataproxy_on_column_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelBarDataProxy_Connect_ColumnRoleReplaceChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_value_role_replace_changed(void* self, const char* replace) {
    QItemModelBarDataProxy_ValueRoleReplaceChanged((QItemModelBarDataProxy*)self, qstring(replace));
}

void q_itemmodelbardataproxy_on_value_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelBarDataProxy_Connect_ValueRoleReplaceChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_rotation_role_replace_changed(void* self, const char* replace) {
    QItemModelBarDataProxy_RotationRoleReplaceChanged((QItemModelBarDataProxy*)self, qstring(replace));
}

void q_itemmodelbardataproxy_on_rotation_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelBarDataProxy_Connect_RotationRoleReplaceChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_multi_match_behavior_changed(void* self, int32_t behavior) {
    QItemModelBarDataProxy_MultiMatchBehaviorChanged((QItemModelBarDataProxy*)self, behavior);
}

void q_itemmodelbardataproxy_on_multi_match_behavior_changed(void* self, void (*callback)(void*, int32_t)) {
    QItemModelBarDataProxy_Connect_MultiMatchBehaviorChanged((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

const char* q_itemmodelbardataproxy_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_itemmodelbardataproxy_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QBar3DSeries* q_itemmodelbardataproxy_series(const void* self) {
    return QBarDataProxy_Series((QBarDataProxy*)self);
}

int32_t q_itemmodelbardataproxy_row_count(const void* self) {
    return QBarDataProxy_RowCount((QBarDataProxy*)self);
}

const char** q_itemmodelbardataproxy_row_labels(const void* self) {
    libqt_list _arr = QBarDataProxy_RowLabels((QBarDataProxy*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_row_labels\n");
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

void q_itemmodelbardataproxy_set_row_labels(void* self, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_set_row_labels\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QBarDataProxy_SetRowLabels((QBarDataProxy*)self, labels_list);
    free(labels_qstr);
}

const char** q_itemmodelbardataproxy_column_labels(const void* self) {
    libqt_list _arr = QBarDataProxy_ColumnLabels((QBarDataProxy*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_column_labels\n");
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

void q_itemmodelbardataproxy_set_column_labels(void* self, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_set_column_labels\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QBarDataProxy_SetColumnLabels((QBarDataProxy*)self, labels_list);
    free(labels_qstr);
}

libqt_list /* of libqt_list of QBarDataItem* */ q_itemmodelbardataproxy_array(const void* self) {
    return QBarDataProxy_Array((QBarDataProxy*)self);
}

libqt_list /* of QBarDataItem* */ q_itemmodelbardataproxy_row_at(const void* self, int rowIndex) {
    libqt_list _arr = QBarDataProxy_RowAt((QBarDataProxy*)self, rowIndex);
    return _arr;
}

const QBarDataItem* q_itemmodelbardataproxy_item_at(const void* self, int rowIndex, int columnIndex) {
    return QBarDataProxy_ItemAt((QBarDataProxy*)self, rowIndex, columnIndex);
}

const QBarDataItem* q_itemmodelbardataproxy_item_at2(const void* self, const void* position) {
    return QBarDataProxy_ItemAt2((QBarDataProxy*)self, (QPoint*)position);
}

void q_itemmodelbardataproxy_reset_array(void* self) {
    QBarDataProxy_ResetArray((QBarDataProxy*)self);
}

void q_itemmodelbardataproxy_reset_array2(void* self, libqt_list /* of QBarDataItem* */ newArray) {
    QBarDataProxy_ResetArray2((QBarDataProxy*)self, newArray);
}

void q_itemmodelbardataproxy_reset_array3(void* self, libqt_list /* of QBarDataItem* */ newArray, const char* rowLabels[static 1], const char* columnLabels[static 1]) {
    size_t rowLabels_len = libqt_strv_length(rowLabels);
    libqt_string* rowLabels_qstr = (libqt_string*)malloc(rowLabels_len * sizeof(libqt_string));
    if (rowLabels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_reset_array3\n");
        abort();
    }
    for (size_t i = 0; i < rowLabels_len; ++i)
        rowLabels_qstr[i] = qstring(rowLabels[i]);
    libqt_list rowLabels_list = qlist(rowLabels_qstr, rowLabels_len);
    size_t columnLabels_len = libqt_strv_length(columnLabels);
    libqt_string* columnLabels_qstr = (libqt_string*)malloc(columnLabels_len * sizeof(libqt_string));
    if (columnLabels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_reset_array3\n");
        abort();
    }
    for (size_t i = 0; i < columnLabels_len; ++i)
        columnLabels_qstr[i] = qstring(columnLabels[i]);
    libqt_list columnLabels_list = qlist(columnLabels_qstr, columnLabels_len);
    QBarDataProxy_ResetArray3((QBarDataProxy*)self, newArray, rowLabels_list, columnLabels_list);
    free(rowLabels_qstr);

    free(columnLabels_qstr);
}

void q_itemmodelbardataproxy_set_row(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ row) {
    QBarDataProxy_SetRow((QBarDataProxy*)self, rowIndex, row);
}

void q_itemmodelbardataproxy_set_row2(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ row, const char* label) {
    QBarDataProxy_SetRow2((QBarDataProxy*)self, rowIndex, row, qstring(label));
}

void q_itemmodelbardataproxy_set_rows(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ rows) {
    QBarDataProxy_SetRows((QBarDataProxy*)self, rowIndex, rows);
}

void q_itemmodelbardataproxy_set_rows2(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ rows, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_set_rows2\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QBarDataProxy_SetRows2((QBarDataProxy*)self, rowIndex, rows, labels_list);
    free(labels_qstr);
}

void q_itemmodelbardataproxy_set_item(void* self, int rowIndex, int columnIndex, const void* item) {
    QBarDataProxy_SetItem((QBarDataProxy*)self, rowIndex, columnIndex, (QBarDataItem*)item);
}

void q_itemmodelbardataproxy_set_item2(void* self, const void* position, const void* item) {
    QBarDataProxy_SetItem2((QBarDataProxy*)self, (QPoint*)position, (QBarDataItem*)item);
}

int32_t q_itemmodelbardataproxy_add_row(void* self, libqt_list /* of QBarDataItem* */ row) {
    return QBarDataProxy_AddRow((QBarDataProxy*)self, row);
}

int32_t q_itemmodelbardataproxy_add_row2(void* self, libqt_list /* of QBarDataItem* */ row, const char* label) {
    return QBarDataProxy_AddRow2((QBarDataProxy*)self, row, qstring(label));
}

int32_t q_itemmodelbardataproxy_add_rows(void* self, libqt_list /* of QBarDataItem* */ rows) {
    return QBarDataProxy_AddRows((QBarDataProxy*)self, rows);
}

int32_t q_itemmodelbardataproxy_add_rows2(void* self, libqt_list /* of QBarDataItem* */ rows, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_add_rows2\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    int32_t _out = QBarDataProxy_AddRows2((QBarDataProxy*)self, rows, labels_list);
    free(labels_qstr);
    return _out;
}

void q_itemmodelbardataproxy_insert_row(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ row) {
    QBarDataProxy_InsertRow((QBarDataProxy*)self, rowIndex, row);
}

void q_itemmodelbardataproxy_insert_row2(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ row, const char* label) {
    QBarDataProxy_InsertRow2((QBarDataProxy*)self, rowIndex, row, qstring(label));
}

void q_itemmodelbardataproxy_insert_rows(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ rows) {
    QBarDataProxy_InsertRows((QBarDataProxy*)self, rowIndex, rows);
}

void q_itemmodelbardataproxy_insert_rows2(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ rows, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_insert_rows2\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QBarDataProxy_InsertRows2((QBarDataProxy*)self, rowIndex, rows, labels_list);
    free(labels_qstr);
}

void q_itemmodelbardataproxy_remove_rows(void* self, int rowIndex, int removeCount) {
    QBarDataProxy_RemoveRows((QBarDataProxy*)self, rowIndex, removeCount);
}

void q_itemmodelbardataproxy_array_reset(void* self) {
    QBarDataProxy_ArrayReset((QBarDataProxy*)self);
}

void q_itemmodelbardataproxy_on_array_reset(void* self, void (*callback)(void*)) {
    QBarDataProxy_Connect_ArrayReset((QBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_rows_added(void* self, int startIndex, int count) {
    QBarDataProxy_RowsAdded((QBarDataProxy*)self, startIndex, count);
}

void q_itemmodelbardataproxy_on_rows_added(void* self, void (*callback)(void*, int, int)) {
    QBarDataProxy_Connect_RowsAdded((QBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_rows_changed(void* self, int startIndex, int count) {
    QBarDataProxy_RowsChanged((QBarDataProxy*)self, startIndex, count);
}

void q_itemmodelbardataproxy_on_rows_changed(void* self, void (*callback)(void*, int, int)) {
    QBarDataProxy_Connect_RowsChanged((QBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_rows_removed(void* self, int startIndex, int count) {
    QBarDataProxy_RowsRemoved((QBarDataProxy*)self, startIndex, count);
}

void q_itemmodelbardataproxy_on_rows_removed(void* self, void (*callback)(void*, int, int)) {
    QBarDataProxy_Connect_RowsRemoved((QBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_rows_inserted(void* self, int startIndex, int count) {
    QBarDataProxy_RowsInserted((QBarDataProxy*)self, startIndex, count);
}

void q_itemmodelbardataproxy_on_rows_inserted(void* self, void (*callback)(void*, int, int)) {
    QBarDataProxy_Connect_RowsInserted((QBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_item_changed(void* self, int rowIndex, int columnIndex) {
    QBarDataProxy_ItemChanged((QBarDataProxy*)self, rowIndex, columnIndex);
}

void q_itemmodelbardataproxy_on_item_changed(void* self, void (*callback)(void*, int, int)) {
    QBarDataProxy_Connect_ItemChanged((QBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_row_count_changed(void* self, int count) {
    QBarDataProxy_RowCountChanged((QBarDataProxy*)self, count);
}

void q_itemmodelbardataproxy_on_row_count_changed(void* self, void (*callback)(void*, int)) {
    QBarDataProxy_Connect_RowCountChanged((QBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_row_labels_changed(void* self) {
    QBarDataProxy_RowLabelsChanged((QBarDataProxy*)self);
}

void q_itemmodelbardataproxy_on_row_labels_changed(void* self, void (*callback)(void*)) {
    QBarDataProxy_Connect_RowLabelsChanged((QBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_column_labels_changed(void* self) {
    QBarDataProxy_ColumnLabelsChanged((QBarDataProxy*)self);
}

void q_itemmodelbardataproxy_on_column_labels_changed(void* self, void (*callback)(void*)) {
    QBarDataProxy_Connect_ColumnLabelsChanged((QBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_series_changed(void* self, void* series) {
    QBarDataProxy_SeriesChanged((QBarDataProxy*)self, (QBar3DSeries*)series);
}

void q_itemmodelbardataproxy_on_series_changed(void* self, void (*callback)(void*, void*)) {
    QBarDataProxy_Connect_SeriesChanged((QBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_remove_rows3(void* self, int rowIndex, int removeCount, bool removeLabels) {
    QBarDataProxy_RemoveRows3((QBarDataProxy*)self, rowIndex, removeCount, removeLabels);
}

int32_t q_itemmodelbardataproxy_type(const void* self) {
    return QAbstractDataProxy_Type((QAbstractDataProxy*)self);
}

const char* q_itemmodelbardataproxy_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelbardataproxy_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_itemmodelbardataproxy_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_itemmodelbardataproxy_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_itemmodelbardataproxy_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_itemmodelbardataproxy_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_itemmodelbardataproxy_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_itemmodelbardataproxy_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_itemmodelbardataproxy_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_itemmodelbardataproxy_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_itemmodelbardataproxy_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_itemmodelbardataproxy_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_itemmodelbardataproxy_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_itemmodelbardataproxy_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_itemmodelbardataproxy_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_itemmodelbardataproxy_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_itemmodelbardataproxy_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_itemmodelbardataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_itemmodelbardataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_itemmodelbardataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_itemmodelbardataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_itemmodelbardataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_itemmodelbardataproxy_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_itemmodelbardataproxy_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_itemmodelbardataproxy_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_itemmodelbardataproxy_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_itemmodelbardataproxy_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_itemmodelbardataproxy_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_itemmodelbardataproxy_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_itemmodelbardataproxy_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelbardataproxy_dynamic_property_names\n");
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

QBindingStorage* q_itemmodelbardataproxy_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_itemmodelbardataproxy_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_itemmodelbardataproxy_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_itemmodelbardataproxy_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_itemmodelbardataproxy_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_itemmodelbardataproxy_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_itemmodelbardataproxy_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_itemmodelbardataproxy_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_itemmodelbardataproxy_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_itemmodelbardataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_itemmodelbardataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_itemmodelbardataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_itemmodelbardataproxy_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_itemmodelbardataproxy_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_itemmodelbardataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_itemmodelbardataproxy_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_itemmodelbardataproxy_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_itemmodelbardataproxy_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_itemmodelbardataproxy_event(void* self, void* event) {
    return QItemModelBarDataProxy_Event((QItemModelBarDataProxy*)self, (QEvent*)event);
}

bool q_itemmodelbardataproxy_super_event(void* self, void* event) {
    return QItemModelBarDataProxy_SuperEvent((QItemModelBarDataProxy*)self, (QEvent*)event);
}

void q_itemmodelbardataproxy_on_event(void* self, bool (*callback)(void*, void*)) {
    QItemModelBarDataProxy_OnEvent((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

bool q_itemmodelbardataproxy_event_filter(void* self, void* watched, void* event) {
    return QItemModelBarDataProxy_EventFilter((QItemModelBarDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

bool q_itemmodelbardataproxy_super_event_filter(void* self, void* watched, void* event) {
    return QItemModelBarDataProxy_SuperEventFilter((QItemModelBarDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

void q_itemmodelbardataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QItemModelBarDataProxy_OnEventFilter((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_timer_event(void* self, void* event) {
    QItemModelBarDataProxy_TimerEvent((QItemModelBarDataProxy*)self, (QTimerEvent*)event);
}

void q_itemmodelbardataproxy_super_timer_event(void* self, void* event) {
    QItemModelBarDataProxy_SuperTimerEvent((QItemModelBarDataProxy*)self, (QTimerEvent*)event);
}

void q_itemmodelbardataproxy_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QItemModelBarDataProxy_OnTimerEvent((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_child_event(void* self, void* event) {
    QItemModelBarDataProxy_ChildEvent((QItemModelBarDataProxy*)self, (QChildEvent*)event);
}

void q_itemmodelbardataproxy_super_child_event(void* self, void* event) {
    QItemModelBarDataProxy_SuperChildEvent((QItemModelBarDataProxy*)self, (QChildEvent*)event);
}

void q_itemmodelbardataproxy_on_child_event(void* self, void (*callback)(void*, void*)) {
    QItemModelBarDataProxy_OnChildEvent((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_custom_event(void* self, void* event) {
    QItemModelBarDataProxy_CustomEvent((QItemModelBarDataProxy*)self, (QEvent*)event);
}

void q_itemmodelbardataproxy_super_custom_event(void* self, void* event) {
    QItemModelBarDataProxy_SuperCustomEvent((QItemModelBarDataProxy*)self, (QEvent*)event);
}

void q_itemmodelbardataproxy_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QItemModelBarDataProxy_OnCustomEvent((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_connect_notify(void* self, const void* signal) {
    QItemModelBarDataProxy_ConnectNotify((QItemModelBarDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelbardataproxy_super_connect_notify(void* self, const void* signal) {
    QItemModelBarDataProxy_SuperConnectNotify((QItemModelBarDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelbardataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QItemModelBarDataProxy_OnConnectNotify((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_disconnect_notify(void* self, const void* signal) {
    QItemModelBarDataProxy_DisconnectNotify((QItemModelBarDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelbardataproxy_super_disconnect_notify(void* self, const void* signal) {
    QItemModelBarDataProxy_SuperDisconnectNotify((QItemModelBarDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelbardataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QItemModelBarDataProxy_OnDisconnectNotify((QItemModelBarDataProxy*)self, (intptr_t)callback);
}

QObject* q_itemmodelbardataproxy_sender(const void* self) {
    return QItemModelBarDataProxy_Sender((QItemModelBarDataProxy*)self);
}

int32_t q_itemmodelbardataproxy_sender_signal_index(const void* self) {
    return QItemModelBarDataProxy_SenderSignalIndex((QItemModelBarDataProxy*)self);
}

int32_t q_itemmodelbardataproxy_receivers(const void* self, const char* signal) {
    return QItemModelBarDataProxy_Receivers((QItemModelBarDataProxy*)self, signal);
}

bool q_itemmodelbardataproxy_is_signal_connected(const void* self, const void* signal) {
    return QItemModelBarDataProxy_IsSignalConnected((QItemModelBarDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelbardataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_itemmodelbardataproxy_delete(void* self) {
    QItemModelBarDataProxy_Delete((QItemModelBarDataProxy*)(self));
}
