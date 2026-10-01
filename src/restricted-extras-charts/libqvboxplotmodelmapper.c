#include "../libqabstractitemmodel.hpp"
#include "libqboxplotmodelmapper.hpp"
#include "libqboxplotseries.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqvboxplotmodelmapper.hpp"
#include "libqvboxplotmodelmapper.h"

QVBoxPlotModelMapper* q_vboxplotmodelmapper_new() {
    return QVBoxPlotModelMapper_New();
}

QVBoxPlotModelMapper* q_vboxplotmodelmapper_new2(void* parent) {
    return QVBoxPlotModelMapper_New2((QObject*)parent);
}

const QMetaObject* q_vboxplotmodelmapper_meta_object(const void* self) {
    return QVBoxPlotModelMapper_MetaObject((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QVBoxPlotModelMapper_OnMetaObject((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

const QMetaObject* q_vboxplotmodelmapper_super_meta_object(const void* self) {
    return QVBoxPlotModelMapper_SuperMetaObject((QVBoxPlotModelMapper*)self);
}

void* q_vboxplotmodelmapper_metacast(void* self, const char* param1) {
    return QVBoxPlotModelMapper_Metacast((QVBoxPlotModelMapper*)self, param1);
}

void q_vboxplotmodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QVBoxPlotModelMapper_OnMetacast((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

void* q_vboxplotmodelmapper_super_metacast(void* self, const char* param1) {
    return QVBoxPlotModelMapper_SuperMetacast((QVBoxPlotModelMapper*)self, param1);
}

int32_t q_vboxplotmodelmapper_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVBoxPlotModelMapper_Metacall((QVBoxPlotModelMapper*)self, param1, param2, param3);
}

void q_vboxplotmodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVBoxPlotModelMapper_OnMetacall((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

int32_t q_vboxplotmodelmapper_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVBoxPlotModelMapper_SuperMetacall((QVBoxPlotModelMapper*)self, param1, param2, param3);
}

const char* q_vboxplotmodelmapper_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_vboxplotmodelmapper_model(const void* self) {
    return QVBoxPlotModelMapper_Model((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_model(void* self, void* model) {
    QVBoxPlotModelMapper_SetModel((QVBoxPlotModelMapper*)self, (QAbstractItemModel*)model);
}

QBoxPlotSeries* q_vboxplotmodelmapper_series(const void* self) {
    return QVBoxPlotModelMapper_Series((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_series(void* self, void* series) {
    QVBoxPlotModelMapper_SetSeries((QVBoxPlotModelMapper*)self, (QBoxPlotSeries*)series);
}

int32_t q_vboxplotmodelmapper_first_box_set_column(const void* self) {
    return QVBoxPlotModelMapper_FirstBoxSetColumn((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_first_box_set_column(void* self, int firstBoxSetColumn) {
    QVBoxPlotModelMapper_SetFirstBoxSetColumn((QVBoxPlotModelMapper*)self, firstBoxSetColumn);
}

int32_t q_vboxplotmodelmapper_last_box_set_column(const void* self) {
    return QVBoxPlotModelMapper_LastBoxSetColumn((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_last_box_set_column(void* self, int lastBoxSetColumn) {
    QVBoxPlotModelMapper_SetLastBoxSetColumn((QVBoxPlotModelMapper*)self, lastBoxSetColumn);
}

int32_t q_vboxplotmodelmapper_first_row(const void* self) {
    return QVBoxPlotModelMapper_FirstRow((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_first_row(void* self, int firstRow) {
    QVBoxPlotModelMapper_SetFirstRow((QVBoxPlotModelMapper*)self, firstRow);
}

int32_t q_vboxplotmodelmapper_row_count(const void* self) {
    return QVBoxPlotModelMapper_RowCount((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_row_count(void* self, int rowCount) {
    QVBoxPlotModelMapper_SetRowCount((QVBoxPlotModelMapper*)self, rowCount);
}

void q_vboxplotmodelmapper_series_replaced(void* self) {
    QVBoxPlotModelMapper_SeriesReplaced((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_series_replaced(void* self, void (*callback)(void*)) {
    QVBoxPlotModelMapper_Connect_SeriesReplaced((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_vboxplotmodelmapper_model_replaced(void* self) {
    QVBoxPlotModelMapper_ModelReplaced((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_model_replaced(void* self, void (*callback)(void*)) {
    QVBoxPlotModelMapper_Connect_ModelReplaced((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_vboxplotmodelmapper_first_box_set_column_changed(void* self) {
    QVBoxPlotModelMapper_FirstBoxSetColumnChanged((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_first_box_set_column_changed(void* self, void (*callback)(void*)) {
    QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_vboxplotmodelmapper_last_box_set_column_changed(void* self) {
    QVBoxPlotModelMapper_LastBoxSetColumnChanged((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_last_box_set_column_changed(void* self, void (*callback)(void*)) {
    QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_vboxplotmodelmapper_first_row_changed(void* self) {
    QVBoxPlotModelMapper_FirstRowChanged((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_first_row_changed(void* self, void (*callback)(void*)) {
    QVBoxPlotModelMapper_Connect_FirstRowChanged((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_vboxplotmodelmapper_row_count_changed(void* self) {
    QVBoxPlotModelMapper_RowCountChanged((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_row_count_changed(void* self, void (*callback)(void*)) {
    QVBoxPlotModelMapper_Connect_RowCountChanged((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

const char* q_vboxplotmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vboxplotmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vboxplotmodelmapper_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_vboxplotmodelmapper_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_vboxplotmodelmapper_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_vboxplotmodelmapper_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_vboxplotmodelmapper_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_vboxplotmodelmapper_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_vboxplotmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_vboxplotmodelmapper_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_vboxplotmodelmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_vboxplotmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_vboxplotmodelmapper_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_vboxplotmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_vboxplotmodelmapper_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_vboxplotmodelmapper_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_vboxplotmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_vboxplotmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_vboxplotmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_vboxplotmodelmapper_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_vboxplotmodelmapper_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_vboxplotmodelmapper_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_vboxplotmodelmapper_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_vboxplotmodelmapper_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_vboxplotmodelmapper_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_vboxplotmodelmapper_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_vboxplotmodelmapper_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_vboxplotmodelmapper_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_vboxplotmodelmapper_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_vboxplotmodelmapper_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_vboxplotmodelmapper_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_vboxplotmodelmapper_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_vboxplotmodelmapper_dynamic_property_names\n");
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

QBindingStorage* q_vboxplotmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_vboxplotmodelmapper_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_vboxplotmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_vboxplotmodelmapper_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_vboxplotmodelmapper_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_vboxplotmodelmapper_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_vboxplotmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_vboxplotmodelmapper_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_vboxplotmodelmapper_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_vboxplotmodelmapper_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_vboxplotmodelmapper_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_vboxplotmodelmapper_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_vboxplotmodelmapper_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_vboxplotmodelmapper_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_vboxplotmodelmapper_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_vboxplotmodelmapper_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_vboxplotmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_vboxplotmodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_vboxplotmodelmapper_event(void* self, void* event) {
    return QVBoxPlotModelMapper_Event((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

bool q_vboxplotmodelmapper_super_event(void* self, void* event) {
    return QVBoxPlotModelMapper_SuperEvent((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

void q_vboxplotmodelmapper_on_event(void* self, bool (*callback)(void*, void*)) {
    QVBoxPlotModelMapper_OnEvent((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

bool q_vboxplotmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QVBoxPlotModelMapper_EventFilter((QVBoxPlotModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_vboxplotmodelmapper_super_event_filter(void* self, void* watched, void* event) {
    return QVBoxPlotModelMapper_SuperEventFilter((QVBoxPlotModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_vboxplotmodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVBoxPlotModelMapper_OnEventFilter((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_vboxplotmodelmapper_timer_event(void* self, void* event) {
    QVBoxPlotModelMapper_TimerEvent((QVBoxPlotModelMapper*)self, (QTimerEvent*)event);
}

void q_vboxplotmodelmapper_super_timer_event(void* self, void* event) {
    QVBoxPlotModelMapper_SuperTimerEvent((QVBoxPlotModelMapper*)self, (QTimerEvent*)event);
}

void q_vboxplotmodelmapper_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVBoxPlotModelMapper_OnTimerEvent((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_vboxplotmodelmapper_child_event(void* self, void* event) {
    QVBoxPlotModelMapper_ChildEvent((QVBoxPlotModelMapper*)self, (QChildEvent*)event);
}

void q_vboxplotmodelmapper_super_child_event(void* self, void* event) {
    QVBoxPlotModelMapper_SuperChildEvent((QVBoxPlotModelMapper*)self, (QChildEvent*)event);
}

void q_vboxplotmodelmapper_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVBoxPlotModelMapper_OnChildEvent((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_vboxplotmodelmapper_custom_event(void* self, void* event) {
    QVBoxPlotModelMapper_CustomEvent((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

void q_vboxplotmodelmapper_super_custom_event(void* self, void* event) {
    QVBoxPlotModelMapper_SuperCustomEvent((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

void q_vboxplotmodelmapper_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVBoxPlotModelMapper_OnCustomEvent((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_vboxplotmodelmapper_connect_notify(void* self, const void* signal) {
    QVBoxPlotModelMapper_ConnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_vboxplotmodelmapper_super_connect_notify(void* self, const void* signal) {
    QVBoxPlotModelMapper_SuperConnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_vboxplotmodelmapper_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QVBoxPlotModelMapper_OnConnectNotify((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_vboxplotmodelmapper_disconnect_notify(void* self, const void* signal) {
    QVBoxPlotModelMapper_DisconnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_vboxplotmodelmapper_super_disconnect_notify(void* self, const void* signal) {
    QVBoxPlotModelMapper_SuperDisconnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_vboxplotmodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QVBoxPlotModelMapper_OnDisconnectNotify((QVBoxPlotModelMapper*)self, (intptr_t)callback);
}

int32_t q_vboxplotmodelmapper_first(const void* self) {
    return QVBoxPlotModelMapper_First((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_first(void* self, int first) {
    QVBoxPlotModelMapper_SetFirst((QVBoxPlotModelMapper*)self, first);
}

int32_t q_vboxplotmodelmapper_count(const void* self) {
    return QVBoxPlotModelMapper_Count((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_count(void* self, int count) {
    QVBoxPlotModelMapper_SetCount((QVBoxPlotModelMapper*)self, count);
}

int32_t q_vboxplotmodelmapper_first_box_set_section(const void* self) {
    return QVBoxPlotModelMapper_FirstBoxSetSection((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_first_box_set_section(void* self, int firstBoxSetSection) {
    QVBoxPlotModelMapper_SetFirstBoxSetSection((QVBoxPlotModelMapper*)self, firstBoxSetSection);
}

int32_t q_vboxplotmodelmapper_last_box_set_section(const void* self) {
    return QVBoxPlotModelMapper_LastBoxSetSection((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_last_box_set_section(void* self, int lastBoxSetSection) {
    QVBoxPlotModelMapper_SetLastBoxSetSection((QVBoxPlotModelMapper*)self, lastBoxSetSection);
}

int32_t q_vboxplotmodelmapper_orientation(const void* self) {
    return QVBoxPlotModelMapper_Orientation((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_orientation(void* self, int32_t orientation) {
    QVBoxPlotModelMapper_SetOrientation((QVBoxPlotModelMapper*)self, orientation);
}

QObject* q_vboxplotmodelmapper_sender(const void* self) {
    return QVBoxPlotModelMapper_Sender((QVBoxPlotModelMapper*)self);
}

int32_t q_vboxplotmodelmapper_sender_signal_index(const void* self) {
    return QVBoxPlotModelMapper_SenderSignalIndex((QVBoxPlotModelMapper*)self);
}

int32_t q_vboxplotmodelmapper_receivers(const void* self, const char* signal) {
    return QVBoxPlotModelMapper_Receivers((QVBoxPlotModelMapper*)self, signal);
}

bool q_vboxplotmodelmapper_is_signal_connected(const void* self, const void* signal) {
    return QVBoxPlotModelMapper_IsSignalConnected((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_vboxplotmodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_vboxplotmodelmapper_delete(void* self) {
    QVBoxPlotModelMapper_Delete((QVBoxPlotModelMapper*)(self));
}
