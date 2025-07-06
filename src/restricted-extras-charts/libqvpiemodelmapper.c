#include "../libqabstractitemmodel.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "libqpiemodelmapper.hpp"
#include "libqpieseries.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqvpiemodelmapper.hpp"
#include "libqvpiemodelmapper.h"

QVPieModelMapper* q_vpiemodelmapper_new() {
    return QVPieModelMapper_new();
}

QVPieModelMapper* q_vpiemodelmapper_new2(void* parent) {
    return QVPieModelMapper_new2((QObject*)parent);
}

const QMetaObject* q_vpiemodelmapper_meta_object(void* self) {
    return QVPieModelMapper_MetaObject((QVPieModelMapper*)self);
}

void* q_vpiemodelmapper_metacast(void* self, const char* param1) {
    return QVPieModelMapper_Metacast((QVPieModelMapper*)self, param1);
}

int32_t q_vpiemodelmapper_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVPieModelMapper_Metacall((QVPieModelMapper*)self, param1, param2, param3);
}

void q_vpiemodelmapper_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QVPieModelMapper_OnMetacall((QVPieModelMapper*)self, (intptr_t)slot);
}

int32_t q_vpiemodelmapper_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QVPieModelMapper_QBaseMetacall((QVPieModelMapper*)self, param1, param2, param3);
}

const char* q_vpiemodelmapper_tr(const char* s) {
    libqt_string _str = QVPieModelMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_vpiemodelmapper_model(void* self) {
    return QVPieModelMapper_Model((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_set_model(void* self, void* model) {
    QVPieModelMapper_SetModel((QVPieModelMapper*)self, (QAbstractItemModel*)model);
}

QPieSeries* q_vpiemodelmapper_series(void* self) {
    return QVPieModelMapper_Series((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_set_series(void* self, void* series) {
    QVPieModelMapper_SetSeries((QVPieModelMapper*)self, (QPieSeries*)series);
}

int32_t q_vpiemodelmapper_values_column(void* self) {
    return QVPieModelMapper_ValuesColumn((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_set_values_column(void* self, int valuesColumn) {
    QVPieModelMapper_SetValuesColumn((QVPieModelMapper*)self, valuesColumn);
}

int32_t q_vpiemodelmapper_labels_column(void* self) {
    return QVPieModelMapper_LabelsColumn((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_set_labels_column(void* self, int labelsColumn) {
    QVPieModelMapper_SetLabelsColumn((QVPieModelMapper*)self, labelsColumn);
}

int32_t q_vpiemodelmapper_first_row(void* self) {
    return QVPieModelMapper_FirstRow((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_set_first_row(void* self, int firstRow) {
    QVPieModelMapper_SetFirstRow((QVPieModelMapper*)self, firstRow);
}

int32_t q_vpiemodelmapper_row_count(void* self) {
    return QVPieModelMapper_RowCount((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_set_row_count(void* self, int rowCount) {
    QVPieModelMapper_SetRowCount((QVPieModelMapper*)self, rowCount);
}

void q_vpiemodelmapper_series_replaced(void* self) {
    QVPieModelMapper_SeriesReplaced((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_series_replaced(void* self, void (*slot)(void*)) {
    QVPieModelMapper_Connect_SeriesReplaced((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_model_replaced(void* self) {
    QVPieModelMapper_ModelReplaced((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_model_replaced(void* self, void (*slot)(void*)) {
    QVPieModelMapper_Connect_ModelReplaced((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_values_column_changed(void* self) {
    QVPieModelMapper_ValuesColumnChanged((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_values_column_changed(void* self, void (*slot)(void*)) {
    QVPieModelMapper_Connect_ValuesColumnChanged((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_labels_column_changed(void* self) {
    QVPieModelMapper_LabelsColumnChanged((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_labels_column_changed(void* self, void (*slot)(void*)) {
    QVPieModelMapper_Connect_LabelsColumnChanged((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_first_row_changed(void* self) {
    QVPieModelMapper_FirstRowChanged((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_first_row_changed(void* self, void (*slot)(void*)) {
    QVPieModelMapper_Connect_FirstRowChanged((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_row_count_changed(void* self) {
    QVPieModelMapper_RowCountChanged((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_row_count_changed(void* self, void (*slot)(void*)) {
    QVPieModelMapper_Connect_RowCountChanged((QVPieModelMapper*)self, (intptr_t)slot);
}

const char* q_vpiemodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QVPieModelMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vpiemodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QVPieModelMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vpiemodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_vpiemodelmapper_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_vpiemodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_vpiemodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_vpiemodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_vpiemodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_vpiemodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_vpiemodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_vpiemodelmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_vpiemodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_vpiemodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_vpiemodelmapper_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_vpiemodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_vpiemodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_vpiemodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_vpiemodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_vpiemodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_vpiemodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_vpiemodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_vpiemodelmapper_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_vpiemodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_vpiemodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_vpiemodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_vpiemodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_vpiemodelmapper_dynamic_property_names(void* self) {
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

QBindingStorage* q_vpiemodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_vpiemodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_vpiemodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_vpiemodelmapper_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_vpiemodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_vpiemodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_vpiemodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_vpiemodelmapper_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_vpiemodelmapper_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_vpiemodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_vpiemodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_vpiemodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_vpiemodelmapper_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_vpiemodelmapper_event(void* self, void* event) {
    return QVPieModelMapper_Event((QVPieModelMapper*)self, (QEvent*)event);
}

bool q_vpiemodelmapper_qbase_event(void* self, void* event) {
    return QVPieModelMapper_QBaseEvent((QVPieModelMapper*)self, (QEvent*)event);
}

void q_vpiemodelmapper_on_event(void* self, bool (*slot)(void*, void*)) {
    QVPieModelMapper_OnEvent((QVPieModelMapper*)self, (intptr_t)slot);
}

bool q_vpiemodelmapper_event_filter(void* self, void* watched, void* event) {
    return QVPieModelMapper_EventFilter((QVPieModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_vpiemodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QVPieModelMapper_QBaseEventFilter((QVPieModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_vpiemodelmapper_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QVPieModelMapper_OnEventFilter((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_timer_event(void* self, void* event) {
    QVPieModelMapper_TimerEvent((QVPieModelMapper*)self, (QTimerEvent*)event);
}

void q_vpiemodelmapper_qbase_timer_event(void* self, void* event) {
    QVPieModelMapper_QBaseTimerEvent((QVPieModelMapper*)self, (QTimerEvent*)event);
}

void q_vpiemodelmapper_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QVPieModelMapper_OnTimerEvent((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_child_event(void* self, void* event) {
    QVPieModelMapper_ChildEvent((QVPieModelMapper*)self, (QChildEvent*)event);
}

void q_vpiemodelmapper_qbase_child_event(void* self, void* event) {
    QVPieModelMapper_QBaseChildEvent((QVPieModelMapper*)self, (QChildEvent*)event);
}

void q_vpiemodelmapper_on_child_event(void* self, void (*slot)(void*, void*)) {
    QVPieModelMapper_OnChildEvent((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_custom_event(void* self, void* event) {
    QVPieModelMapper_CustomEvent((QVPieModelMapper*)self, (QEvent*)event);
}

void q_vpiemodelmapper_qbase_custom_event(void* self, void* event) {
    QVPieModelMapper_QBaseCustomEvent((QVPieModelMapper*)self, (QEvent*)event);
}

void q_vpiemodelmapper_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QVPieModelMapper_OnCustomEvent((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_connect_notify(void* self, void* signal) {
    QVPieModelMapper_ConnectNotify((QVPieModelMapper*)self, (QMetaMethod*)signal);
}

void q_vpiemodelmapper_qbase_connect_notify(void* self, void* signal) {
    QVPieModelMapper_QBaseConnectNotify((QVPieModelMapper*)self, (QMetaMethod*)signal);
}

void q_vpiemodelmapper_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QVPieModelMapper_OnConnectNotify((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_disconnect_notify(void* self, void* signal) {
    QVPieModelMapper_DisconnectNotify((QVPieModelMapper*)self, (QMetaMethod*)signal);
}

void q_vpiemodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QVPieModelMapper_QBaseDisconnectNotify((QVPieModelMapper*)self, (QMetaMethod*)signal);
}

void q_vpiemodelmapper_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QVPieModelMapper_OnDisconnectNotify((QVPieModelMapper*)self, (intptr_t)slot);
}

int32_t q_vpiemodelmapper_first(void* self) {
    return QVPieModelMapper_First((QVPieModelMapper*)self);
}

int32_t q_vpiemodelmapper_qbase_first(void* self) {
    return QVPieModelMapper_QBaseFirst((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_first(void* self, int32_t (*slot)()) {
    QVPieModelMapper_OnFirst((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_set_first(void* self, int first) {
    QVPieModelMapper_SetFirst((QVPieModelMapper*)self, first);
}

void q_vpiemodelmapper_qbase_set_first(void* self, int first) {
    QVPieModelMapper_QBaseSetFirst((QVPieModelMapper*)self, first);
}

void q_vpiemodelmapper_on_set_first(void* self, void (*slot)(void*, int)) {
    QVPieModelMapper_OnSetFirst((QVPieModelMapper*)self, (intptr_t)slot);
}

int32_t q_vpiemodelmapper_count(void* self) {
    return QVPieModelMapper_Count((QVPieModelMapper*)self);
}

int32_t q_vpiemodelmapper_qbase_count(void* self) {
    return QVPieModelMapper_QBaseCount((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_count(void* self, int32_t (*slot)()) {
    QVPieModelMapper_OnCount((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_set_count(void* self, int count) {
    QVPieModelMapper_SetCount((QVPieModelMapper*)self, count);
}

void q_vpiemodelmapper_qbase_set_count(void* self, int count) {
    QVPieModelMapper_QBaseSetCount((QVPieModelMapper*)self, count);
}

void q_vpiemodelmapper_on_set_count(void* self, void (*slot)(void*, int)) {
    QVPieModelMapper_OnSetCount((QVPieModelMapper*)self, (intptr_t)slot);
}

int32_t q_vpiemodelmapper_values_section(void* self) {
    return QVPieModelMapper_ValuesSection((QVPieModelMapper*)self);
}

int32_t q_vpiemodelmapper_qbase_values_section(void* self) {
    return QVPieModelMapper_QBaseValuesSection((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_values_section(void* self, int32_t (*slot)()) {
    QVPieModelMapper_OnValuesSection((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_set_values_section(void* self, int valuesSection) {
    QVPieModelMapper_SetValuesSection((QVPieModelMapper*)self, valuesSection);
}

void q_vpiemodelmapper_qbase_set_values_section(void* self, int valuesSection) {
    QVPieModelMapper_QBaseSetValuesSection((QVPieModelMapper*)self, valuesSection);
}

void q_vpiemodelmapper_on_set_values_section(void* self, void (*slot)(void*, int)) {
    QVPieModelMapper_OnSetValuesSection((QVPieModelMapper*)self, (intptr_t)slot);
}

int32_t q_vpiemodelmapper_labels_section(void* self) {
    return QVPieModelMapper_LabelsSection((QVPieModelMapper*)self);
}

int32_t q_vpiemodelmapper_qbase_labels_section(void* self) {
    return QVPieModelMapper_QBaseLabelsSection((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_labels_section(void* self, int32_t (*slot)()) {
    QVPieModelMapper_OnLabelsSection((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_set_labels_section(void* self, int labelsSection) {
    QVPieModelMapper_SetLabelsSection((QVPieModelMapper*)self, labelsSection);
}

void q_vpiemodelmapper_qbase_set_labels_section(void* self, int labelsSection) {
    QVPieModelMapper_QBaseSetLabelsSection((QVPieModelMapper*)self, labelsSection);
}

void q_vpiemodelmapper_on_set_labels_section(void* self, void (*slot)(void*, int)) {
    QVPieModelMapper_OnSetLabelsSection((QVPieModelMapper*)self, (intptr_t)slot);
}

int64_t q_vpiemodelmapper_orientation(void* self) {
    return QVPieModelMapper_Orientation((QVPieModelMapper*)self);
}

int64_t q_vpiemodelmapper_qbase_orientation(void* self) {
    return QVPieModelMapper_QBaseOrientation((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_orientation(void* self, int64_t (*slot)()) {
    QVPieModelMapper_OnOrientation((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_set_orientation(void* self, int64_t orientation) {
    QVPieModelMapper_SetOrientation((QVPieModelMapper*)self, orientation);
}

void q_vpiemodelmapper_qbase_set_orientation(void* self, int64_t orientation) {
    QVPieModelMapper_QBaseSetOrientation((QVPieModelMapper*)self, orientation);
}

void q_vpiemodelmapper_on_set_orientation(void* self, void (*slot)(void*, int64_t)) {
    QVPieModelMapper_OnSetOrientation((QVPieModelMapper*)self, (intptr_t)slot);
}

QObject* q_vpiemodelmapper_sender(void* self) {
    return QVPieModelMapper_Sender((QVPieModelMapper*)self);
}

QObject* q_vpiemodelmapper_qbase_sender(void* self) {
    return QVPieModelMapper_QBaseSender((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_sender(void* self, QObject* (*slot)()) {
    QVPieModelMapper_OnSender((QVPieModelMapper*)self, (intptr_t)slot);
}

int32_t q_vpiemodelmapper_sender_signal_index(void* self) {
    return QVPieModelMapper_SenderSignalIndex((QVPieModelMapper*)self);
}

int32_t q_vpiemodelmapper_qbase_sender_signal_index(void* self) {
    return QVPieModelMapper_QBaseSenderSignalIndex((QVPieModelMapper*)self);
}

void q_vpiemodelmapper_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QVPieModelMapper_OnSenderSignalIndex((QVPieModelMapper*)self, (intptr_t)slot);
}

int32_t q_vpiemodelmapper_receivers(void* self, const char* signal) {
    return QVPieModelMapper_Receivers((QVPieModelMapper*)self, signal);
}

int32_t q_vpiemodelmapper_qbase_receivers(void* self, const char* signal) {
    return QVPieModelMapper_QBaseReceivers((QVPieModelMapper*)self, signal);
}

void q_vpiemodelmapper_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QVPieModelMapper_OnReceivers((QVPieModelMapper*)self, (intptr_t)slot);
}

bool q_vpiemodelmapper_is_signal_connected(void* self, void* signal) {
    return QVPieModelMapper_IsSignalConnected((QVPieModelMapper*)self, (QMetaMethod*)signal);
}

bool q_vpiemodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QVPieModelMapper_QBaseIsSignalConnected((QVPieModelMapper*)self, (QMetaMethod*)signal);
}

void q_vpiemodelmapper_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QVPieModelMapper_OnIsSignalConnected((QVPieModelMapper*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_vpiemodelmapper_delete(void* self) {
    QVPieModelMapper_Delete((QVPieModelMapper*)(self));
}
