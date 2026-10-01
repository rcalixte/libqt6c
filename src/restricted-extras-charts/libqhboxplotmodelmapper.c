#include "../libqabstractitemmodel.hpp"
#include "libqboxplotmodelmapper.hpp"
#include "libqboxplotseries.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqhboxplotmodelmapper.hpp"
#include "libqhboxplotmodelmapper.h"

QHBoxPlotModelMapper* q_hboxplotmodelmapper_new() {
    return QHBoxPlotModelMapper_New();
}

QHBoxPlotModelMapper* q_hboxplotmodelmapper_new2(void* parent) {
    return QHBoxPlotModelMapper_New2((QObject*)parent);
}

const QMetaObject* q_hboxplotmodelmapper_meta_object(const void* self) {
    return QHBoxPlotModelMapper_MetaObject((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QHBoxPlotModelMapper_OnMetaObject((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

const QMetaObject* q_hboxplotmodelmapper_super_meta_object(const void* self) {
    return QHBoxPlotModelMapper_SuperMetaObject((QHBoxPlotModelMapper*)self);
}

void* q_hboxplotmodelmapper_metacast(void* self, const char* param1) {
    return QHBoxPlotModelMapper_Metacast((QHBoxPlotModelMapper*)self, param1);
}

void q_hboxplotmodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QHBoxPlotModelMapper_OnMetacast((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

void* q_hboxplotmodelmapper_super_metacast(void* self, const char* param1) {
    return QHBoxPlotModelMapper_SuperMetacast((QHBoxPlotModelMapper*)self, param1);
}

int32_t q_hboxplotmodelmapper_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHBoxPlotModelMapper_Metacall((QHBoxPlotModelMapper*)self, param1, param2, param3);
}

void q_hboxplotmodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QHBoxPlotModelMapper_OnMetacall((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

int32_t q_hboxplotmodelmapper_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHBoxPlotModelMapper_SuperMetacall((QHBoxPlotModelMapper*)self, param1, param2, param3);
}

const char* q_hboxplotmodelmapper_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_hboxplotmodelmapper_model(const void* self) {
    return QHBoxPlotModelMapper_Model((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_set_model(void* self, void* model) {
    QHBoxPlotModelMapper_SetModel((QHBoxPlotModelMapper*)self, (QAbstractItemModel*)model);
}

QBoxPlotSeries* q_hboxplotmodelmapper_series(const void* self) {
    return QHBoxPlotModelMapper_Series((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_set_series(void* self, void* series) {
    QHBoxPlotModelMapper_SetSeries((QHBoxPlotModelMapper*)self, (QBoxPlotSeries*)series);
}

int32_t q_hboxplotmodelmapper_first_box_set_row(const void* self) {
    return QHBoxPlotModelMapper_FirstBoxSetRow((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_set_first_box_set_row(void* self, int firstBoxSetRow) {
    QHBoxPlotModelMapper_SetFirstBoxSetRow((QHBoxPlotModelMapper*)self, firstBoxSetRow);
}

int32_t q_hboxplotmodelmapper_last_box_set_row(const void* self) {
    return QHBoxPlotModelMapper_LastBoxSetRow((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_set_last_box_set_row(void* self, int lastBoxSetRow) {
    QHBoxPlotModelMapper_SetLastBoxSetRow((QHBoxPlotModelMapper*)self, lastBoxSetRow);
}

int32_t q_hboxplotmodelmapper_first_column(const void* self) {
    return QHBoxPlotModelMapper_FirstColumn((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_set_first_column(void* self, int firstColumn) {
    QHBoxPlotModelMapper_SetFirstColumn((QHBoxPlotModelMapper*)self, firstColumn);
}

int32_t q_hboxplotmodelmapper_column_count(const void* self) {
    return QHBoxPlotModelMapper_ColumnCount((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_set_column_count(void* self, int rowCount) {
    QHBoxPlotModelMapper_SetColumnCount((QHBoxPlotModelMapper*)self, rowCount);
}

void q_hboxplotmodelmapper_series_replaced(void* self) {
    QHBoxPlotModelMapper_SeriesReplaced((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_on_series_replaced(void* self, void (*callback)(void*)) {
    QHBoxPlotModelMapper_Connect_SeriesReplaced((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_hboxplotmodelmapper_model_replaced(void* self) {
    QHBoxPlotModelMapper_ModelReplaced((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_on_model_replaced(void* self, void (*callback)(void*)) {
    QHBoxPlotModelMapper_Connect_ModelReplaced((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_hboxplotmodelmapper_first_box_set_row_changed(void* self) {
    QHBoxPlotModelMapper_FirstBoxSetRowChanged((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_on_first_box_set_row_changed(void* self, void (*callback)(void*)) {
    QHBoxPlotModelMapper_Connect_FirstBoxSetRowChanged((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_hboxplotmodelmapper_last_box_set_row_changed(void* self) {
    QHBoxPlotModelMapper_LastBoxSetRowChanged((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_on_last_box_set_row_changed(void* self, void (*callback)(void*)) {
    QHBoxPlotModelMapper_Connect_LastBoxSetRowChanged((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_hboxplotmodelmapper_first_column_changed(void* self) {
    QHBoxPlotModelMapper_FirstColumnChanged((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_on_first_column_changed(void* self, void (*callback)(void*)) {
    QHBoxPlotModelMapper_Connect_FirstColumnChanged((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_hboxplotmodelmapper_column_count_changed(void* self) {
    QHBoxPlotModelMapper_ColumnCountChanged((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_on_column_count_changed(void* self, void (*callback)(void*)) {
    QHBoxPlotModelMapper_Connect_ColumnCountChanged((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

const char* q_hboxplotmodelmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hboxplotmodelmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_hboxplotmodelmapper_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_hboxplotmodelmapper_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_hboxplotmodelmapper_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_hboxplotmodelmapper_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_hboxplotmodelmapper_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_hboxplotmodelmapper_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_hboxplotmodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_hboxplotmodelmapper_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_hboxplotmodelmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_hboxplotmodelmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_hboxplotmodelmapper_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_hboxplotmodelmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_hboxplotmodelmapper_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_hboxplotmodelmapper_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_hboxplotmodelmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_hboxplotmodelmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_hboxplotmodelmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_hboxplotmodelmapper_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_hboxplotmodelmapper_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_hboxplotmodelmapper_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_hboxplotmodelmapper_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_hboxplotmodelmapper_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_hboxplotmodelmapper_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_hboxplotmodelmapper_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_hboxplotmodelmapper_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_hboxplotmodelmapper_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_hboxplotmodelmapper_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_hboxplotmodelmapper_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_hboxplotmodelmapper_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_hboxplotmodelmapper_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_hboxplotmodelmapper_dynamic_property_names\n");
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

QBindingStorage* q_hboxplotmodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_hboxplotmodelmapper_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_hboxplotmodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_hboxplotmodelmapper_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_hboxplotmodelmapper_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_hboxplotmodelmapper_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_hboxplotmodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_hboxplotmodelmapper_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_hboxplotmodelmapper_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_hboxplotmodelmapper_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_hboxplotmodelmapper_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_hboxplotmodelmapper_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_hboxplotmodelmapper_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_hboxplotmodelmapper_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_hboxplotmodelmapper_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_hboxplotmodelmapper_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_hboxplotmodelmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_hboxplotmodelmapper_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_hboxplotmodelmapper_event(void* self, void* event) {
    return QHBoxPlotModelMapper_Event((QHBoxPlotModelMapper*)self, (QEvent*)event);
}

bool q_hboxplotmodelmapper_super_event(void* self, void* event) {
    return QHBoxPlotModelMapper_SuperEvent((QHBoxPlotModelMapper*)self, (QEvent*)event);
}

void q_hboxplotmodelmapper_on_event(void* self, bool (*callback)(void*, void*)) {
    QHBoxPlotModelMapper_OnEvent((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

bool q_hboxplotmodelmapper_event_filter(void* self, void* watched, void* event) {
    return QHBoxPlotModelMapper_EventFilter((QHBoxPlotModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_hboxplotmodelmapper_super_event_filter(void* self, void* watched, void* event) {
    return QHBoxPlotModelMapper_SuperEventFilter((QHBoxPlotModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_hboxplotmodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QHBoxPlotModelMapper_OnEventFilter((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_hboxplotmodelmapper_timer_event(void* self, void* event) {
    QHBoxPlotModelMapper_TimerEvent((QHBoxPlotModelMapper*)self, (QTimerEvent*)event);
}

void q_hboxplotmodelmapper_super_timer_event(void* self, void* event) {
    QHBoxPlotModelMapper_SuperTimerEvent((QHBoxPlotModelMapper*)self, (QTimerEvent*)event);
}

void q_hboxplotmodelmapper_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QHBoxPlotModelMapper_OnTimerEvent((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_hboxplotmodelmapper_child_event(void* self, void* event) {
    QHBoxPlotModelMapper_ChildEvent((QHBoxPlotModelMapper*)self, (QChildEvent*)event);
}

void q_hboxplotmodelmapper_super_child_event(void* self, void* event) {
    QHBoxPlotModelMapper_SuperChildEvent((QHBoxPlotModelMapper*)self, (QChildEvent*)event);
}

void q_hboxplotmodelmapper_on_child_event(void* self, void (*callback)(void*, void*)) {
    QHBoxPlotModelMapper_OnChildEvent((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_hboxplotmodelmapper_custom_event(void* self, void* event) {
    QHBoxPlotModelMapper_CustomEvent((QHBoxPlotModelMapper*)self, (QEvent*)event);
}

void q_hboxplotmodelmapper_super_custom_event(void* self, void* event) {
    QHBoxPlotModelMapper_SuperCustomEvent((QHBoxPlotModelMapper*)self, (QEvent*)event);
}

void q_hboxplotmodelmapper_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QHBoxPlotModelMapper_OnCustomEvent((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_hboxplotmodelmapper_connect_notify(void* self, const void* signal) {
    QHBoxPlotModelMapper_ConnectNotify((QHBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_hboxplotmodelmapper_super_connect_notify(void* self, const void* signal) {
    QHBoxPlotModelMapper_SuperConnectNotify((QHBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_hboxplotmodelmapper_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QHBoxPlotModelMapper_OnConnectNotify((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

void q_hboxplotmodelmapper_disconnect_notify(void* self, const void* signal) {
    QHBoxPlotModelMapper_DisconnectNotify((QHBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_hboxplotmodelmapper_super_disconnect_notify(void* self, const void* signal) {
    QHBoxPlotModelMapper_SuperDisconnectNotify((QHBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_hboxplotmodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QHBoxPlotModelMapper_OnDisconnectNotify((QHBoxPlotModelMapper*)self, (intptr_t)callback);
}

int32_t q_hboxplotmodelmapper_first(const void* self) {
    return QHBoxPlotModelMapper_First((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_set_first(void* self, int first) {
    QHBoxPlotModelMapper_SetFirst((QHBoxPlotModelMapper*)self, first);
}

int32_t q_hboxplotmodelmapper_count(const void* self) {
    return QHBoxPlotModelMapper_Count((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_set_count(void* self, int count) {
    QHBoxPlotModelMapper_SetCount((QHBoxPlotModelMapper*)self, count);
}

int32_t q_hboxplotmodelmapper_first_box_set_section(const void* self) {
    return QHBoxPlotModelMapper_FirstBoxSetSection((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_set_first_box_set_section(void* self, int firstBoxSetSection) {
    QHBoxPlotModelMapper_SetFirstBoxSetSection((QHBoxPlotModelMapper*)self, firstBoxSetSection);
}

int32_t q_hboxplotmodelmapper_last_box_set_section(const void* self) {
    return QHBoxPlotModelMapper_LastBoxSetSection((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_set_last_box_set_section(void* self, int lastBoxSetSection) {
    QHBoxPlotModelMapper_SetLastBoxSetSection((QHBoxPlotModelMapper*)self, lastBoxSetSection);
}

int32_t q_hboxplotmodelmapper_orientation(const void* self) {
    return QHBoxPlotModelMapper_Orientation((QHBoxPlotModelMapper*)self);
}

void q_hboxplotmodelmapper_set_orientation(void* self, int32_t orientation) {
    QHBoxPlotModelMapper_SetOrientation((QHBoxPlotModelMapper*)self, orientation);
}

QObject* q_hboxplotmodelmapper_sender(const void* self) {
    return QHBoxPlotModelMapper_Sender((QHBoxPlotModelMapper*)self);
}

int32_t q_hboxplotmodelmapper_sender_signal_index(const void* self) {
    return QHBoxPlotModelMapper_SenderSignalIndex((QHBoxPlotModelMapper*)self);
}

int32_t q_hboxplotmodelmapper_receivers(const void* self, const char* signal) {
    return QHBoxPlotModelMapper_Receivers((QHBoxPlotModelMapper*)self, signal);
}

bool q_hboxplotmodelmapper_is_signal_connected(const void* self, const void* signal) {
    return QHBoxPlotModelMapper_IsSignalConnected((QHBoxPlotModelMapper*)self, (QMetaMethod*)signal);
}

void q_hboxplotmodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_hboxplotmodelmapper_delete(void* self) {
    QHBoxPlotModelMapper_Delete((QHBoxPlotModelMapper*)(self));
}
