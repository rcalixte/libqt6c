#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqxymodelmapper.hpp"
#include "libqxyseries.hpp"
#include "libqhxymodelmapper.hpp"
#include "libqhxymodelmapper.h"

QHXYModelMapper* q_hxymodelmapper_new() {
    return QHXYModelMapper_new();
}

QHXYModelMapper* q_hxymodelmapper_new2(void* parent) {
    return QHXYModelMapper_new2((QObject*)parent);
}

const QMetaObject* q_hxymodelmapper_meta_object(void* self) {
    return QHXYModelMapper_MetaObject((QHXYModelMapper*)self);
}

void* q_hxymodelmapper_metacast(void* self, const char* param1) {
    return QHXYModelMapper_Metacast((QHXYModelMapper*)self, param1);
}

int32_t q_hxymodelmapper_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHXYModelMapper_Metacall((QHXYModelMapper*)self, param1, param2, param3);
}

void q_hxymodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QHXYModelMapper_OnMetacall((QHXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_hxymodelmapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHXYModelMapper_QBaseMetacall((QHXYModelMapper*)self, param1, param2, param3);
}

const char* q_hxymodelmapper_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_hxymodelmapper_model(void* self) {
    return QHXYModelMapper_Model((QHXYModelMapper*)self);
}

void q_hxymodelmapper_set_model(void* self, void* model) {
    QHXYModelMapper_SetModel((QHXYModelMapper*)self, (QAbstractItemModel*)model);
}

QXYSeries* q_hxymodelmapper_series(void* self) {
    return QHXYModelMapper_Series((QHXYModelMapper*)self);
}

void q_hxymodelmapper_set_series(void* self, void* series) {
    QHXYModelMapper_SetSeries((QHXYModelMapper*)self, (QXYSeries*)series);
}

int32_t q_hxymodelmapper_x_row(void* self) {
    return QHXYModelMapper_XRow((QHXYModelMapper*)self);
}

void q_hxymodelmapper_set_x_row(void* self, int xRow) {
    QHXYModelMapper_SetXRow((QHXYModelMapper*)self, xRow);
}

int32_t q_hxymodelmapper_y_row(void* self) {
    return QHXYModelMapper_YRow((QHXYModelMapper*)self);
}

void q_hxymodelmapper_set_y_row(void* self, int yRow) {
    QHXYModelMapper_SetYRow((QHXYModelMapper*)self, yRow);
}

int32_t q_hxymodelmapper_first_column(void* self) {
    return QHXYModelMapper_FirstColumn((QHXYModelMapper*)self);
}

void q_hxymodelmapper_set_first_column(void* self, int firstColumn) {
    QHXYModelMapper_SetFirstColumn((QHXYModelMapper*)self, firstColumn);
}

int32_t q_hxymodelmapper_column_count(void* self) {
    return QHXYModelMapper_ColumnCount((QHXYModelMapper*)self);
}

void q_hxymodelmapper_set_column_count(void* self, int columnCount) {
    QHXYModelMapper_SetColumnCount((QHXYModelMapper*)self, columnCount);
}

void q_hxymodelmapper_series_replaced(void* self) {
    QHXYModelMapper_SeriesReplaced((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_series_replaced(void* self, void (*callback)(void*)) {
    QHXYModelMapper_Connect_SeriesReplaced((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_model_replaced(void* self) {
    QHXYModelMapper_ModelReplaced((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_model_replaced(void* self, void (*callback)(void*)) {
    QHXYModelMapper_Connect_ModelReplaced((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_x_row_changed(void* self) {
    QHXYModelMapper_XRowChanged((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_x_row_changed(void* self, void (*callback)(void*)) {
    QHXYModelMapper_Connect_XRowChanged((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_y_row_changed(void* self) {
    QHXYModelMapper_YRowChanged((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_y_row_changed(void* self, void (*callback)(void*)) {
    QHXYModelMapper_Connect_YRowChanged((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_first_column_changed(void* self) {
    QHXYModelMapper_FirstColumnChanged((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_first_column_changed(void* self, void (*callback)(void*)) {
    QHXYModelMapper_Connect_FirstColumnChanged((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_column_count_changed(void* self) {
    QHXYModelMapper_ColumnCountChanged((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_column_count_changed(void* self, void (*callback)(void*)) {
    QHXYModelMapper_Connect_ColumnCountChanged((QHXYModelMapper*)self, (intptr_t)callback);
}

const char* q_hxymodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hxymodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hxymodelmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hxymodelmapper_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_hxymodelmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_hxymodelmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_hxymodelmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_hxymodelmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_hxymodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_hxymodelmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_hxymodelmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_hxymodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_hxymodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_hxymodelmapper_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_hxymodelmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_hxymodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_hxymodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_hxymodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_hxymodelmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_hxymodelmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_hxymodelmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_hxymodelmapper_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_hxymodelmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_hxymodelmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_hxymodelmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_hxymodelmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_hxymodelmapper_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_hxymodelmapper_dynamic_property_names\n");
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

QBindingStorage* q_hxymodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_hxymodelmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_hxymodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_hxymodelmapper_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_hxymodelmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_hxymodelmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_hxymodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_hxymodelmapper_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_hxymodelmapper_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_hxymodelmapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_hxymodelmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_hxymodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_hxymodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_hxymodelmapper_event(void* self, void* event) {
    return QHXYModelMapper_Event((QHXYModelMapper*)self, (QEvent*)event);
}

bool q_hxymodelmapper_qbase_event(void* self, void* event) {
    return QHXYModelMapper_QBaseEvent((QHXYModelMapper*)self, (QEvent*)event);
}

void q_hxymodelmapper_on_event(void* self, bool (*callback)(void*, void*)) {
    QHXYModelMapper_OnEvent((QHXYModelMapper*)self, (intptr_t)callback);
}

bool q_hxymodelmapper_event_filter(void* self, void* watched, void* event) {
    return QHXYModelMapper_EventFilter((QHXYModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_hxymodelmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QHXYModelMapper_QBaseEventFilter((QHXYModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_hxymodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QHXYModelMapper_OnEventFilter((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_timer_event(void* self, void* event) {
    QHXYModelMapper_TimerEvent((QHXYModelMapper*)self, (QTimerEvent*)event);
}

void q_hxymodelmapper_qbase_timer_event(void* self, void* event) {
    QHXYModelMapper_QBaseTimerEvent((QHXYModelMapper*)self, (QTimerEvent*)event);
}

void q_hxymodelmapper_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QHXYModelMapper_OnTimerEvent((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_child_event(void* self, void* event) {
    QHXYModelMapper_ChildEvent((QHXYModelMapper*)self, (QChildEvent*)event);
}

void q_hxymodelmapper_qbase_child_event(void* self, void* event) {
    QHXYModelMapper_QBaseChildEvent((QHXYModelMapper*)self, (QChildEvent*)event);
}

void q_hxymodelmapper_on_child_event(void* self, void (*callback)(void*, void*)) {
    QHXYModelMapper_OnChildEvent((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_custom_event(void* self, void* event) {
    QHXYModelMapper_CustomEvent((QHXYModelMapper*)self, (QEvent*)event);
}

void q_hxymodelmapper_qbase_custom_event(void* self, void* event) {
    QHXYModelMapper_QBaseCustomEvent((QHXYModelMapper*)self, (QEvent*)event);
}

void q_hxymodelmapper_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QHXYModelMapper_OnCustomEvent((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_connect_notify(void* self, void* signal) {
    QHXYModelMapper_ConnectNotify((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_hxymodelmapper_qbase_connect_notify(void* self, void* signal) {
    QHXYModelMapper_QBaseConnectNotify((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_hxymodelmapper_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QHXYModelMapper_OnConnectNotify((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_disconnect_notify(void* self, void* signal) {
    QHXYModelMapper_DisconnectNotify((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_hxymodelmapper_qbase_disconnect_notify(void* self, void* signal) {
    QHXYModelMapper_QBaseDisconnectNotify((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_hxymodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QHXYModelMapper_OnDisconnectNotify((QHXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_hxymodelmapper_first(void* self) {
    return QHXYModelMapper_First((QHXYModelMapper*)self);
}

int32_t q_hxymodelmapper_qbase_first(void* self) {
    return QHXYModelMapper_QBaseFirst((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_first(void* self, int32_t (*callback)()) {
    QHXYModelMapper_OnFirst((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_set_first(void* self, int first) {
    QHXYModelMapper_SetFirst((QHXYModelMapper*)self, first);
}

void q_hxymodelmapper_qbase_set_first(void* self, int first) {
    QHXYModelMapper_QBaseSetFirst((QHXYModelMapper*)self, first);
}

void q_hxymodelmapper_on_set_first(void* self, void (*callback)(void*, int)) {
    QHXYModelMapper_OnSetFirst((QHXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_hxymodelmapper_count(void* self) {
    return QHXYModelMapper_Count((QHXYModelMapper*)self);
}

int32_t q_hxymodelmapper_qbase_count(void* self) {
    return QHXYModelMapper_QBaseCount((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_count(void* self, int32_t (*callback)()) {
    QHXYModelMapper_OnCount((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_set_count(void* self, int count) {
    QHXYModelMapper_SetCount((QHXYModelMapper*)self, count);
}

void q_hxymodelmapper_qbase_set_count(void* self, int count) {
    QHXYModelMapper_QBaseSetCount((QHXYModelMapper*)self, count);
}

void q_hxymodelmapper_on_set_count(void* self, void (*callback)(void*, int)) {
    QHXYModelMapper_OnSetCount((QHXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_hxymodelmapper_orientation(void* self) {
    return QHXYModelMapper_Orientation((QHXYModelMapper*)self);
}

int32_t q_hxymodelmapper_qbase_orientation(void* self) {
    return QHXYModelMapper_QBaseOrientation((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_orientation(void* self, int32_t (*callback)()) {
    QHXYModelMapper_OnOrientation((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_set_orientation(void* self, int32_t orientation) {
    QHXYModelMapper_SetOrientation((QHXYModelMapper*)self, orientation);
}

void q_hxymodelmapper_qbase_set_orientation(void* self, int32_t orientation) {
    QHXYModelMapper_QBaseSetOrientation((QHXYModelMapper*)self, orientation);
}

void q_hxymodelmapper_on_set_orientation(void* self, void (*callback)(void*, int32_t)) {
    QHXYModelMapper_OnSetOrientation((QHXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_hxymodelmapper_x_section(void* self) {
    return QHXYModelMapper_XSection((QHXYModelMapper*)self);
}

int32_t q_hxymodelmapper_qbase_x_section(void* self) {
    return QHXYModelMapper_QBaseXSection((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_x_section(void* self, int32_t (*callback)()) {
    QHXYModelMapper_OnXSection((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_set_x_section(void* self, int xSection) {
    QHXYModelMapper_SetXSection((QHXYModelMapper*)self, xSection);
}

void q_hxymodelmapper_qbase_set_x_section(void* self, int xSection) {
    QHXYModelMapper_QBaseSetXSection((QHXYModelMapper*)self, xSection);
}

void q_hxymodelmapper_on_set_x_section(void* self, void (*callback)(void*, int)) {
    QHXYModelMapper_OnSetXSection((QHXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_hxymodelmapper_y_section(void* self) {
    return QHXYModelMapper_YSection((QHXYModelMapper*)self);
}

int32_t q_hxymodelmapper_qbase_y_section(void* self) {
    return QHXYModelMapper_QBaseYSection((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_y_section(void* self, int32_t (*callback)()) {
    QHXYModelMapper_OnYSection((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_set_y_section(void* self, int ySection) {
    QHXYModelMapper_SetYSection((QHXYModelMapper*)self, ySection);
}

void q_hxymodelmapper_qbase_set_y_section(void* self, int ySection) {
    QHXYModelMapper_QBaseSetYSection((QHXYModelMapper*)self, ySection);
}

void q_hxymodelmapper_on_set_y_section(void* self, void (*callback)(void*, int)) {
    QHXYModelMapper_OnSetYSection((QHXYModelMapper*)self, (intptr_t)callback);
}

QObject* q_hxymodelmapper_sender(void* self) {
    return QHXYModelMapper_Sender((QHXYModelMapper*)self);
}

QObject* q_hxymodelmapper_qbase_sender(void* self) {
    return QHXYModelMapper_QBaseSender((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_sender(void* self, QObject* (*callback)()) {
    QHXYModelMapper_OnSender((QHXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_hxymodelmapper_sender_signal_index(void* self) {
    return QHXYModelMapper_SenderSignalIndex((QHXYModelMapper*)self);
}

int32_t q_hxymodelmapper_qbase_sender_signal_index(void* self) {
    return QHXYModelMapper_QBaseSenderSignalIndex((QHXYModelMapper*)self);
}

void q_hxymodelmapper_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QHXYModelMapper_OnSenderSignalIndex((QHXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_hxymodelmapper_receivers(void* self, const char* signal) {
    return QHXYModelMapper_Receivers((QHXYModelMapper*)self, signal);
}

int32_t q_hxymodelmapper_qbase_receivers(void* self, const char* signal) {
    return QHXYModelMapper_QBaseReceivers((QHXYModelMapper*)self, signal);
}

void q_hxymodelmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QHXYModelMapper_OnReceivers((QHXYModelMapper*)self, (intptr_t)callback);
}

bool q_hxymodelmapper_is_signal_connected(void* self, void* signal) {
    return QHXYModelMapper_IsSignalConnected((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

bool q_hxymodelmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QHXYModelMapper_QBaseIsSignalConnected((QHXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_hxymodelmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QHXYModelMapper_OnIsSignalConnected((QHXYModelMapper*)self, (intptr_t)callback);
}

void q_hxymodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_hxymodelmapper_delete(void* self) {
    QHXYModelMapper_Delete((QHXYModelMapper*)(self));
}
