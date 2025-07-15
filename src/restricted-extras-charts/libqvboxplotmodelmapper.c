#include "../libqabstractitemmodel.hpp"
#include "libqboxplotmodelmapper.hpp"
#include "libqboxplotseries.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqvboxplotmodelmapper.hpp"
#include "libqvboxplotmodelmapper.h"

QVBoxPlotModelMapper* q_vboxplotmodelmapper_new() {
    return QVBoxPlotModelMapper_new();
}

QVBoxPlotModelMapper* q_vboxplotmodelmapper_new2(void* parent) {
    return QVBoxPlotModelMapper_new2((QObject*)parent);
}

const QMetaObject* q_vboxplotmodelmapper_meta_object(void* self) {
    return QVBoxPlotModelMapper_MetaObject((QVBoxPlotModelMapper*)self);
}

void* q_vboxplotmodelmapper_metacast(void* self, const char* param1) {
    return QVBoxPlotModelMapper_Metacast((QVBoxPlotModelMapper*)self, param1);
}

int32_t q_vboxplotmodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVBoxPlotModelMapper_Metacall((QVBoxPlotModelMapper*)self, param1, param2, param3);
}

void q_vboxplotmodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVBoxPlotModelMapper_OnMetacall((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

int32_t q_vboxplotmodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVBoxPlotModelMapper_QBaseMetacall((QVBoxPlotModelMapper*)self, param1, param2, param3);
}

const char* q_vboxplotmodelmapper_tr(const char* s) {
    libqt_string _str = QVBoxPlotModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_vboxplotmodelmapper_model(void* self) {
    return QVBoxPlotModelMapper_Model((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_model(void* self, void* model) {
    QVBoxPlotModelMapper_SetModel((QVBoxPlotModelMapper*)self, (QAbstractItemModel*)model);
}

QBoxPlotSeries* q_vboxplotmodelmapper_series(void* self) {
    return QVBoxPlotModelMapper_Series((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_series(void* self, void* series) {
    QVBoxPlotModelMapper_SetSeries((QVBoxPlotModelMapper*)self, (QBoxPlotSeries*)series);
}

int32_t q_vboxplotmodelmapper_first_box_set_column(void* self) {
    return QVBoxPlotModelMapper_FirstBoxSetColumn((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_first_box_set_column(void* self, int firstBoxSetColumn) {
    QVBoxPlotModelMapper_SetFirstBoxSetColumn((QVBoxPlotModelMapper*)self, firstBoxSetColumn);
}

int32_t q_vboxplotmodelmapper_last_box_set_column(void* self) {
    return QVBoxPlotModelMapper_LastBoxSetColumn((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_last_box_set_column(void* self, int lastBoxSetColumn) {
    QVBoxPlotModelMapper_SetLastBoxSetColumn((QVBoxPlotModelMapper*)self, lastBoxSetColumn);
}

int32_t q_vboxplotmodelmapper_first_row(void* self) {
    return QVBoxPlotModelMapper_FirstRow((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_first_row(void* self, int firstRow) {
    QVBoxPlotModelMapper_SetFirstRow((QVBoxPlotModelMapper*)self, firstRow);
}

int32_t q_vboxplotmodelmapper_row_count(void* self) {
    return QVBoxPlotModelMapper_RowCount((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_set_row_count(void* self, int rowCount) {
    QVBoxPlotModelMapper_SetRowCount((QVBoxPlotModelMapper*)self, rowCount);
}

void q_vboxplotmodelmapper_series_replaced(void* self) {
    QVBoxPlotModelMapper_SeriesReplaced((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_SeriesReplaced((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_model_replaced(void* self) {
    QVBoxPlotModelMapper_ModelReplaced((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_ModelReplaced((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_first_box_set_column_changed(void* self) {
    QVBoxPlotModelMapper_FirstBoxSetColumnChanged((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_first_box_set_column_changed(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_FirstBoxSetColumnChanged((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_last_box_set_column_changed(void* self) {
    QVBoxPlotModelMapper_LastBoxSetColumnChanged((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_last_box_set_column_changed(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_LastBoxSetColumnChanged((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_first_row_changed(void* self) {
    QVBoxPlotModelMapper_FirstRowChanged((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_first_row_changed(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_FirstRowChanged((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_row_count_changed(void* self) {
    QVBoxPlotModelMapper_RowCountChanged((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_row_count_changed(void* self, void (*slot)(void*)) {
    QVBoxPlotModelMapper_Connect_RowCountChanged((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

const char* q_vboxplotmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QVBoxPlotModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vboxplotmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVBoxPlotModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vboxplotmodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_vboxplotmodelmapper_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_vboxplotmodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_vboxplotmodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_vboxplotmodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_vboxplotmodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_vboxplotmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_vboxplotmodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_vboxplotmodelmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_vboxplotmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_vboxplotmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_vboxplotmodelmapper_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_vboxplotmodelmapper_children(void* self) {
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

QMetaObject__Connection* q_vboxplotmodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_vboxplotmodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_vboxplotmodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_vboxplotmodelmapper_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_vboxplotmodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_vboxplotmodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_vboxplotmodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_vboxplotmodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_vboxplotmodelmapper_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_vboxplotmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_vboxplotmodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_vboxplotmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_vboxplotmodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_vboxplotmodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_vboxplotmodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_vboxplotmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_vboxplotmodelmapper_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_vboxplotmodelmapper_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_vboxplotmodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_vboxplotmodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_vboxplotmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_vboxplotmodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_vboxplotmodelmapper_event(void* self, void* event) {
    return QVBoxPlotModelMapper_Event((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

bool q_vboxplotmodelmapper_qbase_event(void* self, void* event) {
    return QVBoxPlotModelMapper_QBaseEvent((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

void q_vboxplotmodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnEvent((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

bool q_vboxplotmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QVBoxPlotModelMapper_EventFilter((QVBoxPlotModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_vboxplotmodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QVBoxPlotModelMapper_QBaseEventFilter((QVBoxPlotModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_vboxplotmodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVBoxPlotModelMapper_OnEventFilter((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_timer_event(void* self, void* event) {
    QVBoxPlotModelMapper_TimerEvent((QVBoxPlotModelMapper*)self, (QTimerEvent*)event);
}

void q_vboxplotmodelmapper_qbase_timer_event(void* self, void* event) {
    QVBoxPlotModelMapper_QBaseTimerEvent((QVBoxPlotModelMapper*)self, (QTimerEvent*)event);
}

void q_vboxplotmodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnTimerEvent((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_child_event(void* self, void* event) {
    QVBoxPlotModelMapper_ChildEvent((QVBoxPlotModelMapper*)self, (QChildEvent*)event);
}

void q_vboxplotmodelmapper_qbase_child_event(void* self, void* event) {
    QVBoxPlotModelMapper_QBaseChildEvent((QVBoxPlotModelMapper*)self, (QChildEvent*)event);
}

void q_vboxplotmodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnChildEvent((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_custom_event(void* self, void* event) {
    QVBoxPlotModelMapper_CustomEvent((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

void q_vboxplotmodelmapper_qbase_custom_event(void* self, void* event) {
    QVBoxPlotModelMapper_QBaseCustomEvent((QVBoxPlotModelMapper*)self, (QEvent*)event);
}

void q_vboxplotmodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnCustomEvent((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_connect_notify(void* self, void* signal) {
    QVBoxPlotModelMapper_ConnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_vboxplotmodelmapper_qbase_connect_notify(void* self, void* signal) {
    QVBoxPlotModelMapper_QBaseConnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_vboxplotmodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnConnectNotify((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_disconnect_notify(void* self, void* signal) {
    QVBoxPlotModelMapper_DisconnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_vboxplotmodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QVBoxPlotModelMapper_QBaseDisconnectNotify((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_vboxplotmodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnDisconnectNotify((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

int32_t q_vboxplotmodelmapper_first(void* self) {
    return QVBoxPlotModelMapper_First((QVBoxPlotModelMapper*)self);
}

int32_t q_vboxplotmodelmapper_qbase_first(void* self) {
    return QVBoxPlotModelMapper_QBaseFirst((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_first(void* self, int32_t (*slot)()) {
    QVBoxPlotModelMapper_OnFirst((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_set_first(void* self, int first) {
    QVBoxPlotModelMapper_SetFirst((QVBoxPlotModelMapper*)self, first);
}

void q_vboxplotmodelmapper_qbase_set_first(void* self, int first) {
    QVBoxPlotModelMapper_QBaseSetFirst((QVBoxPlotModelMapper*)self, first);
}

void q_vboxplotmodelmapper_on_set_first(void* self, void (*slot)(void*, int)) {
    QVBoxPlotModelMapper_OnSetFirst((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

int32_t q_vboxplotmodelmapper_count(void* self) {
    return QVBoxPlotModelMapper_Count((QVBoxPlotModelMapper*)self);
}

int32_t q_vboxplotmodelmapper_qbase_count(void* self) {
    return QVBoxPlotModelMapper_QBaseCount((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_count(void* self, int32_t (*slot)()) {
    QVBoxPlotModelMapper_OnCount((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_set_count(void* self, int count) {
    QVBoxPlotModelMapper_SetCount((QVBoxPlotModelMapper*)self, count);
}

void q_vboxplotmodelmapper_qbase_set_count(void* self, int count) {
    QVBoxPlotModelMapper_QBaseSetCount((QVBoxPlotModelMapper*)self, count);
}

void q_vboxplotmodelmapper_on_set_count(void* self, void (*slot)(void*, int)) {
    QVBoxPlotModelMapper_OnSetCount((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

int32_t q_vboxplotmodelmapper_first_box_set_section(void* self) {
    return QVBoxPlotModelMapper_FirstBoxSetSection((QVBoxPlotModelMapper*)self);
}

int32_t q_vboxplotmodelmapper_qbase_first_box_set_section(void* self) {
    return QVBoxPlotModelMapper_QBaseFirstBoxSetSection((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_first_box_set_section(void* self, int32_t (*slot)()) {
    QVBoxPlotModelMapper_OnFirstBoxSetSection((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_set_first_box_set_section(void* self, int firstBoxSetSection) {
    QVBoxPlotModelMapper_SetFirstBoxSetSection((QVBoxPlotModelMapper*)self, firstBoxSetSection);
}

void q_vboxplotmodelmapper_qbase_set_first_box_set_section(void* self, int firstBoxSetSection) {
    QVBoxPlotModelMapper_QBaseSetFirstBoxSetSection((QVBoxPlotModelMapper*)self, firstBoxSetSection);
}

void q_vboxplotmodelmapper_on_set_first_box_set_section(void* self, void (*slot)(void*, int)) {
    QVBoxPlotModelMapper_OnSetFirstBoxSetSection((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

int32_t q_vboxplotmodelmapper_last_box_set_section(void* self) {
    return QVBoxPlotModelMapper_LastBoxSetSection((QVBoxPlotModelMapper*)self);
}

int32_t q_vboxplotmodelmapper_qbase_last_box_set_section(void* self) {
    return QVBoxPlotModelMapper_QBaseLastBoxSetSection((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_last_box_set_section(void* self, int32_t (*slot)()) {
    QVBoxPlotModelMapper_OnLastBoxSetSection((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_set_last_box_set_section(void* self, int lastBoxSetSection) {
    QVBoxPlotModelMapper_SetLastBoxSetSection((QVBoxPlotModelMapper*)self, lastBoxSetSection);
}

void q_vboxplotmodelmapper_qbase_set_last_box_set_section(void* self, int lastBoxSetSection) {
    QVBoxPlotModelMapper_QBaseSetLastBoxSetSection((QVBoxPlotModelMapper*)self, lastBoxSetSection);
}

void q_vboxplotmodelmapper_on_set_last_box_set_section(void* self, void (*slot)(void*, int)) {
    QVBoxPlotModelMapper_OnSetLastBoxSetSection((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

int64_t q_vboxplotmodelmapper_orientation(void* self) {
    return QVBoxPlotModelMapper_Orientation((QVBoxPlotModelMapper*)self);
}

int64_t q_vboxplotmodelmapper_qbase_orientation(void* self) {
    return QVBoxPlotModelMapper_QBaseOrientation((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QVBoxPlotModelMapper_OnOrientation((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_set_orientation(void* self, int64_t orientation) {
    QVBoxPlotModelMapper_SetOrientation((QVBoxPlotModelMapper*)self, orientation);
}

void q_vboxplotmodelmapper_qbase_set_orientation(void* self, int64_t orientation) {
    QVBoxPlotModelMapper_QBaseSetOrientation((QVBoxPlotModelMapper*)self, orientation);
}

void q_vboxplotmodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t)) {
    QVBoxPlotModelMapper_OnSetOrientation((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

QObject* q_vboxplotmodelmapper_sender(void* self) {
    return QVBoxPlotModelMapper_Sender((QVBoxPlotModelMapper*)self);
}

QObject* q_vboxplotmodelmapper_qbase_sender(void* self) {
    return QVBoxPlotModelMapper_QBaseSender((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QVBoxPlotModelMapper_OnSender((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

int32_t q_vboxplotmodelmapper_sender_signal_index(void* self) {
    return QVBoxPlotModelMapper_SenderSignalIndex((QVBoxPlotModelMapper*)self);
}

int32_t q_vboxplotmodelmapper_qbase_sender_signal_index(void* self) {
    return QVBoxPlotModelMapper_QBaseSenderSignalIndex((QVBoxPlotModelMapper*)self);
}

void q_vboxplotmodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVBoxPlotModelMapper_OnSenderSignalIndex((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

int32_t q_vboxplotmodelmapper_receivers(void* self, const char* signal) {
    return QVBoxPlotModelMapper_Receivers((QVBoxPlotModelMapper*)self, signal);
}

int32_t q_vboxplotmodelmapper_qbase_receivers(void* self, const char* signal) {
    return QVBoxPlotModelMapper_QBaseReceivers((QVBoxPlotModelMapper*)self, signal);
}

void q_vboxplotmodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVBoxPlotModelMapper_OnReceivers((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

bool q_vboxplotmodelmapper_is_signal_connected(void* self, void* signal) {
    return QVBoxPlotModelMapper_IsSignalConnected((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

bool q_vboxplotmodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QVBoxPlotModelMapper_QBaseIsSignalConnected((QVBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_vboxplotmodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVBoxPlotModelMapper_OnIsSignalConnected((QVBoxPlotModelMapper*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_vboxplotmodelmapper_delete(void* self) {
    QVBoxPlotModelMapper_Delete((QVBoxPlotModelMapper*)(self));
}
