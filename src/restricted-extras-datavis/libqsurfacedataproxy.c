#include "libqabstractdataproxy.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "libqsurface3dseries.hpp"
#include "libqsurfacedataitem.hpp"
#include "libqsurfacedataproxy.hpp"
#include "libqsurfacedataproxy.h"

QSurfaceDataProxy* q_surfacedataproxy_new() {
    return QSurfaceDataProxy_New();
}

QSurfaceDataProxy* q_surfacedataproxy_new2(void* parent) {
    return QSurfaceDataProxy_New2((QObject*)parent);
}

const QMetaObject* q_surfacedataproxy_meta_object(const void* self) {
    return QSurfaceDataProxy_MetaObject((QSurfaceDataProxy*)self);
}

void q_surfacedataproxy_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QSurfaceDataProxy_OnMetaObject((QSurfaceDataProxy*)self, (intptr_t)callback);
}

const QMetaObject* q_surfacedataproxy_super_meta_object(const void* self) {
    return QSurfaceDataProxy_SuperMetaObject((QSurfaceDataProxy*)self);
}

void* q_surfacedataproxy_metacast(void* self, const char* param1) {
    return QSurfaceDataProxy_Metacast((QSurfaceDataProxy*)self, param1);
}

void q_surfacedataproxy_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSurfaceDataProxy_OnMetacast((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void* q_surfacedataproxy_super_metacast(void* self, const char* param1) {
    return QSurfaceDataProxy_SuperMetacast((QSurfaceDataProxy*)self, param1);
}

int32_t q_surfacedataproxy_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSurfaceDataProxy_Metacall((QSurfaceDataProxy*)self, param1, param2, param3);
}

void q_surfacedataproxy_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSurfaceDataProxy_OnMetacall((QSurfaceDataProxy*)self, (intptr_t)callback);
}

int32_t q_surfacedataproxy_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSurfaceDataProxy_SuperMetacall((QSurfaceDataProxy*)self, param1, param2, param3);
}

const char* q_surfacedataproxy_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSurface3DSeries* q_surfacedataproxy_series(const void* self) {
    return QSurfaceDataProxy_Series((QSurfaceDataProxy*)self);
}

int32_t q_surfacedataproxy_row_count(const void* self) {
    return QSurfaceDataProxy_RowCount((QSurfaceDataProxy*)self);
}

int32_t q_surfacedataproxy_column_count(const void* self) {
    return QSurfaceDataProxy_ColumnCount((QSurfaceDataProxy*)self);
}

libqt_list /* of libqt_list of QSurfaceDataItem* */ q_surfacedataproxy_array(const void* self) {
    return QSurfaceDataProxy_Array((QSurfaceDataProxy*)self);
}

const QSurfaceDataItem* q_surfacedataproxy_item_at(const void* self, int rowIndex, int columnIndex) {
    return QSurfaceDataProxy_ItemAt((QSurfaceDataProxy*)self, rowIndex, columnIndex);
}

const QSurfaceDataItem* q_surfacedataproxy_item_at2(const void* self, const void* position) {
    return QSurfaceDataProxy_ItemAt2((QSurfaceDataProxy*)self, (QPoint*)position);
}

void q_surfacedataproxy_reset_array(void* self, libqt_list /* of QSurfaceDataItem* */ newArray) {
    QSurfaceDataProxy_ResetArray((QSurfaceDataProxy*)self, newArray);
}

void q_surfacedataproxy_set_row(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ row) {
    QSurfaceDataProxy_SetRow((QSurfaceDataProxy*)self, rowIndex, row);
}

void q_surfacedataproxy_set_rows(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ rows) {
    QSurfaceDataProxy_SetRows((QSurfaceDataProxy*)self, rowIndex, rows);
}

void q_surfacedataproxy_set_item(void* self, int rowIndex, int columnIndex, const void* item) {
    QSurfaceDataProxy_SetItem((QSurfaceDataProxy*)self, rowIndex, columnIndex, (QSurfaceDataItem*)item);
}

void q_surfacedataproxy_set_item2(void* self, const void* position, const void* item) {
    QSurfaceDataProxy_SetItem2((QSurfaceDataProxy*)self, (QPoint*)position, (QSurfaceDataItem*)item);
}

int32_t q_surfacedataproxy_add_row(void* self, libqt_list /* of QSurfaceDataItem* */ row) {
    return QSurfaceDataProxy_AddRow((QSurfaceDataProxy*)self, row);
}

int32_t q_surfacedataproxy_add_rows(void* self, libqt_list /* of QSurfaceDataItem* */ rows) {
    return QSurfaceDataProxy_AddRows((QSurfaceDataProxy*)self, rows);
}

void q_surfacedataproxy_insert_row(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ row) {
    QSurfaceDataProxy_InsertRow((QSurfaceDataProxy*)self, rowIndex, row);
}

void q_surfacedataproxy_insert_rows(void* self, int rowIndex, libqt_list /* of QSurfaceDataItem* */ rows) {
    QSurfaceDataProxy_InsertRows((QSurfaceDataProxy*)self, rowIndex, rows);
}

void q_surfacedataproxy_remove_rows(void* self, int rowIndex, int removeCount) {
    QSurfaceDataProxy_RemoveRows((QSurfaceDataProxy*)self, rowIndex, removeCount);
}

void q_surfacedataproxy_array_reset(void* self) {
    QSurfaceDataProxy_ArrayReset((QSurfaceDataProxy*)self);
}

void q_surfacedataproxy_on_array_reset(void* self, void (*callback)(void*)) {
    QSurfaceDataProxy_Connect_ArrayReset((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_rows_added(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsAdded((QSurfaceDataProxy*)self, startIndex, count);
}

void q_surfacedataproxy_on_rows_added(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsAdded((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_rows_changed(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsChanged((QSurfaceDataProxy*)self, startIndex, count);
}

void q_surfacedataproxy_on_rows_changed(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_rows_removed(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsRemoved((QSurfaceDataProxy*)self, startIndex, count);
}

void q_surfacedataproxy_on_rows_removed(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsRemoved((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_rows_inserted(void* self, int startIndex, int count) {
    QSurfaceDataProxy_RowsInserted((QSurfaceDataProxy*)self, startIndex, count);
}

void q_surfacedataproxy_on_rows_inserted(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_RowsInserted((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_item_changed(void* self, int rowIndex, int columnIndex) {
    QSurfaceDataProxy_ItemChanged((QSurfaceDataProxy*)self, rowIndex, columnIndex);
}

void q_surfacedataproxy_on_item_changed(void* self, void (*callback)(void*, int, int)) {
    QSurfaceDataProxy_Connect_ItemChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_row_count_changed(void* self, int count) {
    QSurfaceDataProxy_RowCountChanged((QSurfaceDataProxy*)self, count);
}

void q_surfacedataproxy_on_row_count_changed(void* self, void (*callback)(void*, int)) {
    QSurfaceDataProxy_Connect_RowCountChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_column_count_changed(void* self, int count) {
    QSurfaceDataProxy_ColumnCountChanged((QSurfaceDataProxy*)self, count);
}

void q_surfacedataproxy_on_column_count_changed(void* self, void (*callback)(void*, int)) {
    QSurfaceDataProxy_Connect_ColumnCountChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_series_changed(void* self, void* series) {
    QSurfaceDataProxy_SeriesChanged((QSurfaceDataProxy*)self, (QSurface3DSeries*)series);
}

void q_surfacedataproxy_on_series_changed(void* self, void (*callback)(void*, void*)) {
    QSurfaceDataProxy_Connect_SeriesChanged((QSurfaceDataProxy*)self, (intptr_t)callback);
}

const char* q_surfacedataproxy_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_surfacedataproxy_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_surfacedataproxy_type(const void* self) {
    return QAbstractDataProxy_Type((QAbstractDataProxy*)self);
}

const char* q_surfacedataproxy_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_surfacedataproxy_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_surfacedataproxy_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_surfacedataproxy_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_surfacedataproxy_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_surfacedataproxy_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_surfacedataproxy_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_surfacedataproxy_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_surfacedataproxy_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_surfacedataproxy_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_surfacedataproxy_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_surfacedataproxy_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_surfacedataproxy_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_surfacedataproxy_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_surfacedataproxy_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_surfacedataproxy_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_surfacedataproxy_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_surfacedataproxy_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_surfacedataproxy_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_surfacedataproxy_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_surfacedataproxy_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_surfacedataproxy_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_surfacedataproxy_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_surfacedataproxy_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_surfacedataproxy_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_surfacedataproxy_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_surfacedataproxy_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_surfacedataproxy_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_surfacedataproxy_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_surfacedataproxy_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_surfacedataproxy_dynamic_property_names\n");
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

QBindingStorage* q_surfacedataproxy_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_surfacedataproxy_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_surfacedataproxy_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_surfacedataproxy_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_surfacedataproxy_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_surfacedataproxy_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_surfacedataproxy_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_surfacedataproxy_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_surfacedataproxy_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_surfacedataproxy_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_surfacedataproxy_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_surfacedataproxy_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_surfacedataproxy_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_surfacedataproxy_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_surfacedataproxy_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_surfacedataproxy_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_surfacedataproxy_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_surfacedataproxy_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_surfacedataproxy_event(void* self, void* event) {
    return QSurfaceDataProxy_Event((QSurfaceDataProxy*)self, (QEvent*)event);
}

bool q_surfacedataproxy_super_event(void* self, void* event) {
    return QSurfaceDataProxy_SuperEvent((QSurfaceDataProxy*)self, (QEvent*)event);
}

void q_surfacedataproxy_on_event(void* self, bool (*callback)(void*, void*)) {
    QSurfaceDataProxy_OnEvent((QSurfaceDataProxy*)self, (intptr_t)callback);
}

bool q_surfacedataproxy_event_filter(void* self, void* watched, void* event) {
    return QSurfaceDataProxy_EventFilter((QSurfaceDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

bool q_surfacedataproxy_super_event_filter(void* self, void* watched, void* event) {
    return QSurfaceDataProxy_SuperEventFilter((QSurfaceDataProxy*)self, (QObject*)watched, (QEvent*)event);
}

void q_surfacedataproxy_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSurfaceDataProxy_OnEventFilter((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_timer_event(void* self, void* event) {
    QSurfaceDataProxy_TimerEvent((QSurfaceDataProxy*)self, (QTimerEvent*)event);
}

void q_surfacedataproxy_super_timer_event(void* self, void* event) {
    QSurfaceDataProxy_SuperTimerEvent((QSurfaceDataProxy*)self, (QTimerEvent*)event);
}

void q_surfacedataproxy_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSurfaceDataProxy_OnTimerEvent((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_child_event(void* self, void* event) {
    QSurfaceDataProxy_ChildEvent((QSurfaceDataProxy*)self, (QChildEvent*)event);
}

void q_surfacedataproxy_super_child_event(void* self, void* event) {
    QSurfaceDataProxy_SuperChildEvent((QSurfaceDataProxy*)self, (QChildEvent*)event);
}

void q_surfacedataproxy_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSurfaceDataProxy_OnChildEvent((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_custom_event(void* self, void* event) {
    QSurfaceDataProxy_CustomEvent((QSurfaceDataProxy*)self, (QEvent*)event);
}

void q_surfacedataproxy_super_custom_event(void* self, void* event) {
    QSurfaceDataProxy_SuperCustomEvent((QSurfaceDataProxy*)self, (QEvent*)event);
}

void q_surfacedataproxy_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSurfaceDataProxy_OnCustomEvent((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_connect_notify(void* self, const void* signal) {
    QSurfaceDataProxy_ConnectNotify((QSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_surfacedataproxy_super_connect_notify(void* self, const void* signal) {
    QSurfaceDataProxy_SuperConnectNotify((QSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_surfacedataproxy_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QSurfaceDataProxy_OnConnectNotify((QSurfaceDataProxy*)self, (intptr_t)callback);
}

void q_surfacedataproxy_disconnect_notify(void* self, const void* signal) {
    QSurfaceDataProxy_DisconnectNotify((QSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_surfacedataproxy_super_disconnect_notify(void* self, const void* signal) {
    QSurfaceDataProxy_SuperDisconnectNotify((QSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_surfacedataproxy_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QSurfaceDataProxy_OnDisconnectNotify((QSurfaceDataProxy*)self, (intptr_t)callback);
}

QObject* q_surfacedataproxy_sender(const void* self) {
    return QSurfaceDataProxy_Sender((QSurfaceDataProxy*)self);
}

int32_t q_surfacedataproxy_sender_signal_index(const void* self) {
    return QSurfaceDataProxy_SenderSignalIndex((QSurfaceDataProxy*)self);
}

int32_t q_surfacedataproxy_receivers(const void* self, const char* signal) {
    return QSurfaceDataProxy_Receivers((QSurfaceDataProxy*)self, signal);
}

bool q_surfacedataproxy_is_signal_connected(const void* self, const void* signal) {
    return QSurfaceDataProxy_IsSignalConnected((QSurfaceDataProxy*)self, (QMetaMethod*)signal);
}

void q_surfacedataproxy_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_surfacedataproxy_delete(void* self) {
    QSurfaceDataProxy_Delete((QSurfaceDataProxy*)(self));
}
