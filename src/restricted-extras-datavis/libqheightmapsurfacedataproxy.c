#include "libqabstractdataproxy.hpp"
#include "../libqcoreevent.hpp"
#include "../libqimage.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqsurfacedataproxy.hpp"
#include "libqheightmapsurfacedataproxy.hpp"
#include "libqheightmapsurfacedataproxy.h"

QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new() {
    return QHeightMapSurfaceDataProxy_New();
}

QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new2(const void* image) {
    return QHeightMapSurfaceDataProxy_New2((QImage*)image);
}

QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new3(const char* filename) {
    return QHeightMapSurfaceDataProxy_New3(qstring(filename));
}

QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new4(void* parent) {
    return QHeightMapSurfaceDataProxy_New4((QObject*)parent);
}

QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new5(const void* image, void* parent) {
    return QHeightMapSurfaceDataProxy_New5((QImage*)image, (QObject*)parent);
}

QHeightMapSurfaceDataProxy* q_heightmapsurfacedataproxy_new6(const char* filename, void* parent) {
    return QHeightMapSurfaceDataProxy_New6(qstring(filename), (QObject*)parent);
}

const QMetaObject* q_heightmapsurfacedataproxy_meta_object(const void* self) {
    return QHeightMapSurfaceDataProxy_MetaObject((QHeightMapSurfaceDataProxy*)self);
}

void q_heightmapsurfacedataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QHeightMapSurfaceDataProxy_OnMetaObject((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

const QMetaObject* q_heightmapsurfacedataproxy_super_meta_object(const void* self) {
    return QHeightMapSurfaceDataProxy_SuperMetaObject((QHeightMapSurfaceDataProxy*)self);
}

void* q_heightmapsurfacedataproxy_metacast(void* self, const char* param1) {
    return QHeightMapSurfaceDataProxy_Metacast((QHeightMapSurfaceDataProxy*)self, param1);
}

void q_heightmapsurfacedataproxy_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QHeightMapSurfaceDataProxy_OnMetacast((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void* q_heightmapsurfacedataproxy_super_metacast(void* self, const char* param1) {
    return QHeightMapSurfaceDataProxy_SuperMetacast((QHeightMapSurfaceDataProxy*)self, param1);
}

int32_t q_heightmapsurfacedataproxy_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHeightMapSurfaceDataProxy_Metacall((QHeightMapSurfaceDataProxy*)self, param1, param2, param3);
}

void q_heightmapsurfacedataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QHeightMapSurfaceDataProxy_OnMetacall((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

int32_t q_heightmapsurfacedataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHeightMapSurfaceDataProxy_SuperMetacall((QHeightMapSurfaceDataProxy*)self, param1, param2, param3);
}

const char* q_heightmapsurfacedataproxy_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_heightmapsurfacedataproxy_set_height_map(void* self, const void* image) {
    QHeightMapSurfaceDataProxy_SetHeightMap((QHeightMapSurfaceDataProxy*)self, (QImage*)image);
}

QImage* q_heightmapsurfacedataproxy_height_map(const void* self) {
    return QHeightMapSurfaceDataProxy_HeightMap((QHeightMapSurfaceDataProxy*)self);
}

void q_heightmapsurfacedataproxy_set_height_map_file(void* self, const char* filename) {
    QHeightMapSurfaceDataProxy_SetHeightMapFile((QHeightMapSurfaceDataProxy*)self, qstring(filename));
}

const char* q_heightmapsurfacedataproxy_height_map_file(const void* self) {
    libqt_string _str = QHeightMapSurfaceDataProxy_HeightMapFile((QHeightMapSurfaceDataProxy*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_heightmapsurfacedataproxy_set_value_ranges(void* self, float minX, float maxX, float minZ, float maxZ) {
    QHeightMapSurfaceDataProxy_SetValueRanges((QHeightMapSurfaceDataProxy*)self, minX, maxX, minZ, maxZ);
}

void q_heightmapsurfacedataproxy_set_min_x_value(void* self, float min) {
    QHeightMapSurfaceDataProxy_SetMinXValue((QHeightMapSurfaceDataProxy*)self, min);
}

float q_heightmapsurfacedataproxy_min_x_value(const void* self) {
    return QHeightMapSurfaceDataProxy_MinXValue((QHeightMapSurfaceDataProxy*)self);
}

void q_heightmapsurfacedataproxy_set_max_x_value(void* self, float max) {
    QHeightMapSurfaceDataProxy_SetMaxXValue((QHeightMapSurfaceDataProxy*)self, max);
}

float q_heightmapsurfacedataproxy_max_x_value(const void* self) {
    return QHeightMapSurfaceDataProxy_MaxXValue((QHeightMapSurfaceDataProxy*)self);
}

void q_heightmapsurfacedataproxy_set_min_z_value(void* self, float min) {
    QHeightMapSurfaceDataProxy_SetMinZValue((QHeightMapSurfaceDataProxy*)self, min);
}

float q_heightmapsurfacedataproxy_min_z_value(const void* self) {
    return QHeightMapSurfaceDataProxy_MinZValue((QHeightMapSurfaceDataProxy*)self);
}

void q_heightmapsurfacedataproxy_set_max_z_value(void* self, float max) {
    QHeightMapSurfaceDataProxy_SetMaxZValue((QHeightMapSurfaceDataProxy*)self, max);
}

float q_heightmapsurfacedataproxy_max_z_value(const void* self) {
    return QHeightMapSurfaceDataProxy_MaxZValue((QHeightMapSurfaceDataProxy*)self);
}

void q_heightmapsurfacedataproxy_set_min_y_value(void* self, float min) {
    QHeightMapSurfaceDataProxy_SetMinYValue((QHeightMapSurfaceDataProxy*)self, min);
}

float q_heightmapsurfacedataproxy_min_y_value(const void* self) {
    return QHeightMapSurfaceDataProxy_MinYValue((QHeightMapSurfaceDataProxy*)self);
}

void q_heightmapsurfacedataproxy_set_max_y_value(void* self, float max) {
    QHeightMapSurfaceDataProxy_SetMaxYValue((QHeightMapSurfaceDataProxy*)self, max);
}

float q_heightmapsurfacedataproxy_max_y_value(const void* self) {
    return QHeightMapSurfaceDataProxy_MaxYValue((QHeightMapSurfaceDataProxy*)self);
}

void q_heightmapsurfacedataproxy_set_auto_scale_y(void* self, bool enabled) {
    QHeightMapSurfaceDataProxy_SetAutoScaleY((QHeightMapSurfaceDataProxy*)self, enabled);
}

bool q_heightmapsurfacedataproxy_auto_scale_y(const void* self) {
    return QHeightMapSurfaceDataProxy_AutoScaleY((QHeightMapSurfaceDataProxy*)self);
}

void q_heightmapsurfacedataproxy_height_map_changed(void* self, const void* image) {
    QHeightMapSurfaceDataProxy_HeightMapChanged((QHeightMapSurfaceDataProxy*)self, (QImage*)image);
}

void q_heightmapsurfacedataproxy_on_height_map_changed(void* self, void (*callback)(void*, const void*)) {
    QHeightMapSurfaceDataProxy_Connect_HeightMapChanged((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_height_map_file_changed(void* self, const char* filename) {
    QHeightMapSurfaceDataProxy_HeightMapFileChanged((QHeightMapSurfaceDataProxy*)self, qstring(filename));
}

void q_heightmapsurfacedataproxy_on_height_map_file_changed(void* self, void (*callback)(void*, const char*)) {
    QHeightMapSurfaceDataProxy_Connect_HeightMapFileChanged((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_min_x_value_changed(void* self, float value) {
    QHeightMapSurfaceDataProxy_MinXValueChanged((QHeightMapSurfaceDataProxy*)self, value);
}

void q_heightmapsurfacedataproxy_on_min_x_value_changed(void* self, void (*callback)(void*, float)) {
    QHeightMapSurfaceDataProxy_Connect_MinXValueChanged((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_max_x_value_changed(void* self, float value) {
    QHeightMapSurfaceDataProxy_MaxXValueChanged((QHeightMapSurfaceDataProxy*)self, value);
}

void q_heightmapsurfacedataproxy_on_max_x_value_changed(void* self, void (*callback)(void*, float)) {
    QHeightMapSurfaceDataProxy_Connect_MaxXValueChanged((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_min_z_value_changed(void* self, float value) {
    QHeightMapSurfaceDataProxy_MinZValueChanged((QHeightMapSurfaceDataProxy*)self, value);
}

void q_heightmapsurfacedataproxy_on_min_z_value_changed(void* self, void (*callback)(void*, float)) {
    QHeightMapSurfaceDataProxy_Connect_MinZValueChanged((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_max_z_value_changed(void* self, float value) {
    QHeightMapSurfaceDataProxy_MaxZValueChanged((QHeightMapSurfaceDataProxy*)self, value);
}

void q_heightmapsurfacedataproxy_on_max_z_value_changed(void* self, void (*callback)(void*, float)) {
    QHeightMapSurfaceDataProxy_Connect_MaxZValueChanged((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_min_y_value_changed(void* self, float value) {
    QHeightMapSurfaceDataProxy_MinYValueChanged((QHeightMapSurfaceDataProxy*)self, value);
}

void q_heightmapsurfacedataproxy_on_min_y_value_changed(void* self, void (*callback)(void*, float)) {
    QHeightMapSurfaceDataProxy_Connect_MinYValueChanged((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_max_y_value_changed(void* self, float value) {
    QHeightMapSurfaceDataProxy_MaxYValueChanged((QHeightMapSurfaceDataProxy*)self, value);
}

void q_heightmapsurfacedataproxy_on_max_y_value_changed(void* self, void (*callback)(void*, float)) {
    QHeightMapSurfaceDataProxy_Connect_MaxYValueChanged((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_auto_scale_y_changed(void* self, bool enabled) {
    QHeightMapSurfaceDataProxy_AutoScaleYChanged((QHeightMapSurfaceDataProxy*)self, enabled);
}

void q_heightmapsurfacedataproxy_on_auto_scale_y_changed(void* self, void (*callback)(void*, bool)) {
    QHeightMapSurfaceDataProxy_Connect_AutoScaleYChanged((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

const char* q_heightmapsurfacedataproxy_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_heightmapsurfacedataproxy_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSurface3DSeries* q_heightmapsurfacedataproxy_series(const void* self) {
    return QSurfaceDataProxy_Series((QSurfaceDataProxy*)self);
}

int32_t q_heightmapsurfacedataproxy_row_count(const void* self) {
    return QSurfaceDataProxy_RowCount((QSurfaceDataProxy*)self);
}

int32_t q_heightmapsurfacedataproxy_column_count(const void* self) {
    return QSurfaceDataProxy_ColumnCount((QSurfaceDataProxy*)self);
}

libqt_list /* of libqt_list of QSurfaceDataItem* */ q_heightmapsurfacedataproxy_array(const void* self) {
    return QSurfaceDataProxy_Array((QSurfaceDataProxy*)self);
}

const QSurfaceDataItem* q_heightmapsurfacedataproxy_item_at(const void* self, int rowIndex, int columnIndex) {
    return QSurfaceDataProxy_ItemAt((QSurfaceDataProxy*)self, rowIndex, columnIndex);
}

const QSurfaceDataItem* q_heightmapsurfacedataproxy_item_at2(const void* self, const void* position) {
    return QSurfaceDataProxy_ItemAt2((QSurfaceDataProxy*)self, (QPoint*)position);
}

void q_heightmapsurfacedataproxy_reset_array(void* self, libqt_list /* of QSurfaceDataItem* */ newArray) {
    QSurfaceDataProxy_ResetArray((QSurfaceDataProxy*)self, newArray);
}

void q_heightmapsurfacedataproxy_set_row(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ row) {
    QSurfaceDataProxy_SetRow((QSurfaceDataProxy*)self, rowIndex, row);
}

void q_heightmapsurfacedataproxy_set_rows(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ rows) {
    QSurfaceDataProxy_SetRows((QSurfaceDataProxy*)self, rowIndex, rows);
}

void q_heightmapsurfacedataproxy_set_item(void* self, int rowIndex, int columnIndex, const void* item) {
    QSurfaceDataProxy_SetItem((QSurfaceDataProxy*)self, rowIndex, columnIndex, (QSurfaceDataItem*)item);
}

void q_heightmapsurfacedataproxy_set_item2(void* self, const void* position, const void* item) {
    QSurfaceDataProxy_SetItem2((QSurfaceDataProxy*)self, (QPoint*)position, (QSurfaceDataItem*)item);
}

int32_t q_heightmapsurfacedataproxy_add_row(void* self, libqt_list /* of QSurfaceDataItem* */ row) {
    return QSurfaceDataProxy_AddRow((QSurfaceDataProxy*)self, row);
}

int32_t q_heightmapsurfacedataproxy_add_rows(void* self, libqt_list /* of QSurfaceDataItem* */ rows) {
    return QSurfaceDataProxy_AddRows((QSurfaceDataProxy*)self, rows);
}

void q_heightmapsurfacedataproxy_insert_row(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ row) {
    QSurfaceDataProxy_InsertRow((QSurfaceDataProxy*)self, rowIndex, row);
}

void q_heightmapsurfacedataproxy_insert_rows(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ rows) {
    QSurfaceDataProxy_InsertRows((QSurfaceDataProxy*)self, rowIndex, rows);
}

void q_heightmapsurfacedataproxy_remove_rows(void* self, int rowIndex, int removeCount) {
    QSurfaceDataProxy_RemoveRows((QSurfaceDataProxy*)self, rowIndex, removeCount);
}

void q_heightmapsurfacedataproxy_array_reset(void* self) {
    QSurfaceDataProxy_ArrayReset((QSurfaceDataProxy*)self);
}

void q_heightmapsurfacedataproxy_on_array_reset(void* self, void (*callback)(void*)) {
    QSurfaceDataProxy_Connect_ArrayReset((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_rows_added(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsAdded((QSurfaceDataProxy*)self, startIndex, count);
}

void q_heightmapsurfacedataproxy_on_rows_added(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsAdded((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_rows_changed(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsChanged((QSurfaceDataProxy*)self, startIndex, count);
}

void q_heightmapsurfacedataproxy_on_rows_changed(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_rows_removed(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsRemoved((QSurfaceDataProxy*)self, startIndex, count);
}

void q_heightmapsurfacedataproxy_on_rows_removed(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsRemoved((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_rows_inserted(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsInserted((QSurfaceDataProxy*)self, startIndex, count);
}

void q_heightmapsurfacedataproxy_on_rows_inserted(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsInserted((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_item_changed(void* self, int rowIndex, int columnIndex) {
    QSurfaceDataProxy_ItemChanged((QSurfaceDataProxy*)self, rowIndex, columnIndex);
}

void q_heightmapsurfacedataproxy_on_item_changed(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_ItemChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_row_count_changed(void* self, int count) {
    QSurfaceDataProxy_RowCountChanged((QSurfaceDataProxy*)self, count);
}

void q_heightmapsurfacedataproxy_on_row_count_changed(void* self, void (*callback)(void*, int)) {
    QSurfaceDataProxy_Connect_RowCountChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_column_count_changed(void* self, int count) {
    QSurfaceDataProxy_ColumnCountChanged((QSurfaceDataProxy*)self, count);
}

void q_heightmapsurfacedataproxy_on_column_count_changed(void* self, void (*callback)(void*, int)) {
    QSurfaceDataProxy_Connect_ColumnCountChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_series_changed(void* self, void* series) {
    QSurfaceDataProxy_SeriesChanged((QSurfaceDataProxy*)self, (QSurface3DSeries*)series);
}

void q_heightmapsurfacedataproxy_on_series_changed(void* self, void (*callback)(void*, void*)) {
    QSurfaceDataProxy_Connect_SeriesChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

int32_t q_heightmapsurfacedataproxy_type(const void* self) {
    return QAbstractDataProxy_Type((QAbstractDataProxy*)self);
}

const char* q_heightmapsurfacedataproxy_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_heightmapsurfacedataproxy_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_heightmapsurfacedataproxy_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_heightmapsurfacedataproxy_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_heightmapsurfacedataproxy_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_heightmapsurfacedataproxy_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_heightmapsurfacedataproxy_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_heightmapsurfacedataproxy_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_heightmapsurfacedataproxy_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_heightmapsurfacedataproxy_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_heightmapsurfacedataproxy_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_heightmapsurfacedataproxy_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_heightmapsurfacedataproxy_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_heightmapsurfacedataproxy_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_heightmapsurfacedataproxy_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_heightmapsurfacedataproxy_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_heightmapsurfacedataproxy_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_heightmapsurfacedataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_heightmapsurfacedataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_heightmapsurfacedataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_heightmapsurfacedataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_heightmapsurfacedataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_heightmapsurfacedataproxy_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_heightmapsurfacedataproxy_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_heightmapsurfacedataproxy_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_heightmapsurfacedataproxy_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_heightmapsurfacedataproxy_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_heightmapsurfacedataproxy_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_heightmapsurfacedataproxy_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_heightmapsurfacedataproxy_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_heightmapsurfacedataproxy_dynamic_property_names\n");
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

QBindingStorage* q_heightmapsurfacedataproxy_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_heightmapsurfacedataproxy_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_heightmapsurfacedataproxy_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_heightmapsurfacedataproxy_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_heightmapsurfacedataproxy_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_heightmapsurfacedataproxy_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_heightmapsurfacedataproxy_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_heightmapsurfacedataproxy_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_heightmapsurfacedataproxy_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_heightmapsurfacedataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_heightmapsurfacedataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_heightmapsurfacedataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_heightmapsurfacedataproxy_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_heightmapsurfacedataproxy_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_heightmapsurfacedataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_heightmapsurfacedataproxy_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_heightmapsurfacedataproxy_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_heightmapsurfacedataproxy_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_heightmapsurfacedataproxy_event(void* self, void* event) {
    return QHeightMapSurfaceDataProxy_Event((QHeightMapSurfaceDataProxy*)self, (QEvent*)event);
}

bool q_heightmapsurfacedataproxy_super_event(void* self, void* event) {
    return QHeightMapSurfaceDataProxy_SuperEvent((QHeightMapSurfaceDataProxy*)self, (QEvent*)event);
}

void q_heightmapsurfacedataproxy_on_event(void* self, bool (*callback)(void*, void*)) {
    QHeightMapSurfaceDataProxy_OnEvent((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

bool q_heightmapsurfacedataproxy_event_filter(void* self, void* watched, void* event) {
    return QHeightMapSurfaceDataProxy_EventFilter((QHeightMapSurfaceDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

bool q_heightmapsurfacedataproxy_super_event_filter(void* self, void* watched, void* event) {
    return QHeightMapSurfaceDataProxy_SuperEventFilter((QHeightMapSurfaceDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

void q_heightmapsurfacedataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QHeightMapSurfaceDataProxy_OnEventFilter((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_timer_event(void* self, void* event) {
    QHeightMapSurfaceDataProxy_TimerEvent((QHeightMapSurfaceDataProxy*)self, (QTimerEvent*)event);
}

void q_heightmapsurfacedataproxy_super_timer_event(void* self, void* event) {
    QHeightMapSurfaceDataProxy_SuperTimerEvent((QHeightMapSurfaceDataProxy*)self, (QTimerEvent*)event);
}

void q_heightmapsurfacedataproxy_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QHeightMapSurfaceDataProxy_OnTimerEvent((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_child_event(void* self, void* event) {
    QHeightMapSurfaceDataProxy_ChildEvent((QHeightMapSurfaceDataProxy*)self, (QChildEvent*)event);
}

void q_heightmapsurfacedataproxy_super_child_event(void* self, void* event) {
    QHeightMapSurfaceDataProxy_SuperChildEvent((QHeightMapSurfaceDataProxy*)self, (QChildEvent*)event);
}

void q_heightmapsurfacedataproxy_on_child_event(void* self, void (*callback)(void*, void*)) {
    QHeightMapSurfaceDataProxy_OnChildEvent((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_custom_event(void* self, void* event) {
    QHeightMapSurfaceDataProxy_CustomEvent((QHeightMapSurfaceDataProxy*)self, (QEvent*)event);
}

void q_heightmapsurfacedataproxy_super_custom_event(void* self, void* event) {
    QHeightMapSurfaceDataProxy_SuperCustomEvent((QHeightMapSurfaceDataProxy*)self, (QEvent*)event);
}

void q_heightmapsurfacedataproxy_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QHeightMapSurfaceDataProxy_OnCustomEvent((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_connect_notify(void* self, const void* signal) {
    QHeightMapSurfaceDataProxy_ConnectNotify((QHeightMapSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_heightmapsurfacedataproxy_super_connect_notify(void* self, const void* signal) {
    QHeightMapSurfaceDataProxy_SuperConnectNotify((QHeightMapSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_heightmapsurfacedataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QHeightMapSurfaceDataProxy_OnConnectNotify((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_disconnect_notify(void* self, const void* signal) {
    QHeightMapSurfaceDataProxy_DisconnectNotify((QHeightMapSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_heightmapsurfacedataproxy_super_disconnect_notify(void* self, const void* signal) {
    QHeightMapSurfaceDataProxy_SuperDisconnectNotify((QHeightMapSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_heightmapsurfacedataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QHeightMapSurfaceDataProxy_OnDisconnectNotify((QHeightMapSurfaceDataProxy*)self, (intptr_t)callback);
}

QObject* q_heightmapsurfacedataproxy_sender(const void* self) {
    return QHeightMapSurfaceDataProxy_Sender((QHeightMapSurfaceDataProxy*)self);
}

int32_t q_heightmapsurfacedataproxy_sender_signal_index(const void* self) {
    return QHeightMapSurfaceDataProxy_SenderSignalIndex((QHeightMapSurfaceDataProxy*)self);
}

int32_t q_heightmapsurfacedataproxy_receivers(const void* self, const char* signal) {
    return QHeightMapSurfaceDataProxy_Receivers((QHeightMapSurfaceDataProxy*)self, signal);
}

bool q_heightmapsurfacedataproxy_is_signal_connected(const void* self, const void* signal) {
    return QHeightMapSurfaceDataProxy_IsSignalConnected((QHeightMapSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_heightmapsurfacedataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_heightmapsurfacedataproxy_delete(void* self) {
    QHeightMapSurfaceDataProxy_Delete((QHeightMapSurfaceDataProxy*)(self));
}
