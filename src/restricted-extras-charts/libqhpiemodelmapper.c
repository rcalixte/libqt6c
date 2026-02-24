#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqpiemodelmapper.hpp"
#include "libqpieseries.hpp"
#include "libqhpiemodelmapper.hpp"
#include "libqhpiemodelmapper.h"

QHPieModelMapper* q_hpiemodelmapper_new() {
    return QHPieModelMapper_new();
}

QHPieModelMapper* q_hpiemodelmapper_new2(void* parent) {
    return QHPieModelMapper_new2((QObject*)parent);
}

const QMetaObject* q_hpiemodelmapper_meta_object(void* self) {
    return QHPieModelMapper_MetaObject((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QHPieModelMapper_OnMetaObject((QHPieModelMapper*)self, (intptr_t)callback);
}

const QMetaObject* q_hpiemodelmapper_super_meta_object(void* self) {
    return QHPieModelMapper_SuperMetaObject((QHPieModelMapper*)self);
}

void* q_hpiemodelmapper_metacast(void* self, const char* param1) {
    return QHPieModelMapper_Metacast((QHPieModelMapper*)self, param1);
}

void q_hpiemodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QHPieModelMapper_OnMetacast((QHPieModelMapper*)self, (intptr_t)callback);
}

void* q_hpiemodelmapper_super_metacast(void* self, const char* param1) {
    return QHPieModelMapper_SuperMetacast((QHPieModelMapper*)self, param1);
}

int32_t q_hpiemodelmapper_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHPieModelMapper_Metacall((QHPieModelMapper*)self, param1, param2, param3);
}

void q_hpiemodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QHPieModelMapper_OnMetacall((QHPieModelMapper*)self, (intptr_t)callback);
}

int32_t q_hpiemodelmapper_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHPieModelMapper_SuperMetacall((QHPieModelMapper*)self, param1, param2, param3);
}

const char* q_hpiemodelmapper_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_hpiemodelmapper_model(void* self) {
    return QHPieModelMapper_Model((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_set_model(void* self, void* model) {
    QHPieModelMapper_SetModel((QHPieModelMapper*)self, (QAbstractItemModel*)model);
}

QPieSeries* q_hpiemodelmapper_series(void* self) {
    return QHPieModelMapper_Series((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_set_series(void* self, void* series) {
    QHPieModelMapper_SetSeries((QHPieModelMapper*)self, (QPieSeries*)series);
}

int32_t q_hpiemodelmapper_values_row(void* self) {
    return QHPieModelMapper_ValuesRow((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_set_values_row(void* self, int valuesRow) {
    QHPieModelMapper_SetValuesRow((QHPieModelMapper*)self, valuesRow);
}

int32_t q_hpiemodelmapper_labels_row(void* self) {
    return QHPieModelMapper_LabelsRow((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_set_labels_row(void* self, int labelsRow) {
    QHPieModelMapper_SetLabelsRow((QHPieModelMapper*)self, labelsRow);
}

int32_t q_hpiemodelmapper_first_column(void* self) {
    return QHPieModelMapper_FirstColumn((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_set_first_column(void* self, int firstColumn) {
    QHPieModelMapper_SetFirstColumn((QHPieModelMapper*)self, firstColumn);
}

int32_t q_hpiemodelmapper_column_count(void* self) {
    return QHPieModelMapper_ColumnCount((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_set_column_count(void* self, int columnCount) {
    QHPieModelMapper_SetColumnCount((QHPieModelMapper*)self, columnCount);
}

void q_hpiemodelmapper_series_replaced(void* self) {
    QHPieModelMapper_SeriesReplaced((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_series_replaced(void* self, void (*callback)(void*)) {
    QHPieModelMapper_Connect_SeriesReplaced((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_model_replaced(void* self) {
    QHPieModelMapper_ModelReplaced((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_model_replaced(void* self, void (*callback)(void*)) {
    QHPieModelMapper_Connect_ModelReplaced((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_values_row_changed(void* self) {
    QHPieModelMapper_ValuesRowChanged((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_values_row_changed(void* self, void (*callback)(void*)) {
    QHPieModelMapper_Connect_ValuesRowChanged((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_labels_row_changed(void* self) {
    QHPieModelMapper_LabelsRowChanged((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_labels_row_changed(void* self, void (*callback)(void*)) {
    QHPieModelMapper_Connect_LabelsRowChanged((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_first_column_changed(void* self) {
    QHPieModelMapper_FirstColumnChanged((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_first_column_changed(void* self, void (*callback)(void*)) {
    QHPieModelMapper_Connect_FirstColumnChanged((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_column_count_changed(void* self) {
    QHPieModelMapper_ColumnCountChanged((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_column_count_changed(void* self, void (*callback)(void*)) {
    QHPieModelMapper_Connect_ColumnCountChanged((QHPieModelMapper*)self, (intptr_t)callback);
}

const char* q_hpiemodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hpiemodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hpiemodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hpiemodelmapper_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_hpiemodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_hpiemodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_hpiemodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_hpiemodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_hpiemodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_hpiemodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_hpiemodelmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_hpiemodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_hpiemodelmapper_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_hpiemodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_hpiemodelmapper_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_hpiemodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_hpiemodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_hpiemodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_hpiemodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_hpiemodelmapper_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_hpiemodelmapper_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_hpiemodelmapper_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_hpiemodelmapper_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_hpiemodelmapper_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_hpiemodelmapper_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_hpiemodelmapper_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_hpiemodelmapper_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_hpiemodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_hpiemodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_hpiemodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_hpiemodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_hpiemodelmapper_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_hpiemodelmapper_dynamic_property_names\n");
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

QBindingStorage* q_hpiemodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_hpiemodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_hpiemodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_hpiemodelmapper_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_hpiemodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_hpiemodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_hpiemodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_hpiemodelmapper_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_hpiemodelmapper_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_hpiemodelmapper_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_hpiemodelmapper_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_hpiemodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_hpiemodelmapper_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_hpiemodelmapper_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_hpiemodelmapper_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_hpiemodelmapper_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_hpiemodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_hpiemodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_hpiemodelmapper_event(void* self, void* event) {
    return QHPieModelMapper_Event((QHPieModelMapper*)self, (QEvent*)event);
}

bool q_hpiemodelmapper_super_event(void* self, void* event) {
    return QHPieModelMapper_SuperEvent((QHPieModelMapper*)self, (QEvent*)event);
}

void q_hpiemodelmapper_on_event(void* self, bool (*callback)(void*, void*)) {
    QHPieModelMapper_OnEvent((QHPieModelMapper*)self, (intptr_t)callback);
}

bool q_hpiemodelmapper_event_filter(void* self, void* watched, void* event) {
    return QHPieModelMapper_EventFilter((QHPieModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_hpiemodelmapper_super_event_filter(void* self, void* watched, void* event) {
    return QHPieModelMapper_SuperEventFilter((QHPieModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_hpiemodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QHPieModelMapper_OnEventFilter((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_timer_event(void* self, void* event) {
    QHPieModelMapper_TimerEvent((QHPieModelMapper*)self, (QTimerEvent*)event);
}

void q_hpiemodelmapper_super_timer_event(void* self, void* event) {
    QHPieModelMapper_SuperTimerEvent((QHPieModelMapper*)self, (QTimerEvent*)event);
}

void q_hpiemodelmapper_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QHPieModelMapper_OnTimerEvent((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_child_event(void* self, void* event) {
    QHPieModelMapper_ChildEvent((QHPieModelMapper*)self, (QChildEvent*)event);
}

void q_hpiemodelmapper_super_child_event(void* self, void* event) {
    QHPieModelMapper_SuperChildEvent((QHPieModelMapper*)self, (QChildEvent*)event);
}

void q_hpiemodelmapper_on_child_event(void* self, void (*callback)(void*, void*)) {
    QHPieModelMapper_OnChildEvent((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_custom_event(void* self, void* event) {
    QHPieModelMapper_CustomEvent((QHPieModelMapper*)self, (QEvent*)event);
}

void q_hpiemodelmapper_super_custom_event(void* self, void* event) {
    QHPieModelMapper_SuperCustomEvent((QHPieModelMapper*)self, (QEvent*)event);
}

void q_hpiemodelmapper_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QHPieModelMapper_OnCustomEvent((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_connect_notify(void* self, void* signal) {
    QHPieModelMapper_ConnectNotify((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

void q_hpiemodelmapper_super_connect_notify(void* self, void* signal) {
    QHPieModelMapper_SuperConnectNotify((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

void q_hpiemodelmapper_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QHPieModelMapper_OnConnectNotify((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_disconnect_notify(void* self, void* signal) {
    QHPieModelMapper_DisconnectNotify((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

void q_hpiemodelmapper_super_disconnect_notify(void* self, void* signal) {
    QHPieModelMapper_SuperDisconnectNotify((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

void q_hpiemodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QHPieModelMapper_OnDisconnectNotify((QHPieModelMapper*)self, (intptr_t)callback);
}

int32_t q_hpiemodelmapper_first(void* self) {
    return QHPieModelMapper_First((QHPieModelMapper*)self);
}

int32_t q_hpiemodelmapper_super_first(void* self) {
    return QHPieModelMapper_SuperFirst((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_first(void* self, int32_t (*callback)()) {
    QHPieModelMapper_OnFirst((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_set_first(void* self, int first) {
    QHPieModelMapper_SetFirst((QHPieModelMapper*)self, first);
}

void q_hpiemodelmapper_super_set_first(void* self, int first) {
    QHPieModelMapper_SuperSetFirst((QHPieModelMapper*)self, first);
}

void q_hpiemodelmapper_on_set_first(void* self, void (*callback)(void*, int)) {
    QHPieModelMapper_OnSetFirst((QHPieModelMapper*)self, (intptr_t)callback);
}

int32_t q_hpiemodelmapper_count(void* self) {
    return QHPieModelMapper_Count((QHPieModelMapper*)self);
}

int32_t q_hpiemodelmapper_super_count(void* self) {
    return QHPieModelMapper_SuperCount((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_count(void* self, int32_t (*callback)()) {
    QHPieModelMapper_OnCount((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_set_count(void* self, int count) {
    QHPieModelMapper_SetCount((QHPieModelMapper*)self, count);
}

void q_hpiemodelmapper_super_set_count(void* self, int count) {
    QHPieModelMapper_SuperSetCount((QHPieModelMapper*)self, count);
}

void q_hpiemodelmapper_on_set_count(void* self, void (*callback)(void*, int)) {
    QHPieModelMapper_OnSetCount((QHPieModelMapper*)self, (intptr_t)callback);
}

int32_t q_hpiemodelmapper_values_section(void* self) {
    return QHPieModelMapper_ValuesSection((QHPieModelMapper*)self);
}

int32_t q_hpiemodelmapper_super_values_section(void* self) {
    return QHPieModelMapper_SuperValuesSection((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_values_section(void* self, int32_t (*callback)()) {
    QHPieModelMapper_OnValuesSection((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_set_values_section(void* self, int valuesSection) {
    QHPieModelMapper_SetValuesSection((QHPieModelMapper*)self, valuesSection);
}

void q_hpiemodelmapper_super_set_values_section(void* self, int valuesSection) {
    QHPieModelMapper_SuperSetValuesSection((QHPieModelMapper*)self, valuesSection);
}

void q_hpiemodelmapper_on_set_values_section(void* self, void (*callback)(void*, int)) {
    QHPieModelMapper_OnSetValuesSection((QHPieModelMapper*)self, (intptr_t)callback);
}

int32_t q_hpiemodelmapper_labels_section(void* self) {
    return QHPieModelMapper_LabelsSection((QHPieModelMapper*)self);
}

int32_t q_hpiemodelmapper_super_labels_section(void* self) {
    return QHPieModelMapper_SuperLabelsSection((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_labels_section(void* self, int32_t (*callback)()) {
    QHPieModelMapper_OnLabelsSection((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_set_labels_section(void* self, int labelsSection) {
    QHPieModelMapper_SetLabelsSection((QHPieModelMapper*)self, labelsSection);
}

void q_hpiemodelmapper_super_set_labels_section(void* self, int labelsSection) {
    QHPieModelMapper_SuperSetLabelsSection((QHPieModelMapper*)self, labelsSection);
}

void q_hpiemodelmapper_on_set_labels_section(void* self, void (*callback)(void*, int)) {
    QHPieModelMapper_OnSetLabelsSection((QHPieModelMapper*)self, (intptr_t)callback);
}

int32_t q_hpiemodelmapper_orientation(void* self) {
    return QHPieModelMapper_Orientation((QHPieModelMapper*)self);
}

int32_t q_hpiemodelmapper_super_orientation(void* self) {
    return QHPieModelMapper_SuperOrientation((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_orientation(void* self, int32_t (*callback)()) {
    QHPieModelMapper_OnOrientation((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_set_orientation(void* self, int32_t orientation) {
    QHPieModelMapper_SetOrientation((QHPieModelMapper*)self, orientation);
}

void q_hpiemodelmapper_super_set_orientation(void* self, int32_t orientation) {
    QHPieModelMapper_SuperSetOrientation((QHPieModelMapper*)self, orientation);
}

void q_hpiemodelmapper_on_set_orientation(void* self, void (*callback)(void*, int32_t)) {
    QHPieModelMapper_OnSetOrientation((QHPieModelMapper*)self, (intptr_t)callback);
}

QObject* q_hpiemodelmapper_sender(void* self) {
    return QHPieModelMapper_Sender((QHPieModelMapper*)self);
}

QObject* q_hpiemodelmapper_super_sender(void* self) {
    return QHPieModelMapper_SuperSender((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_sender(void* self, QObject* (*callback)()) {
    QHPieModelMapper_OnSender((QHPieModelMapper*)self, (intptr_t)callback);
}

int32_t q_hpiemodelmapper_sender_signal_index(void* self) {
    return QHPieModelMapper_SenderSignalIndex((QHPieModelMapper*)self);
}

int32_t q_hpiemodelmapper_super_sender_signal_index(void* self) {
    return QHPieModelMapper_SuperSenderSignalIndex((QHPieModelMapper*)self);
}

void q_hpiemodelmapper_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QHPieModelMapper_OnSenderSignalIndex((QHPieModelMapper*)self, (intptr_t)callback);
}

int32_t q_hpiemodelmapper_receivers(void* self, const char* signal) {
    return QHPieModelMapper_Receivers((QHPieModelMapper*)self, signal);
}

int32_t q_hpiemodelmapper_super_receivers(void* self, const char* signal) {
    return QHPieModelMapper_SuperReceivers((QHPieModelMapper*)self, signal);
}

void q_hpiemodelmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QHPieModelMapper_OnReceivers((QHPieModelMapper*)self, (intptr_t)callback);
}

bool q_hpiemodelmapper_is_signal_connected(void* self, void* signal) {
    return QHPieModelMapper_IsSignalConnected((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

bool q_hpiemodelmapper_super_is_signal_connected(void* self, void* signal) {
    return QHPieModelMapper_SuperIsSignalConnected((QHPieModelMapper*)self, (QMetaMethod*)signal);
}

void q_hpiemodelmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QHPieModelMapper_OnIsSignalConnected((QHPieModelMapper*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_hpiemodelmapper_delete(void* self) {
    QHPieModelMapper_Delete((QHPieModelMapper*)(self));
}
