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
    return QVXYModelMapper_New();
}

QVXYModelMapper* q_vxymodelmapper_new2(void* parent) {
    return QVXYModelMapper_New2((QObject*)parent);
}

const QMetaObject* q_vxymodelmapper_meta_object(const void* self) {
    return QVXYModelMapper_MetaObject((QVXYModelMapper*)self);
}

void q_vxymodelmapper_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QVXYModelMapper_OnMetaObject((QVXYModelMapper*)self, (intptr_t)callback);
}

const QMetaObject* q_vxymodelmapper_super_meta_object(const void* self) {
    return QVXYModelMapper_SuperMetaObject((QVXYModelMapper*)self);
}

void* q_vxymodelmapper_metacast(void* self, const char* param1) {
    return QVXYModelMapper_Metacast((QVXYModelMapper*)self, param1);
}

void q_vxymodelmapper_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QVXYModelMapper_OnMetacast((QVXYModelMapper*)self, (intptr_t)callback);
}

void* q_vxymodelmapper_super_metacast(void* self, const char* param1) {
    return QVXYModelMapper_SuperMetacast((QVXYModelMapper*)self, param1);
}

int32_t q_vxymodelmapper_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVXYModelMapper_Metacall((QVXYModelMapper*)self, param1, param2, param3);
}

void q_vxymodelmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVXYModelMapper_OnMetacall((QVXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_vxymodelmapper_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVXYModelMapper_SuperMetacall((QVXYModelMapper*)self, param1, param2, param3);
}

const char* q_vxymodelmapper_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractItemModel* q_vxymodelmapper_model(const void* self) {
    return QVXYModelMapper_Model((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_model(void* self, void* model) {
    QVXYModelMapper_SetModel((QVXYModelMapper*)self, (QAbstractItemModel*)model);
}

QXYSeries* q_vxymodelmapper_series(const void* self) {
    return QVXYModelMapper_Series((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_series(void* self, void* series) {
    QVXYModelMapper_SetSeries((QVXYModelMapper*)self, (QXYSeries*)series);
}

int32_t q_vxymodelmapper_x_column(const void* self) {
    return QVXYModelMapper_XColumn((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_x_column(void* self, int xColumn) {
    QVXYModelMapper_SetXColumn((QVXYModelMapper*)self, xColumn);
}

int32_t q_vxymodelmapper_y_column(const void* self) {
    return QVXYModelMapper_YColumn((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_y_column(void* self, int yColumn) {
    QVXYModelMapper_SetYColumn((QVXYModelMapper*)self, yColumn);
}

int32_t q_vxymodelmapper_first_row(const void* self) {
    return QVXYModelMapper_FirstRow((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_first_row(void* self, int firstRow) {
    QVXYModelMapper_SetFirstRow((QVXYModelMapper*)self, firstRow);
}

int32_t q_vxymodelmapper_row_count(const void* self) {
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

const char* q_vxymodelmapper_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_vxymodelmapper_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_vxymodelmapper_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_vxymodelmapper_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_vxymodelmapper_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_vxymodelmapper_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_vxymodelmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_vxymodelmapper_thread(const void* self) {
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

libqt_list /* of QObject* */ q_vxymodelmapper_children(const void* self) {
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

QMetaObject__Connection* q_vxymodelmapper_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_vxymodelmapper_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_vxymodelmapper_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_vxymodelmapper_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_vxymodelmapper_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_vxymodelmapper_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_vxymodelmapper_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_vxymodelmapper_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_vxymodelmapper_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_vxymodelmapper_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_vxymodelmapper_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_vxymodelmapper_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_vxymodelmapper_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_vxymodelmapper_dynamic_property_names\n");
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

QBindingStorage* q_vxymodelmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_vxymodelmapper_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_vxymodelmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_vxymodelmapper_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_vxymodelmapper_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_vxymodelmapper_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_vxymodelmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_vxymodelmapper_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_vxymodelmapper_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_vxymodelmapper_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_vxymodelmapper_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_vxymodelmapper_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_vxymodelmapper_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_vxymodelmapper_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_vxymodelmapper_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_vxymodelmapper_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
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

bool q_vxymodelmapper_super_event(void* self, void* event) {
    return QVXYModelMapper_SuperEvent((QVXYModelMapper*)self, (QEvent*)event);
}

void q_vxymodelmapper_on_event(void* self, bool (*callback)(void*, void*)) {
    QVXYModelMapper_OnEvent((QVXYModelMapper*)self, (intptr_t)callback);
}

bool q_vxymodelmapper_event_filter(void* self, void* watched, void* event) {
    return QVXYModelMapper_EventFilter((QVXYModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_vxymodelmapper_super_event_filter(void* self, void* watched, void* event) {
    return QVXYModelMapper_SuperEventFilter((QVXYModelMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_vxymodelmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVXYModelMapper_OnEventFilter((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_timer_event(void* self, void* event) {
    QVXYModelMapper_TimerEvent((QVXYModelMapper*)self, (QTimerEvent*)event);
}

void q_vxymodelmapper_super_timer_event(void* self, void* event) {
    QVXYModelMapper_SuperTimerEvent((QVXYModelMapper*)self, (QTimerEvent*)event);
}

void q_vxymodelmapper_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVXYModelMapper_OnTimerEvent((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_child_event(void* self, void* event) {
    QVXYModelMapper_ChildEvent((QVXYModelMapper*)self, (QChildEvent*)event);
}

void q_vxymodelmapper_super_child_event(void* self, void* event) {
    QVXYModelMapper_SuperChildEvent((QVXYModelMapper*)self, (QChildEvent*)event);
}

void q_vxymodelmapper_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVXYModelMapper_OnChildEvent((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_custom_event(void* self, void* event) {
    QVXYModelMapper_CustomEvent((QVXYModelMapper*)self, (QEvent*)event);
}

void q_vxymodelmapper_super_custom_event(void* self, void* event) {
    QVXYModelMapper_SuperCustomEvent((QVXYModelMapper*)self, (QEvent*)event);
}

void q_vxymodelmapper_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVXYModelMapper_OnCustomEvent((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_connect_notify(void* self, const void* signal) {
    QVXYModelMapper_ConnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_vxymodelmapper_super_connect_notify(void* self, const void* signal) {
    QVXYModelMapper_SuperConnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_vxymodelmapper_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QVXYModelMapper_OnConnectNotify((QVXYModelMapper*)self, (intptr_t)callback);
}

void q_vxymodelmapper_disconnect_notify(void* self, const void* signal) {
    QVXYModelMapper_DisconnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_vxymodelmapper_super_disconnect_notify(void* self, const void* signal) {
    QVXYModelMapper_SuperDisconnectNotify((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_vxymodelmapper_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QVXYModelMapper_OnDisconnectNotify((QVXYModelMapper*)self, (intptr_t)callback);
}

int32_t q_vxymodelmapper_first(const void* self) {
    return QVXYModelMapper_First((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_first(void* self, int first) {
    QVXYModelMapper_SetFirst((QVXYModelMapper*)self, first);
}

int32_t q_vxymodelmapper_count(const void* self) {
    return QVXYModelMapper_Count((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_count(void* self, int count) {
    QVXYModelMapper_SetCount((QVXYModelMapper*)self, count);
}

int32_t q_vxymodelmapper_orientation(const void* self) {
    return QVXYModelMapper_Orientation((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_orientation(void* self, int32_t orientation) {
    QVXYModelMapper_SetOrientation((QVXYModelMapper*)self, orientation);
}

int32_t q_vxymodelmapper_x_section(const void* self) {
    return QVXYModelMapper_XSection((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_x_section(void* self, int xSection) {
    QVXYModelMapper_SetXSection((QVXYModelMapper*)self, xSection);
}

int32_t q_vxymodelmapper_y_section(const void* self) {
    return QVXYModelMapper_YSection((QVXYModelMapper*)self);
}

void q_vxymodelmapper_set_y_section(void* self, int ySection) {
    QVXYModelMapper_SetYSection((QVXYModelMapper*)self, ySection);
}

QObject* q_vxymodelmapper_sender(const void* self) {
    return QVXYModelMapper_Sender((QVXYModelMapper*)self);
}

int32_t q_vxymodelmapper_sender_signal_index(const void* self) {
    return QVXYModelMapper_SenderSignalIndex((QVXYModelMapper*)self);
}

int32_t q_vxymodelmapper_receivers(const void* self, const char* signal) {
    return QVXYModelMapper_Receivers((QVXYModelMapper*)self, signal);
}

bool q_vxymodelmapper_is_signal_connected(const void* self, const void* signal) {
    return QVXYModelMapper_IsSignalConnected((QVXYModelMapper*)self, (QMetaMethod*)signal);
}

void q_vxymodelmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_vxymodelmapper_delete(void* self) {
    QVXYModelMapper_Delete((QVXYModelMapper*)(self));
}
