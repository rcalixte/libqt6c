#include "libqabstractdataproxy.hpp"
#include "libqbar3dseries.hpp"
#include "libqbardataitem.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "libqbardataproxy.hpp"
#include "libqbardataproxy.h"

QBarDataProxy* q_bardataproxy_new() {
    return QBarDataProxy_New();
}

QBarDataProxy* q_bardataproxy_new2(void* parent) {
    return QBarDataProxy_New2((QObject*)parent);
}

const QMetaObject* q_bardataproxy_meta_object(const void* self) {
    return QBarDataProxy_MetaObject((QBarDataProxy*)self);
}

void q_bardataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QBarDataProxy_OnMetaObject((QBarDataProxy*)self, (intptr_t)callback);
}

const QMetaObject* q_bardataproxy_super_meta_object(const void* self) {
    return QBarDataProxy_SuperMetaObject((QBarDataProxy*)self);
}

void* q_bardataproxy_metacast(void* self, const char* param1) {
    return QBarDataProxy_Metacast((QBarDataProxy*)self, param1);
}

void q_bardataproxy_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QBarDataProxy_OnMetacast((QBarDataProxy*)self, (intptr_t)callback);
}

void* q_bardataproxy_super_metacast(void* self, const char* param1) {
    return QBarDataProxy_SuperMetacast((QBarDataProxy*)self, param1);
}

int32_t q_bardataproxy_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBarDataProxy_Metacall((QBarDataProxy*)self, param1, param2, param3);
}

void q_bardataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QBarDataProxy_OnMetacall((QBarDataProxy*)self, (intptr_t)callback);
}

int32_t q_bardataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBarDataProxy_SuperMetacall((QBarDataProxy*)self, param1, param2, param3);
}

const char* q_bardataproxy_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QBar3DSeries* q_bardataproxy_series(const void* self) {
    return QBarDataProxy_Series((QBarDataProxy*)self);
}

int32_t q_bardataproxy_row_count(const void* self) {
    return QBarDataProxy_RowCount((QBarDataProxy*)self);
}

const char** q_bardataproxy_row_labels(const void* self) {
    libqt_list _arr = QBarDataProxy_RowLabels((QBarDataProxy*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bardataproxy_row_labels\n");
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

void q_bardataproxy_set_row_labels(void* self, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bardataproxy_set_row_labels\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QBarDataProxy_SetRowLabels((QBarDataProxy*)self, labels_list);
    free(labels_qstr);
}

const char** q_bardataproxy_column_labels(const void* self) {
    libqt_list _arr = QBarDataProxy_ColumnLabels((QBarDataProxy*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bardataproxy_column_labels\n");
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

void q_bardataproxy_set_column_labels(void* self, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bardataproxy_set_column_labels\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QBarDataProxy_SetColumnLabels((QBarDataProxy*)self, labels_list);
    free(labels_qstr);
}

libqt_list /* of libqt_list of QBarDataItem* */ q_bardataproxy_array(const void* self) {
    return QBarDataProxy_Array((QBarDataProxy*)self);
}

libqt_list /* of QBarDataItem* */ q_bardataproxy_row_at(const void* self, int rowIndex) {
    libqt_list _arr = QBarDataProxy_RowAt((QBarDataProxy*)self, rowIndex);
    return _arr;
}

const QBarDataItem* q_bardataproxy_item_at(const void* self, int rowIndex, int columnIndex) {
    return QBarDataProxy_ItemAt((QBarDataProxy*)self, rowIndex, columnIndex);
}

const QBarDataItem* q_bardataproxy_item_at2(const void* self, const void* position) {
    return QBarDataProxy_ItemAt2((QBarDataProxy*)self, (QPoint*)position);
}

void q_bardataproxy_reset_array(void* self) {
    QBarDataProxy_ResetArray((QBarDataProxy*)self);
}

void q_bardataproxy_reset_array2(void* self, libqt_list /* of QBarDataItem* */ newArray) {
    QBarDataProxy_ResetArray2((QBarDataProxy*)self, newArray);
}

void q_bardataproxy_reset_array3(void* self, libqt_list /* of QBarDataItem* */ newArray, const char* rowLabels[static 1], const char* columnLabels[static 1]) {
    size_t rowLabels_len = libqt_strv_length(rowLabels);
    libqt_string* rowLabels_qstr = (libqt_string*)malloc(rowLabels_len * sizeof(libqt_string));
    if (rowLabels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bardataproxy_reset_array3\n");
        abort();
    }
    for (size_t i = 0; i < rowLabels_len; ++i)
        rowLabels_qstr[i] = qstring(rowLabels[i]);
    libqt_list rowLabels_list = qlist(rowLabels_qstr, rowLabels_len);
    size_t columnLabels_len = libqt_strv_length(columnLabels);
    libqt_string* columnLabels_qstr = (libqt_string*)malloc(columnLabels_len * sizeof(libqt_string));
    if (columnLabels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bardataproxy_reset_array3\n");
        abort();
    }
    for (size_t i = 0; i < columnLabels_len; ++i)
        columnLabels_qstr[i] = qstring(columnLabels[i]);
    libqt_list columnLabels_list = qlist(columnLabels_qstr, columnLabels_len);
    QBarDataProxy_ResetArray3((QBarDataProxy*)self, newArray, rowLabels_list, columnLabels_list);
    free(rowLabels_qstr);

    free(columnLabels_qstr);
}

void q_bardataproxy_set_row(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ row) {
    QBarDataProxy_SetRow((QBarDataProxy*)self, rowIndex, row);
}

void q_bardataproxy_set_row2(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ row, const char* label) {
    QBarDataProxy_SetRow2((QBarDataProxy*)self, rowIndex, row, qstring(label));
}

void q_bardataproxy_set_rows(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ rows) {
    QBarDataProxy_SetRows((QBarDataProxy*)self, rowIndex, rows);
}

void q_bardataproxy_set_rows2(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ rows, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bardataproxy_set_rows2\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QBarDataProxy_SetRows2((QBarDataProxy*)self, rowIndex, rows, labels_list);
    free(labels_qstr);
}

void q_bardataproxy_set_item(void* self, int rowIndex, int columnIndex, const void* item) {
    QBarDataProxy_SetItem((QBarDataProxy*)self, rowIndex, columnIndex, (QBarDataItem*)item);
}

void q_bardataproxy_set_item2(void* self, const void* position, const void* item) {
    QBarDataProxy_SetItem2((QBarDataProxy*)self, (QPoint*)position, (QBarDataItem*)item);
}

int32_t q_bardataproxy_add_row(void* self, libqt_list /* of QBarDataItem* */ row) {
    return QBarDataProxy_AddRow((QBarDataProxy*)self, row);
}

int32_t q_bardataproxy_add_row2(void* self, libqt_list /* of QBarDataItem* */ row, const char* label) {
    return QBarDataProxy_AddRow2((QBarDataProxy*)self, row, qstring(label));
}

int32_t q_bardataproxy_add_rows(void* self, libqt_list /* of QBarDataItem* */ rows) {
    return QBarDataProxy_AddRows((QBarDataProxy*)self, rows);
}

int32_t q_bardataproxy_add_rows2(void* self, libqt_list /* of QBarDataItem* */ rows, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bardataproxy_add_rows2\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    int32_t _out = QBarDataProxy_AddRows2((QBarDataProxy*)self, rows, labels_list);
    free(labels_qstr);
    return _out;
}

void q_bardataproxy_insert_row(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ row) {
    QBarDataProxy_InsertRow((QBarDataProxy*)self, rowIndex, row);
}

void q_bardataproxy_insert_row2(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ row, const char* label) {
    QBarDataProxy_InsertRow2((QBarDataProxy*)self, rowIndex, row, qstring(label));
}

void q_bardataproxy_insert_rows(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ rows) {
    QBarDataProxy_InsertRows((QBarDataProxy*)self, rowIndex, rows);
}

void q_bardataproxy_insert_rows2(void* self, int rowIndex, libqt_list /* of QBarDataItem* */ rows, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bardataproxy_insert_rows2\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QBarDataProxy_InsertRows2((QBarDataProxy*)self, rowIndex, rows, labels_list);
    free(labels_qstr);
}

void q_bardataproxy_remove_rows(void* self, int rowIndex, int removeCount) {
    QBarDataProxy_RemoveRows((QBarDataProxy*)self, rowIndex, removeCount);
}

void q_bardataproxy_array_reset(void* self) {
    QBarDataProxy_ArrayReset((QBarDataProxy*)self);
}

void q_bardataproxy_on_array_reset(void* self, void (*callback)(void*)) {
    QBarDataProxy_Connect_ArrayReset((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_rows_added(void* self, int startIndex, int count) {
    QBarDataProxy_RowsAdded((QBarDataProxy*)self, startIndex, count);
}

void q_bardataproxy_on_rows_added(void* self, void (*callback)(void*, int, int)) {
    QBarDataProxy_Connect_RowsAdded((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_rows_changed(void* self, int startIndex, int count) {
    QBarDataProxy_RowsChanged((QBarDataProxy*)self, startIndex, count);
}

void q_bardataproxy_on_rows_changed(void* self, void (*callback)(void*, int, int)) {
    QBarDataProxy_Connect_RowsChanged((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_rows_removed(void* self, int startIndex, int count) {
    QBarDataProxy_RowsRemoved((QBarDataProxy*)self, startIndex, count);
}

void q_bardataproxy_on_rows_removed(void* self, void (*callback)(void*, int, int)) {
    QBarDataProxy_Connect_RowsRemoved((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_rows_inserted(void* self, int startIndex, int count) {
    QBarDataProxy_RowsInserted((QBarDataProxy*)self, startIndex, count);
}

void q_bardataproxy_on_rows_inserted(void* self, void (*callback)(void*, int, int)) {
    QBarDataProxy_Connect_RowsInserted((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_item_changed(void* self, int rowIndex, int columnIndex) {
    QBarDataProxy_ItemChanged((QBarDataProxy*)self, rowIndex, columnIndex);
}

void q_bardataproxy_on_item_changed(void* self, void (*callback)(void*, int, int)) {
    QBarDataProxy_Connect_ItemChanged((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_row_count_changed(void* self, int count) {
    QBarDataProxy_RowCountChanged((QBarDataProxy*)self, count);
}

void q_bardataproxy_on_row_count_changed(void* self, void (*callback)(void*, int)) {
    QBarDataProxy_Connect_RowCountChanged((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_row_labels_changed(void* self) {
    QBarDataProxy_RowLabelsChanged((QBarDataProxy*)self);
}

void q_bardataproxy_on_row_labels_changed(void* self, void (*callback)(void*)) {
    QBarDataProxy_Connect_RowLabelsChanged((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_column_labels_changed(void* self) {
    QBarDataProxy_ColumnLabelsChanged((QBarDataProxy*)self);
}

void q_bardataproxy_on_column_labels_changed(void* self, void (*callback)(void*)) {
    QBarDataProxy_Connect_ColumnLabelsChanged((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_series_changed(void* self, void* series) {
    QBarDataProxy_SeriesChanged((QBarDataProxy*)self, (QBar3DSeries*)series);
}

void q_bardataproxy_on_series_changed(void* self, void (*callback)(void*, void*)) {
    QBarDataProxy_Connect_SeriesChanged((QBarDataProxy*)self, (intptr_t)callback);
}

const char* q_bardataproxy_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_bardataproxy_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bardataproxy_remove_rows3(void* self, int rowIndex, int removeCount, bool removeLabels) {
    QBarDataProxy_RemoveRows3((QBarDataProxy*)self, rowIndex, removeCount, removeLabels);
}

int32_t q_bardataproxy_type(const void* self) {
    return QAbstractDataProxy_Type((QAbstractDataProxy*)self);
}

const char* q_bardataproxy_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bardataproxy_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_bardataproxy_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_bardataproxy_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_bardataproxy_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_bardataproxy_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_bardataproxy_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_bardataproxy_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_bardataproxy_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_bardataproxy_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_bardataproxy_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_bardataproxy_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_bardataproxy_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_bardataproxy_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_bardataproxy_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_bardataproxy_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_bardataproxy_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_bardataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_bardataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_bardataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_bardataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_bardataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_bardataproxy_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_bardataproxy_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_bardataproxy_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_bardataproxy_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_bardataproxy_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_bardataproxy_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_bardataproxy_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_bardataproxy_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_bardataproxy_dynamic_property_names\n");
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

QBindingStorage* q_bardataproxy_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_bardataproxy_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_bardataproxy_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_bardataproxy_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_bardataproxy_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_bardataproxy_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_bardataproxy_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_bardataproxy_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_bardataproxy_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_bardataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_bardataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_bardataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_bardataproxy_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_bardataproxy_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_bardataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_bardataproxy_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_bardataproxy_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_bardataproxy_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_bardataproxy_event(void* self, void* event) {
    return QBarDataProxy_Event((QBarDataProxy*)self, (QEvent*)event);
}

bool q_bardataproxy_super_event(void* self, void* event) {
    return QBarDataProxy_SuperEvent((QBarDataProxy*)self, (QEvent*)event);
}

void q_bardataproxy_on_event(void* self, bool (*callback)(void*, void*)) {
    QBarDataProxy_OnEvent((QBarDataProxy*)self, (intptr_t)callback);
}

bool q_bardataproxy_event_filter(void* self, void* watched, void* event) {
    return QBarDataProxy_EventFilter((QBarDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

bool q_bardataproxy_super_event_filter(void* self, void* watched, void* event) {
    return QBarDataProxy_SuperEventFilter((QBarDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

void q_bardataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QBarDataProxy_OnEventFilter((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_timer_event(void* self, void* event) {
    QBarDataProxy_TimerEvent((QBarDataProxy*)self, (QTimerEvent*)event);
}

void q_bardataproxy_super_timer_event(void* self, void* event) {
    QBarDataProxy_SuperTimerEvent((QBarDataProxy*)self, (QTimerEvent*)event);
}

void q_bardataproxy_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QBarDataProxy_OnTimerEvent((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_child_event(void* self, void* event) {
    QBarDataProxy_ChildEvent((QBarDataProxy*)self, (QChildEvent*)event);
}

void q_bardataproxy_super_child_event(void* self, void* event) {
    QBarDataProxy_SuperChildEvent((QBarDataProxy*)self, (QChildEvent*)event);
}

void q_bardataproxy_on_child_event(void* self, void (*callback)(void*, void*)) {
    QBarDataProxy_OnChildEvent((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_custom_event(void* self, void* event) {
    QBarDataProxy_CustomEvent((QBarDataProxy*)self, (QEvent*)event);
}

void q_bardataproxy_super_custom_event(void* self, void* event) {
    QBarDataProxy_SuperCustomEvent((QBarDataProxy*)self, (QEvent*)event);
}

void q_bardataproxy_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QBarDataProxy_OnCustomEvent((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_connect_notify(void* self, const void* signal) {
    QBarDataProxy_ConnectNotify((QBarDataProxy*)self, (QMetaMethod*)signal);
}

void q_bardataproxy_super_connect_notify(void* self, const void* signal) {
    QBarDataProxy_SuperConnectNotify((QBarDataProxy*)self, (QMetaMethod*)signal);
}

void q_bardataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QBarDataProxy_OnConnectNotify((QBarDataProxy*)self, (intptr_t)callback);
}

void q_bardataproxy_disconnect_notify(void* self, const void* signal) {
    QBarDataProxy_DisconnectNotify((QBarDataProxy*)self, (QMetaMethod*)signal);
}

void q_bardataproxy_super_disconnect_notify(void* self, const void* signal) {
    QBarDataProxy_SuperDisconnectNotify((QBarDataProxy*)self, (QMetaMethod*)signal);
}

void q_bardataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QBarDataProxy_OnDisconnectNotify((QBarDataProxy*)self, (intptr_t)callback);
}

QObject* q_bardataproxy_sender(const void* self) {
    return QBarDataProxy_Sender((QBarDataProxy*)self);
}

int32_t q_bardataproxy_sender_signal_index(const void* self) {
    return QBarDataProxy_SenderSignalIndex((QBarDataProxy*)self);
}

int32_t q_bardataproxy_receivers(const void* self, const char* signal) {
    return QBarDataProxy_Receivers((QBarDataProxy*)self, signal);
}

bool q_bardataproxy_is_signal_connected(const void* self, const void* signal) {
    return QBarDataProxy_IsSignalConnected((QBarDataProxy*)self, (QMetaMethod*)signal);
}

void q_bardataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_bardataproxy_delete(void* self) {
    QBarDataProxy_Delete((QBarDataProxy*)(self));
}
