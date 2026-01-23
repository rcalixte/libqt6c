#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqxymodelmapper.hpp"
#include "libqxyseries.hpp"
#include "libqvxymodelmapper.hpp"
#include "libqvxymodelmapper.h"

QVXYModelMapper* q_vxymodelmapper_new() {
    return QVXYModelMapper_new();
}

QVXYModelMapper* q_vxymodelmapper_new2(void* parent) {
    return QVXYModelMapper_new2((QObject*)parent);
}

const QMetaObject* q_vxymodelmapper_meta_object(void* self) {
    return QVXYModelMapper_MetaObject((QVXYModelMapper*)self);
}

void* q_vxymodelmapper_metacast(void* self, const char* param1) {
    return QVXYModelMapper_Metacast((QVXYModelMapper*)self, param1);
}

int32_t q_vxymodelmapper_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVXYModelMapper_Metacall((QVXYModelMapper*)self, param1, param2, param3);
}

void q_vxymodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVXYModelMapper_OnMetacall((QVXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_vxymodelmapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVXYModelMapper_QBaseMetacall((QVXYModelMapper*)self, param1, param2, param3);
}

const char* q_vxymodelmapper_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_vxymodelmapper_model(void* self) {
    return QVXYModelMapper_Model((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_model(void* self, void* model) {
    QVXYModelMapper_SetModel((QVXYModelMapper*)self, (QAbstractItemModel*)model);
}

QXYSeries* q_vxymodelmapper_series(void* self) {
    return QVXYModelMapper_Series((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_series(void* self, void* series) {
    QVXYModelMapper_SetSeries((QVXYModelMapper*)self, (QXYSeries*)series);
}

int32_t q_vxymodelmapper_x_column(void* self) {
    return QVXYModelMapper_XColumn((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_x_column(void* self, int xColumn) {
    QVXYModelMapper_SetXColumn((QVXYModelMapper*)self, xColumn);
}

int32_t q_vxymodelmapper_y_column(void* self) {
    return QVXYModelMapper_YColumn((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_y_column(void* self, int yColumn) {
    QVXYModelMapper_SetYColumn((QVXYModelMapper*)self, yColumn);
}

int32_t q_vxymodelmapper_first_row(void* self) {
    return QVXYModelMapper_FirstRow((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_first_row(void* self, int firstRow) {
    QVXYModelMapper_SetFirstRow((QVXYModelMapper*)self, firstRow);
}

int32_t q_vxymodelmapper_row_count(void* self) {
    return QVXYModelMapper_RowCount((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_row_count(void* self, int rowCount) {
    QVXYModelMapper_SetRowCount((QVXYModelMapper*)self, rowCount);
}

void q_vxymodelmapper_series_replaced(void* self) {
    QVXYModelMapper_SeriesReplaced((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_series_replaced(void* self, void (*callback)(void*)) {
    QVXYModelMapper_Connect_SeriesReplaced((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_model_replaced(void* self) {
    QVXYModelMapper_ModelReplaced((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_model_replaced(void* self, void (*callback)(void*)) {
    QVXYModelMapper_Connect_ModelReplaced((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_x_column_changed(void* self) {
    QVXYModelMapper_XColumnChanged((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_x_column_changed(void* self, void (*callback)(void*)) {
    QVXYModelMapper_Connect_XColumnChanged((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_y_column_changed(void* self) {
    QVXYModelMapper_YColumnChanged((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_y_column_changed(void* self, void (*callback)(void*)) {
    QVXYModelMapper_Connect_YColumnChanged((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_first_row_changed(void* self) {
    QVXYModelMapper_FirstRowChanged((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_first_row_changed(void* self, void (*callback)(void*)) {
    QVXYModelMapper_Connect_FirstRowChanged((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_row_count_changed(void* self) {
    QVXYModelMapper_RowCountChanged((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_row_count_changed(void* self, void (*callback)(void*)) {
    QVXYModelMapper_Connect_RowCountChanged((QVXYModelMapper*)self, (intptr_t)callback);
}

const char* q_vxymodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vxymodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_vxymodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_vxymodelmapper_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_vxymodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_vxymodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_vxymodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_vxymodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_vxymodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_vxymodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_vxymodelmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_vxymodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_vxymodelmapper_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_vxymodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_vxymodelmapper_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_vxymodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_vxymodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_vxymodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_vxymodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_vxymodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_vxymodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_vxymodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_vxymodelmapper_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_vxymodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_vxymodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_vxymodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_vxymodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_vxymodelmapper_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_vxymodelmapper_dynamic_property_names\n");
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

QBindingStorage* q_vxymodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_vxymodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_vxymodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_vxymodelmapper_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_vxymodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_vxymodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_vxymodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_vxymodelmapper_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_vxymodelmapper_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_vxymodelmapper_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_vxymodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_vxymodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_vxymodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_vxymodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_vxymodelmapper_event(void* self, void* event) {
    return QVXYModelMapper_Event((QVXYModelMapper*)self, (QEvent*)event);
}

bool q_vxymodelmapper_qbase_event(void* self, void* event) {
    return QVXYModelMapper_QBaseEvent((QVXYModelMapper*)self, (QEvent*)event);
}

void q_vxymodelmapper_on_event(void* self, bool (*callback)(void*, void*)) {
    QVXYModelMapper_OnEvent((QVXYModelMapper*)self, (intptr_t)callback);
}

bool q_vxymodelmapper_event_filter(void* self, void* watched, void* event) {
    return QVXYModelMapper_EventFilter((QVXYModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_vxymodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QVXYModelMapper_QBaseEventFilter((QVXYModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_vxymodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVXYModelMapper_OnEventFilter((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_timer_event(void* self, void* event) {
    QVXYModelMapper_TimerEvent((QVXYModelMapper*)self, (QTimerEvent*)event);
}

void q_vxymodelmapper_qbase_timer_event(void* self, void* event) {
    QVXYModelMapper_QBaseTimerEvent((QVXYModelMapper*)self, (QTimerEvent*)event);
}

void q_vxymodelmapper_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVXYModelMapper_OnTimerEvent((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_child_event(void* self, void* event) {
    QVXYModelMapper_ChildEvent((QVXYModelMapper*)self, (QChildEvent*)event);
}

void q_vxymodelmapper_qbase_child_event(void* self, void* event) {
    QVXYModelMapper_QBaseChildEvent((QVXYModelMapper*)self, (QChildEvent*)event);
}

void q_vxymodelmapper_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVXYModelMapper_OnChildEvent((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_custom_event(void* self, void* event) {
    QVXYModelMapper_CustomEvent((QVXYModelMapper*)self, (QEvent*)event);
}

void q_vxymodelmapper_qbase_custom_event(void* self, void* event) {
    QVXYModelMapper_QBaseCustomEvent((QVXYModelMapper*)self, (QEvent*)event);
}

void q_vxymodelmapper_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVXYModelMapper_OnCustomEvent((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_connect_notify(void* self, void* signal) {
    QVXYModelMapper_ConnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_vxymodelmapper_qbase_connect_notify(void* self, void* signal) {
    QVXYModelMapper_QBaseConnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_vxymodelmapper_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QVXYModelMapper_OnConnectNotify((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_disconnect_notify(void* self, void* signal) {
    QVXYModelMapper_DisconnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_vxymodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QVXYModelMapper_QBaseDisconnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_vxymodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QVXYModelMapper_OnDisconnectNotify((QVXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_vxymodelmapper_first(void* self) {
    return QVXYModelMapper_First((QVXYModelMapper*)self);
}

int32_t q_vxymodelmapper_qbase_first(void* self) {
    return QVXYModelMapper_QBaseFirst((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_first(void* self, int32_t (*callback)()) {
    QVXYModelMapper_OnFirst((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_set_first(void* self, int first) {
    QVXYModelMapper_SetFirst((QVXYModelMapper*)self, first);
}

void q_vxymodelmapper_qbase_set_first(void* self, int first) {
    QVXYModelMapper_QBaseSetFirst((QVXYModelMapper*)self, first);
}

void q_vxymodelmapper_on_set_first(void* self, void (*callback)(void*, int)) {
    QVXYModelMapper_OnSetFirst((QVXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_vxymodelmapper_count(void* self) {
    return QVXYModelMapper_Count((QVXYModelMapper*)self);
}

int32_t q_vxymodelmapper_qbase_count(void* self) {
    return QVXYModelMapper_QBaseCount((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_count(void* self, int32_t (*callback)()) {
    QVXYModelMapper_OnCount((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_set_count(void* self, int count) {
    QVXYModelMapper_SetCount((QVXYModelMapper*)self, count);
}

void q_vxymodelmapper_qbase_set_count(void* self, int count) {
    QVXYModelMapper_QBaseSetCount((QVXYModelMapper*)self, count);
}

void q_vxymodelmapper_on_set_count(void* self, void (*callback)(void*, int)) {
    QVXYModelMapper_OnSetCount((QVXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_vxymodelmapper_orientation(void* self) {
    return QVXYModelMapper_Orientation((QVXYModelMapper*)self);
}

int32_t q_vxymodelmapper_qbase_orientation(void* self) {
    return QVXYModelMapper_QBaseOrientation((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_orientation(void* self, int32_t (*callback)()) {
    QVXYModelMapper_OnOrientation((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_set_orientation(void* self, int32_t orientation) {
    QVXYModelMapper_SetOrientation((QVXYModelMapper*)self, orientation);
}

void q_vxymodelmapper_qbase_set_orientation(void* self, int32_t orientation) {
    QVXYModelMapper_QBaseSetOrientation((QVXYModelMapper*)self, orientation);
}

void q_vxymodelmapper_on_set_orientation(void* self, void (*callback)(void*, int32_t)) {
    QVXYModelMapper_OnSetOrientation((QVXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_vxymodelmapper_x_section(void* self) {
    return QVXYModelMapper_XSection((QVXYModelMapper*)self);
}

int32_t q_vxymodelmapper_qbase_x_section(void* self) {
    return QVXYModelMapper_QBaseXSection((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_x_section(void* self, int32_t (*callback)()) {
    QVXYModelMapper_OnXSection((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_set_x_section(void* self, int xSection) {
    QVXYModelMapper_SetXSection((QVXYModelMapper*)self, xSection);
}

void q_vxymodelmapper_qbase_set_x_section(void* self, int xSection) {
    QVXYModelMapper_QBaseSetXSection((QVXYModelMapper*)self, xSection);
}

void q_vxymodelmapper_on_set_x_section(void* self, void (*callback)(void*, int)) {
    QVXYModelMapper_OnSetXSection((QVXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_vxymodelmapper_y_section(void* self) {
    return QVXYModelMapper_YSection((QVXYModelMapper*)self);
}

int32_t q_vxymodelmapper_qbase_y_section(void* self) {
    return QVXYModelMapper_QBaseYSection((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_y_section(void* self, int32_t (*callback)()) {
    QVXYModelMapper_OnYSection((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_set_y_section(void* self, int ySection) {
    QVXYModelMapper_SetYSection((QVXYModelMapper*)self, ySection);
}

void q_vxymodelmapper_qbase_set_y_section(void* self, int ySection) {
    QVXYModelMapper_QBaseSetYSection((QVXYModelMapper*)self, ySection);
}

void q_vxymodelmapper_on_set_y_section(void* self, void (*callback)(void*, int)) {
    QVXYModelMapper_OnSetYSection((QVXYModelMapper*)self, (intptr_t)callback);
}

QObject* q_vxymodelmapper_sender(void* self) {
    return QVXYModelMapper_Sender((QVXYModelMapper*)self);
}

QObject* q_vxymodelmapper_qbase_sender(void* self) {
    return QVXYModelMapper_QBaseSender((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_sender(void* self, QObject* (*callback)()) {
    QVXYModelMapper_OnSender((QVXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_vxymodelmapper_sender_signal_index(void* self) {
    return QVXYModelMapper_SenderSignalIndex((QVXYModelMapper*)self);
}

int32_t q_vxymodelmapper_qbase_sender_signal_index(void* self) {
    return QVXYModelMapper_QBaseSenderSignalIndex((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QVXYModelMapper_OnSenderSignalIndex((QVXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_vxymodelmapper_receivers(void* self, const char* signal) {
    return QVXYModelMapper_Receivers((QVXYModelMapper*)self, signal);
}

int32_t q_vxymodelmapper_qbase_receivers(void* self, const char* signal) {
    return QVXYModelMapper_QBaseReceivers((QVXYModelMapper*)self, signal);
}

void q_vxymodelmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QVXYModelMapper_OnReceivers((QVXYModelMapper*)self, (intptr_t)callback);
}

bool q_vxymodelmapper_is_signal_connected(void* self, void* signal) {
    return QVXYModelMapper_IsSignalConnected((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

bool q_vxymodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QVXYModelMapper_QBaseIsSignalConnected((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_vxymodelmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QVXYModelMapper_OnIsSignalConnected((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_vxymodelmapper_delete(void* self) {
    QVXYModelMapper_Delete((QVXYModelMapper*)(self));
}
