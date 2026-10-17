#include "libqabstractdataproxy.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqregularexpression.hpp"
#include "libqsurfacedataproxy.hpp"
#include "libqitemmodelsurfacedataproxy.hpp"
#include "libqitemmodelsurfacedataproxy.h"

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new() {
    return QItemModelSurfaceDataProxy_New();
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new2(void* itemModel) {
    return QItemModelSurfaceDataProxy_New2((QAbstractItemModel*)itemModel);
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new3(void* itemModel, const char* yPosRole) {
    return QItemModelSurfaceDataProxy_New3((QAbstractItemModel*)itemModel, qstring(yPosRole));
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new4(void* itemModel, const char* rowRole, const char* columnRole, const char* yPosRole) {
    return QItemModelSurfaceDataProxy_New4((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(yPosRole));
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new5(void* itemModel, const char* rowRole, const char* columnRole, const char* xPosRole, const char* yPosRole, const char* zPosRole) {
    return QItemModelSurfaceDataProxy_New5((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(xPosRole), qstring(yPosRole), qstring(zPosRole));
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new6(void* itemModel, const char* rowRole, const char* columnRole, const char* yPosRole, const char* rowCategories[static 1], const char* columnCategories[static 1]) {
    size_t rowCategories_len = libqt_strv_length(rowCategories);
    libqt_string* rowCategories_qstr = (libqt_string*)malloc(rowCategories_len * sizeof(libqt_string));
    if (rowCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_new6\n");
        abort();
    }
    for (size_t i = 0; i < rowCategories_len; ++i)
        rowCategories_qstr[i] = qstring(rowCategories[i]);
    libqt_list rowCategories_list = qlist(rowCategories_qstr, rowCategories_len);
    size_t columnCategories_len = libqt_strv_length(columnCategories);
    libqt_string* columnCategories_qstr = (libqt_string*)malloc(columnCategories_len * sizeof(libqt_string));
    if (columnCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_new6\n");
        abort();
    }
    for (size_t i = 0; i < columnCategories_len; ++i)
        columnCategories_qstr[i] = qstring(columnCategories[i]);
    libqt_list columnCategories_list = qlist(columnCategories_qstr, columnCategories_len);

    QItemModelSurfaceDataProxy* _out = QItemModelSurfaceDataProxy_New6((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(yPosRole), rowCategories_list, columnCategories_list);
    free(rowCategories_qstr);
    free(columnCategories_qstr);
    return _out;
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new7(void* itemModel, const char* rowRole, const char* columnRole, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rowCategories[static 1], const char* columnCategories[static 1]) {
    size_t rowCategories_len = libqt_strv_length(rowCategories);
    libqt_string* rowCategories_qstr = (libqt_string*)malloc(rowCategories_len * sizeof(libqt_string));
    if (rowCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_new7\n");
        abort();
    }
    for (size_t i = 0; i < rowCategories_len; ++i)
        rowCategories_qstr[i] = qstring(rowCategories[i]);
    libqt_list rowCategories_list = qlist(rowCategories_qstr, rowCategories_len);
    size_t columnCategories_len = libqt_strv_length(columnCategories);
    libqt_string* columnCategories_qstr = (libqt_string*)malloc(columnCategories_len * sizeof(libqt_string));
    if (columnCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_new7\n");
        abort();
    }
    for (size_t i = 0; i < columnCategories_len; ++i)
        columnCategories_qstr[i] = qstring(columnCategories[i]);
    libqt_list columnCategories_list = qlist(columnCategories_qstr, columnCategories_len);

    QItemModelSurfaceDataProxy* _out = QItemModelSurfaceDataProxy_New7((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(xPosRole), qstring(yPosRole), qstring(zPosRole), rowCategories_list, columnCategories_list);
    free(rowCategories_qstr);
    free(columnCategories_qstr);
    return _out;
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new8(void* parent) {
    return QItemModelSurfaceDataProxy_New8((QObject*)parent);
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new9(void* itemModel, void* parent) {
    return QItemModelSurfaceDataProxy_New9((QAbstractItemModel*)itemModel, (QObject*)parent);
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new10(void* itemModel, const char* yPosRole, void* parent) {
    return QItemModelSurfaceDataProxy_New10((QAbstractItemModel*)itemModel, qstring(yPosRole), (QObject*)parent);
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new11(void* itemModel, const char* rowRole, const char* columnRole, const char* yPosRole, void* parent) {
    return QItemModelSurfaceDataProxy_New11((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(yPosRole), (QObject*)parent);
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new12(void* itemModel, const char* rowRole, const char* columnRole, const char* xPosRole, const char* yPosRole, const char* zPosRole, void* parent) {
    return QItemModelSurfaceDataProxy_New12((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(xPosRole), qstring(yPosRole), qstring(zPosRole), (QObject*)parent);
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new13(void* itemModel, const char* rowRole, const char* columnRole, const char* yPosRole, const char* rowCategories[static 1], const char* columnCategories[static 1], void* parent) {
    size_t rowCategories_len = libqt_strv_length(rowCategories);
    libqt_string* rowCategories_qstr = (libqt_string*)malloc(rowCategories_len * sizeof(libqt_string));
    if (rowCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_new13\n");
        abort();
    }
    for (size_t i = 0; i < rowCategories_len; ++i)
        rowCategories_qstr[i] = qstring(rowCategories[i]);
    libqt_list rowCategories_list = qlist(rowCategories_qstr, rowCategories_len);
    size_t columnCategories_len = libqt_strv_length(columnCategories);
    libqt_string* columnCategories_qstr = (libqt_string*)malloc(columnCategories_len * sizeof(libqt_string));
    if (columnCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_new13\n");
        abort();
    }
    for (size_t i = 0; i < columnCategories_len; ++i)
        columnCategories_qstr[i] = qstring(columnCategories[i]);
    libqt_list columnCategories_list = qlist(columnCategories_qstr, columnCategories_len);

    QItemModelSurfaceDataProxy* _out = QItemModelSurfaceDataProxy_New13((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(yPosRole), rowCategories_list, columnCategories_list, (QObject*)parent);
    free(rowCategories_qstr);
    free(columnCategories_qstr);
    return _out;
}

QItemModelSurfaceDataProxy* q_itemmodelsurfacedataproxy_new14(void* itemModel, const char* rowRole, const char* columnRole, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rowCategories[static 1], const char* columnCategories[static 1], void* parent) {
    size_t rowCategories_len = libqt_strv_length(rowCategories);
    libqt_string* rowCategories_qstr = (libqt_string*)malloc(rowCategories_len * sizeof(libqt_string));
    if (rowCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_new14\n");
        abort();
    }
    for (size_t i = 0; i < rowCategories_len; ++i)
        rowCategories_qstr[i] = qstring(rowCategories[i]);
    libqt_list rowCategories_list = qlist(rowCategories_qstr, rowCategories_len);
    size_t columnCategories_len = libqt_strv_length(columnCategories);
    libqt_string* columnCategories_qstr = (libqt_string*)malloc(columnCategories_len * sizeof(libqt_string));
    if (columnCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_new14\n");
        abort();
    }
    for (size_t i = 0; i < columnCategories_len; ++i)
        columnCategories_qstr[i] = qstring(columnCategories[i]);
    libqt_list columnCategories_list = qlist(columnCategories_qstr, columnCategories_len);

    QItemModelSurfaceDataProxy* _out = QItemModelSurfaceDataProxy_New14((QAbstractItemModel*)itemModel, qstring(rowRole), qstring(columnRole), qstring(xPosRole), qstring(yPosRole), qstring(zPosRole), rowCategories_list, columnCategories_list, (QObject*)parent);
    free(rowCategories_qstr);
    free(columnCategories_qstr);
    return _out;
}

const QMetaObject* q_itemmodelsurfacedataproxy_meta_object(const void* self) {
    return QItemModelSurfaceDataProxy_MetaObject((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QItemModelSurfaceDataProxy_OnMetaObject((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

const QMetaObject* q_itemmodelsurfacedataproxy_super_meta_object(const void* self) {
    return QItemModelSurfaceDataProxy_SuperMetaObject((QItemModelSurfaceDataProxy*)self);
}

void* q_itemmodelsurfacedataproxy_metacast(void* self, const char* param1) {
    return QItemModelSurfaceDataProxy_Metacast((QItemModelSurfaceDataProxy*)self, param1);
}

void q_itemmodelsurfacedataproxy_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QItemModelSurfaceDataProxy_OnMetacast((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void* q_itemmodelsurfacedataproxy_super_metacast(void* self, const char* param1) {
    return QItemModelSurfaceDataProxy_SuperMetacast((QItemModelSurfaceDataProxy*)self, param1);
}

int32_t q_itemmodelsurfacedataproxy_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QItemModelSurfaceDataProxy_Metacall((QItemModelSurfaceDataProxy*)self, param1, param2, param3);
}

void q_itemmodelsurfacedataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QItemModelSurfaceDataProxy_OnMetacall((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

int32_t q_itemmodelsurfacedataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QItemModelSurfaceDataProxy_SuperMetacall((QItemModelSurfaceDataProxy*)self, param1, param2, param3);
}

const char* q_itemmodelsurfacedataproxy_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_item_model(void* self, void* itemModel) {
    QItemModelSurfaceDataProxy_SetItemModel((QItemModelSurfaceDataProxy*)self, (QAbstractItemModel*)itemModel);
}

QAbstractItemModel* q_itemmodelsurfacedataproxy_item_model(const void* self) {
    return QItemModelSurfaceDataProxy_ItemModel((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_set_row_role(void* self, const char* role) {
    QItemModelSurfaceDataProxy_SetRowRole((QItemModelSurfaceDataProxy*)self, qstring(role));
}

const char* q_itemmodelsurfacedataproxy_row_role(const void* self) {
    libqt_string _str = QItemModelSurfaceDataProxy_RowRole((QItemModelSurfaceDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_column_role(void* self, const char* role) {
    QItemModelSurfaceDataProxy_SetColumnRole((QItemModelSurfaceDataProxy*)self, qstring(role));
}

const char* q_itemmodelsurfacedataproxy_column_role(const void* self) {
    libqt_string _str = QItemModelSurfaceDataProxy_ColumnRole((QItemModelSurfaceDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_x_pos_role(void* self, const char* role) {
    QItemModelSurfaceDataProxy_SetXPosRole((QItemModelSurfaceDataProxy*)self, qstring(role));
}

const char* q_itemmodelsurfacedataproxy_x_pos_role(const void* self) {
    libqt_string _str = QItemModelSurfaceDataProxy_XPosRole((QItemModelSurfaceDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_y_pos_role(void* self, const char* role) {
    QItemModelSurfaceDataProxy_SetYPosRole((QItemModelSurfaceDataProxy*)self, qstring(role));
}

const char* q_itemmodelsurfacedataproxy_y_pos_role(const void* self) {
    libqt_string _str = QItemModelSurfaceDataProxy_YPosRole((QItemModelSurfaceDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_z_pos_role(void* self, const char* role) {
    QItemModelSurfaceDataProxy_SetZPosRole((QItemModelSurfaceDataProxy*)self, qstring(role));
}

const char* q_itemmodelsurfacedataproxy_z_pos_role(const void* self) {
    libqt_string _str = QItemModelSurfaceDataProxy_ZPosRole((QItemModelSurfaceDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_row_categories(void* self, const char* categories[static 1]) {
    size_t categories_len = libqt_strv_length(categories);
    libqt_string* categories_qstr = (libqt_string*)malloc(categories_len * sizeof(libqt_string));
    if (categories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_set_row_categories\n");
        abort();
    }
    for (size_t i = 0; i < categories_len; ++i)
        categories_qstr[i] = qstring(categories[i]);
    libqt_list categories_list = qlist(categories_qstr, categories_len);
    QItemModelSurfaceDataProxy_SetRowCategories((QItemModelSurfaceDataProxy*)self, categories_list);
    free(categories_qstr);
}

const char** q_itemmodelsurfacedataproxy_row_categories(const void* self) {
    libqt_list _arr = QItemModelSurfaceDataProxy_RowCategories((QItemModelSurfaceDataProxy*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_row_categories\n");
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

void q_itemmodelsurfacedataproxy_set_column_categories(void* self, const char* categories[static 1]) {
    size_t categories_len = libqt_strv_length(categories);
    libqt_string* categories_qstr = (libqt_string*)malloc(categories_len * sizeof(libqt_string));
    if (categories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_set_column_categories\n");
        abort();
    }
    for (size_t i = 0; i < categories_len; ++i)
        categories_qstr[i] = qstring(categories[i]);
    libqt_list categories_list = qlist(categories_qstr, categories_len);
    QItemModelSurfaceDataProxy_SetColumnCategories((QItemModelSurfaceDataProxy*)self, categories_list);
    free(categories_qstr);
}

const char** q_itemmodelsurfacedataproxy_column_categories(const void* self) {
    libqt_list _arr = QItemModelSurfaceDataProxy_ColumnCategories((QItemModelSurfaceDataProxy*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_column_categories\n");
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

void q_itemmodelsurfacedataproxy_set_use_model_categories(void* self, bool enable) {
    QItemModelSurfaceDataProxy_SetUseModelCategories((QItemModelSurfaceDataProxy*)self, enable);
}

bool q_itemmodelsurfacedataproxy_use_model_categories(const void* self) {
    return QItemModelSurfaceDataProxy_UseModelCategories((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_set_auto_row_categories(void* self, bool enable) {
    QItemModelSurfaceDataProxy_SetAutoRowCategories((QItemModelSurfaceDataProxy*)self, enable);
}

bool q_itemmodelsurfacedataproxy_auto_row_categories(const void* self) {
    return QItemModelSurfaceDataProxy_AutoRowCategories((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_set_auto_column_categories(void* self, bool enable) {
    QItemModelSurfaceDataProxy_SetAutoColumnCategories((QItemModelSurfaceDataProxy*)self, enable);
}

bool q_itemmodelsurfacedataproxy_auto_column_categories(const void* self) {
    return QItemModelSurfaceDataProxy_AutoColumnCategories((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_remap(void* self, const char* rowRole, const char* columnRole, const char* xPosRole, const char* yPosRole, const char* zPosRole, const char* rowCategories[static 1], const char* columnCategories[static 1]) {
    size_t rowCategories_len = libqt_strv_length(rowCategories);
    libqt_string* rowCategories_qstr = (libqt_string*)malloc(rowCategories_len * sizeof(libqt_string));
    if (rowCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_remap\n");
        abort();
    }
    for (size_t i = 0; i < rowCategories_len; ++i)
        rowCategories_qstr[i] = qstring(rowCategories[i]);
    libqt_list rowCategories_list = qlist(rowCategories_qstr, rowCategories_len);
    size_t columnCategories_len = libqt_strv_length(columnCategories);
    libqt_string* columnCategories_qstr = (libqt_string*)malloc(columnCategories_len * sizeof(libqt_string));
    if (columnCategories_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_remap\n");
        abort();
    }
    for (size_t i = 0; i < columnCategories_len; ++i)
        columnCategories_qstr[i] = qstring(columnCategories[i]);
    libqt_list columnCategories_list = qlist(columnCategories_qstr, columnCategories_len);
    QItemModelSurfaceDataProxy_Remap((QItemModelSurfaceDataProxy*)self, qstring(rowRole), qstring(columnRole), qstring(xPosRole), qstring(yPosRole), qstring(zPosRole), rowCategories_list, columnCategories_list);
    free(rowCategories_qstr);

    free(columnCategories_qstr);
}

int32_t q_itemmodelsurfacedataproxy_row_category_index(void* self, const char* category) {
    return QItemModelSurfaceDataProxy_RowCategoryIndex((QItemModelSurfaceDataProxy*)self, qstring(category));
}

int32_t q_itemmodelsurfacedataproxy_column_category_index(void* self, const char* category) {
    return QItemModelSurfaceDataProxy_ColumnCategoryIndex((QItemModelSurfaceDataProxy*)self, qstring(category));
}

void q_itemmodelsurfacedataproxy_set_row_role_pattern(void* self, const void* pattern) {
    QItemModelSurfaceDataProxy_SetRowRolePattern((QItemModelSurfaceDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelsurfacedataproxy_row_role_pattern(const void* self) {
    return QItemModelSurfaceDataProxy_RowRolePattern((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_set_column_role_pattern(void* self, const void* pattern) {
    QItemModelSurfaceDataProxy_SetColumnRolePattern((QItemModelSurfaceDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelsurfacedataproxy_column_role_pattern(const void* self) {
    return QItemModelSurfaceDataProxy_ColumnRolePattern((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_set_x_pos_role_pattern(void* self, const void* pattern) {
    QItemModelSurfaceDataProxy_SetXPosRolePattern((QItemModelSurfaceDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelsurfacedataproxy_x_pos_role_pattern(const void* self) {
    return QItemModelSurfaceDataProxy_XPosRolePattern((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_set_y_pos_role_pattern(void* self, const void* pattern) {
    QItemModelSurfaceDataProxy_SetYPosRolePattern((QItemModelSurfaceDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelsurfacedataproxy_y_pos_role_pattern(const void* self) {
    return QItemModelSurfaceDataProxy_YPosRolePattern((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_set_z_pos_role_pattern(void* self, const void* pattern) {
    QItemModelSurfaceDataProxy_SetZPosRolePattern((QItemModelSurfaceDataProxy*)self, (QRegularExpression*)pattern);
}

QRegularExpression* q_itemmodelsurfacedataproxy_z_pos_role_pattern(const void* self) {
    return QItemModelSurfaceDataProxy_ZPosRolePattern((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_set_row_role_replace(void* self, const char* replace) {
    QItemModelSurfaceDataProxy_SetRowRoleReplace((QItemModelSurfaceDataProxy*)self, qstring(replace));
}

const char* q_itemmodelsurfacedataproxy_row_role_replace(const void* self) {
    libqt_string _str = QItemModelSurfaceDataProxy_RowRoleReplace((QItemModelSurfaceDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_column_role_replace(void* self, const char* replace) {
    QItemModelSurfaceDataProxy_SetColumnRoleReplace((QItemModelSurfaceDataProxy*)self, qstring(replace));
}

const char* q_itemmodelsurfacedataproxy_column_role_replace(const void* self) {
    libqt_string _str = QItemModelSurfaceDataProxy_ColumnRoleReplace((QItemModelSurfaceDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_x_pos_role_replace(void* self, const char* replace) {
    QItemModelSurfaceDataProxy_SetXPosRoleReplace((QItemModelSurfaceDataProxy*)self, qstring(replace));
}

const char* q_itemmodelsurfacedataproxy_x_pos_role_replace(const void* self) {
    libqt_string _str = QItemModelSurfaceDataProxy_XPosRoleReplace((QItemModelSurfaceDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_y_pos_role_replace(void* self, const char* replace) {
    QItemModelSurfaceDataProxy_SetYPosRoleReplace((QItemModelSurfaceDataProxy*)self, qstring(replace));
}

const char* q_itemmodelsurfacedataproxy_y_pos_role_replace(const void* self) {
    libqt_string _str = QItemModelSurfaceDataProxy_YPosRoleReplace((QItemModelSurfaceDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_z_pos_role_replace(void* self, const char* replace) {
    QItemModelSurfaceDataProxy_SetZPosRoleReplace((QItemModelSurfaceDataProxy*)self, qstring(replace));
}

const char* q_itemmodelsurfacedataproxy_z_pos_role_replace(const void* self) {
    libqt_string _str = QItemModelSurfaceDataProxy_ZPosRoleReplace((QItemModelSurfaceDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_multi_match_behavior(void* self, int32_t behavior) {
    QItemModelSurfaceDataProxy_SetMultiMatchBehavior((QItemModelSurfaceDataProxy*)self, behavior);
}

int32_t q_itemmodelsurfacedataproxy_multi_match_behavior(const void* self) {
    return QItemModelSurfaceDataProxy_MultiMatchBehavior((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_item_model_changed(void* self, const void* itemModel) {
    QItemModelSurfaceDataProxy_ItemModelChanged((QItemModelSurfaceDataProxy*)self, (QAbstractItemModel*)itemModel);
}

void q_itemmodelsurfacedataproxy_on_item_model_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelSurfaceDataProxy_Connect_ItemModelChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_row_role_changed(void* self, const char* role) {
    QItemModelSurfaceDataProxy_RowRoleChanged((QItemModelSurfaceDataProxy*)self, qstring(role));
}

void q_itemmodelsurfacedataproxy_on_row_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelSurfaceDataProxy_Connect_RowRoleChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_column_role_changed(void* self, const char* role) {
    QItemModelSurfaceDataProxy_ColumnRoleChanged((QItemModelSurfaceDataProxy*)self, qstring(role));
}

void q_itemmodelsurfacedataproxy_on_column_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelSurfaceDataProxy_Connect_ColumnRoleChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_x_pos_role_changed(void* self, const char* role) {
    QItemModelSurfaceDataProxy_XPosRoleChanged((QItemModelSurfaceDataProxy*)self, qstring(role));
}

void q_itemmodelsurfacedataproxy_on_x_pos_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelSurfaceDataProxy_Connect_XPosRoleChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_y_pos_role_changed(void* self, const char* role) {
    QItemModelSurfaceDataProxy_YPosRoleChanged((QItemModelSurfaceDataProxy*)self, qstring(role));
}

void q_itemmodelsurfacedataproxy_on_y_pos_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelSurfaceDataProxy_Connect_YPosRoleChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_z_pos_role_changed(void* self, const char* role) {
    QItemModelSurfaceDataProxy_ZPosRoleChanged((QItemModelSurfaceDataProxy*)self, qstring(role));
}

void q_itemmodelsurfacedataproxy_on_z_pos_role_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelSurfaceDataProxy_Connect_ZPosRoleChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_row_categories_changed(void* self) {
    QItemModelSurfaceDataProxy_RowCategoriesChanged((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_on_row_categories_changed(void* self, void (*callback)(void*)) {
    QItemModelSurfaceDataProxy_Connect_RowCategoriesChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_column_categories_changed(void* self) {
    QItemModelSurfaceDataProxy_ColumnCategoriesChanged((QItemModelSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_on_column_categories_changed(void* self, void (*callback)(void*)) {
    QItemModelSurfaceDataProxy_Connect_ColumnCategoriesChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_use_model_categories_changed(void* self, bool enable) {
    QItemModelSurfaceDataProxy_UseModelCategoriesChanged((QItemModelSurfaceDataProxy*)self, enable);
}

void q_itemmodelsurfacedataproxy_on_use_model_categories_changed(void* self, void (*callback)(void*, bool)) {
    QItemModelSurfaceDataProxy_Connect_UseModelCategoriesChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_auto_row_categories_changed(void* self, bool enable) {
    QItemModelSurfaceDataProxy_AutoRowCategoriesChanged((QItemModelSurfaceDataProxy*)self, enable);
}

void q_itemmodelsurfacedataproxy_on_auto_row_categories_changed(void* self, void (*callback)(void*, bool)) {
    QItemModelSurfaceDataProxy_Connect_AutoRowCategoriesChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_auto_column_categories_changed(void* self, bool enable) {
    QItemModelSurfaceDataProxy_AutoColumnCategoriesChanged((QItemModelSurfaceDataProxy*)self, enable);
}

void q_itemmodelsurfacedataproxy_on_auto_column_categories_changed(void* self, void (*callback)(void*, bool)) {
    QItemModelSurfaceDataProxy_Connect_AutoColumnCategoriesChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_row_role_pattern_changed(void* self, const void* pattern) {
    QItemModelSurfaceDataProxy_RowRolePatternChanged((QItemModelSurfaceDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelsurfacedataproxy_on_row_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelSurfaceDataProxy_Connect_RowRolePatternChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_column_role_pattern_changed(void* self, const void* pattern) {
    QItemModelSurfaceDataProxy_ColumnRolePatternChanged((QItemModelSurfaceDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelsurfacedataproxy_on_column_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelSurfaceDataProxy_Connect_ColumnRolePatternChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_x_pos_role_pattern_changed(void* self, const void* pattern) {
    QItemModelSurfaceDataProxy_XPosRolePatternChanged((QItemModelSurfaceDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelsurfacedataproxy_on_x_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelSurfaceDataProxy_Connect_XPosRolePatternChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_y_pos_role_pattern_changed(void* self, const void* pattern) {
    QItemModelSurfaceDataProxy_YPosRolePatternChanged((QItemModelSurfaceDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelsurfacedataproxy_on_y_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelSurfaceDataProxy_Connect_YPosRolePatternChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_z_pos_role_pattern_changed(void* self, const void* pattern) {
    QItemModelSurfaceDataProxy_ZPosRolePatternChanged((QItemModelSurfaceDataProxy*)self, (QRegularExpression*)pattern);
}

void q_itemmodelsurfacedataproxy_on_z_pos_role_pattern_changed(void* self, void (*callback)(void*, const void*)) {
    QItemModelSurfaceDataProxy_Connect_ZPosRolePatternChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_row_role_replace_changed(void* self, const char* replace) {
    QItemModelSurfaceDataProxy_RowRoleReplaceChanged((QItemModelSurfaceDataProxy*)self, qstring(replace));
}

void q_itemmodelsurfacedataproxy_on_row_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelSurfaceDataProxy_Connect_RowRoleReplaceChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_column_role_replace_changed(void* self, const char* replace) {
    QItemModelSurfaceDataProxy_ColumnRoleReplaceChanged((QItemModelSurfaceDataProxy*)self, qstring(replace));
}

void q_itemmodelsurfacedataproxy_on_column_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelSurfaceDataProxy_Connect_ColumnRoleReplaceChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_x_pos_role_replace_changed(void* self, const char* replace) {
    QItemModelSurfaceDataProxy_XPosRoleReplaceChanged((QItemModelSurfaceDataProxy*)self, qstring(replace));
}

void q_itemmodelsurfacedataproxy_on_x_pos_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelSurfaceDataProxy_Connect_XPosRoleReplaceChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_y_pos_role_replace_changed(void* self, const char* replace) {
    QItemModelSurfaceDataProxy_YPosRoleReplaceChanged((QItemModelSurfaceDataProxy*)self, qstring(replace));
}

void q_itemmodelsurfacedataproxy_on_y_pos_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelSurfaceDataProxy_Connect_YPosRoleReplaceChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_z_pos_role_replace_changed(void* self, const char* replace) {
    QItemModelSurfaceDataProxy_ZPosRoleReplaceChanged((QItemModelSurfaceDataProxy*)self, qstring(replace));
}

void q_itemmodelsurfacedataproxy_on_z_pos_role_replace_changed(void* self, void (*callback)(void*, const char*)) {
    QItemModelSurfaceDataProxy_Connect_ZPosRoleReplaceChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_multi_match_behavior_changed(void* self, int32_t behavior) {
    QItemModelSurfaceDataProxy_MultiMatchBehaviorChanged((QItemModelSurfaceDataProxy*)self, behavior);
}

void q_itemmodelsurfacedataproxy_on_multi_match_behavior_changed(void* self, void (*callback)(void*, int32_t)) {
    QItemModelSurfaceDataProxy_Connect_MultiMatchBehaviorChanged((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

const char* q_itemmodelsurfacedataproxy_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_itemmodelsurfacedataproxy_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSurface3DSeries* q_itemmodelsurfacedataproxy_series(const void* self) {
    return QSurfaceDataProxy_Series((QSurfaceDataProxy*)self);
}

int32_t q_itemmodelsurfacedataproxy_row_count(const void* self) {
    return QSurfaceDataProxy_RowCount((QSurfaceDataProxy*)self);
}

int32_t q_itemmodelsurfacedataproxy_column_count(const void* self) {
    return QSurfaceDataProxy_ColumnCount((QSurfaceDataProxy*)self);
}

libqt_list /* of libqt_list of QSurfaceDataItem* */ q_itemmodelsurfacedataproxy_array(const void* self) {
    return QSurfaceDataProxy_Array((QSurfaceDataProxy*)self);
}

const QSurfaceDataItem* q_itemmodelsurfacedataproxy_item_at(const void* self, int rowIndex, int columnIndex) {
    return QSurfaceDataProxy_ItemAt((QSurfaceDataProxy*)self, rowIndex, columnIndex);
}

const QSurfaceDataItem* q_itemmodelsurfacedataproxy_item_at2(const void* self, const void* position) {
    return QSurfaceDataProxy_ItemAt2((QSurfaceDataProxy*)self, (QPoint*)position);
}

void q_itemmodelsurfacedataproxy_reset_array(void* self, libqt_list /* of QSurfaceDataItem* */ newArray) {
    QSurfaceDataProxy_ResetArray((QSurfaceDataProxy*)self, newArray);
}

void q_itemmodelsurfacedataproxy_set_row(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ row) {
    QSurfaceDataProxy_SetRow((QSurfaceDataProxy*)self, rowIndex, row);
}

void q_itemmodelsurfacedataproxy_set_rows(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ rows) {
    QSurfaceDataProxy_SetRows((QSurfaceDataProxy*)self, rowIndex, rows);
}

void q_itemmodelsurfacedataproxy_set_item(void* self, int rowIndex, int columnIndex, const void* item) {
    QSurfaceDataProxy_SetItem((QSurfaceDataProxy*)self, rowIndex, columnIndex, (QSurfaceDataItem*)item);
}

void q_itemmodelsurfacedataproxy_set_item2(void* self, const void* position, const void* item) {
    QSurfaceDataProxy_SetItem2((QSurfaceDataProxy*)self, (QPoint*)position, (QSurfaceDataItem*)item);
}

int32_t q_itemmodelsurfacedataproxy_add_row(void* self, libqt_list /* of QSurfaceDataItem* */ row) {
    return QSurfaceDataProxy_AddRow((QSurfaceDataProxy*)self, row);
}

int32_t q_itemmodelsurfacedataproxy_add_rows(void* self, libqt_list /* of QSurfaceDataItem* */ rows) {
    return QSurfaceDataProxy_AddRows((QSurfaceDataProxy*)self, rows);
}

void q_itemmodelsurfacedataproxy_insert_row(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ row) {
    QSurfaceDataProxy_InsertRow((QSurfaceDataProxy*)self, rowIndex, row);
}

void q_itemmodelsurfacedataproxy_insert_rows(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ rows) {
    QSurfaceDataProxy_InsertRows((QSurfaceDataProxy*)self, rowIndex, rows);
}

void q_itemmodelsurfacedataproxy_remove_rows(void* self, int rowIndex, int removeCount) {
    QSurfaceDataProxy_RemoveRows((QSurfaceDataProxy*)self, rowIndex, removeCount);
}

void q_itemmodelsurfacedataproxy_array_reset(void* self) {
    QSurfaceDataProxy_ArrayReset((QSurfaceDataProxy*)self);
}

void q_itemmodelsurfacedataproxy_on_array_reset(void* self, void (*callback)(void*)) {
    QSurfaceDataProxy_Connect_ArrayReset((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_rows_added(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsAdded((QSurfaceDataProxy*)self, startIndex, count);
}

void q_itemmodelsurfacedataproxy_on_rows_added(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsAdded((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_rows_changed(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsChanged((QSurfaceDataProxy*)self, startIndex, count);
}

void q_itemmodelsurfacedataproxy_on_rows_changed(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_rows_removed(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsRemoved((QSurfaceDataProxy*)self, startIndex, count);
}

void q_itemmodelsurfacedataproxy_on_rows_removed(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsRemoved((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_rows_inserted(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsInserted((QSurfaceDataProxy*)self, startIndex, count);
}

void q_itemmodelsurfacedataproxy_on_rows_inserted(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsInserted((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_item_changed(void* self, int rowIndex, int columnIndex) {
    QSurfaceDataProxy_ItemChanged((QSurfaceDataProxy*)self, rowIndex, columnIndex);
}

void q_itemmodelsurfacedataproxy_on_item_changed(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_ItemChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_row_count_changed(void* self, int count) {
    QSurfaceDataProxy_RowCountChanged((QSurfaceDataProxy*)self, count);
}

void q_itemmodelsurfacedataproxy_on_row_count_changed(void* self, void (*callback)(void*, int)) {
    QSurfaceDataProxy_Connect_RowCountChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_column_count_changed(void* self, int count) {
    QSurfaceDataProxy_ColumnCountChanged((QSurfaceDataProxy*)self, count);
}

void q_itemmodelsurfacedataproxy_on_column_count_changed(void* self, void (*callback)(void*, int)) {
    QSurfaceDataProxy_Connect_ColumnCountChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_series_changed(void* self, void* series) {
    QSurfaceDataProxy_SeriesChanged((QSurfaceDataProxy*)self, (QSurface3DSeries*)series);
}

void q_itemmodelsurfacedataproxy_on_series_changed(void* self, void (*callback)(void*, void*)) {
    QSurfaceDataProxy_Connect_SeriesChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

int32_t q_itemmodelsurfacedataproxy_type(const void* self) {
    return QAbstractDataProxy_Type((QAbstractDataProxy*)self);
}

const char* q_itemmodelsurfacedataproxy_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_itemmodelsurfacedataproxy_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_itemmodelsurfacedataproxy_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_itemmodelsurfacedataproxy_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_itemmodelsurfacedataproxy_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_itemmodelsurfacedataproxy_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_itemmodelsurfacedataproxy_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_itemmodelsurfacedataproxy_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_itemmodelsurfacedataproxy_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_itemmodelsurfacedataproxy_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_itemmodelsurfacedataproxy_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_itemmodelsurfacedataproxy_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_itemmodelsurfacedataproxy_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_itemmodelsurfacedataproxy_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_itemmodelsurfacedataproxy_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_itemmodelsurfacedataproxy_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_itemmodelsurfacedataproxy_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_itemmodelsurfacedataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_itemmodelsurfacedataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_itemmodelsurfacedataproxy_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_itemmodelsurfacedataproxy_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_itemmodelsurfacedataproxy_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_itemmodelsurfacedataproxy_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_itemmodelsurfacedataproxy_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_itemmodelsurfacedataproxy_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_itemmodelsurfacedataproxy_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_itemmodelsurfacedataproxy_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_itemmodelsurfacedataproxy_dynamic_property_names\n");
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

QBindingStorage* q_itemmodelsurfacedataproxy_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_itemmodelsurfacedataproxy_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_itemmodelsurfacedataproxy_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_itemmodelsurfacedataproxy_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_itemmodelsurfacedataproxy_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_itemmodelsurfacedataproxy_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_itemmodelsurfacedataproxy_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_itemmodelsurfacedataproxy_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_itemmodelsurfacedataproxy_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_itemmodelsurfacedataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_itemmodelsurfacedataproxy_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_itemmodelsurfacedataproxy_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_itemmodelsurfacedataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_itemmodelsurfacedataproxy_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_itemmodelsurfacedataproxy_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_itemmodelsurfacedataproxy_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_itemmodelsurfacedataproxy_event(void* self, void* event) {
    return QItemModelSurfaceDataProxy_Event((QItemModelSurfaceDataProxy*)self, (QEvent*)event);
}

bool q_itemmodelsurfacedataproxy_super_event(void* self, void* event) {
    return QItemModelSurfaceDataProxy_SuperEvent((QItemModelSurfaceDataProxy*)self, (QEvent*)event);
}

void q_itemmodelsurfacedataproxy_on_event(void* self, bool (*callback)(void*, void*)) {
    QItemModelSurfaceDataProxy_OnEvent((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

bool q_itemmodelsurfacedataproxy_event_filter(void* self, void* watched, void* event) {
    return QItemModelSurfaceDataProxy_EventFilter((QItemModelSurfaceDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

bool q_itemmodelsurfacedataproxy_super_event_filter(void* self, void* watched, void* event) {
    return QItemModelSurfaceDataProxy_SuperEventFilter((QItemModelSurfaceDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

void q_itemmodelsurfacedataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QItemModelSurfaceDataProxy_OnEventFilter((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_timer_event(void* self, void* event) {
    QItemModelSurfaceDataProxy_TimerEvent((QItemModelSurfaceDataProxy*)self, (QTimerEvent*)event);
}

void q_itemmodelsurfacedataproxy_super_timer_event(void* self, void* event) {
    QItemModelSurfaceDataProxy_SuperTimerEvent((QItemModelSurfaceDataProxy*)self, (QTimerEvent*)event);
}

void q_itemmodelsurfacedataproxy_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QItemModelSurfaceDataProxy_OnTimerEvent((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_child_event(void* self, void* event) {
    QItemModelSurfaceDataProxy_ChildEvent((QItemModelSurfaceDataProxy*)self, (QChildEvent*)event);
}

void q_itemmodelsurfacedataproxy_super_child_event(void* self, void* event) {
    QItemModelSurfaceDataProxy_SuperChildEvent((QItemModelSurfaceDataProxy*)self, (QChildEvent*)event);
}

void q_itemmodelsurfacedataproxy_on_child_event(void* self, void (*callback)(void*, void*)) {
    QItemModelSurfaceDataProxy_OnChildEvent((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_custom_event(void* self, void* event) {
    QItemModelSurfaceDataProxy_CustomEvent((QItemModelSurfaceDataProxy*)self, (QEvent*)event);
}

void q_itemmodelsurfacedataproxy_super_custom_event(void* self, void* event) {
    QItemModelSurfaceDataProxy_SuperCustomEvent((QItemModelSurfaceDataProxy*)self, (QEvent*)event);
}

void q_itemmodelsurfacedataproxy_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QItemModelSurfaceDataProxy_OnCustomEvent((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_connect_notify(void* self, const void* signal) {
    QItemModelSurfaceDataProxy_ConnectNotify((QItemModelSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelsurfacedataproxy_super_connect_notify(void* self, const void* signal) {
    QItemModelSurfaceDataProxy_SuperConnectNotify((QItemModelSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelsurfacedataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QItemModelSurfaceDataProxy_OnConnectNotify((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_disconnect_notify(void* self, const void* signal) {
    QItemModelSurfaceDataProxy_DisconnectNotify((QItemModelSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelsurfacedataproxy_super_disconnect_notify(void* self, const void* signal) {
    QItemModelSurfaceDataProxy_SuperDisconnectNotify((QItemModelSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelsurfacedataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QItemModelSurfaceDataProxy_OnDisconnectNotify((QItemModelSurfaceDataProxy*)self, (intptr_t)callback);
}

QObject* q_itemmodelsurfacedataproxy_sender(const void* self) {
    return QItemModelSurfaceDataProxy_Sender((QItemModelSurfaceDataProxy*)self);
}

int32_t q_itemmodelsurfacedataproxy_sender_signal_index(const void* self) {
    return QItemModelSurfaceDataProxy_SenderSignalIndex((QItemModelSurfaceDataProxy*)self);
}

int32_t q_itemmodelsurfacedataproxy_receivers(const void* self, const char* signal) {
    return QItemModelSurfaceDataProxy_Receivers((QItemModelSurfaceDataProxy*)self, signal);
}

bool q_itemmodelsurfacedataproxy_is_signal_connected(const void* self, const void* signal) {
    return QItemModelSurfaceDataProxy_IsSignalConnected((QItemModelSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_itemmodelsurfacedataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_itemmodelsurfacedataproxy_delete(void* self) {
    QItemModelSurfaceDataProxy_Delete((QItemModelSurfaceDataProxy*)(self));
}
