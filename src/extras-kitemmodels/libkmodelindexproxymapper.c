#include "../libqabstractitemmodel.hpp"
#include "../libqcoreevent.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkmodelindexproxymapper.hpp"
#include "libkmodelindexproxymapper.h"

KModelIndexProxyMapper* k_modelindexproxymapper_new(void* leftModel, void* rightModel) {
    return KModelIndexProxyMapper_new((QAbstractItemModel*)leftModel, (QAbstractItemModel*)rightModel);
}

KModelIndexProxyMapper* k_modelindexproxymapper_new2(void* leftModel, void* rightModel, void* parent) {
    return KModelIndexProxyMapper_new2((QAbstractItemModel*)leftModel, (QAbstractItemModel*)rightModel, (QObject*)parent);
}

const QMetaObject* k_modelindexproxymapper_meta_object(void* self) {
    return KModelIndexProxyMapper_MetaObject((KModelIndexProxyMapper*)self);
}

void k_modelindexproxymapper_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KModelIndexProxyMapper_OnMetaObject((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

const QMetaObject* k_modelindexproxymapper_qbase_meta_object(void* self) {
    return KModelIndexProxyMapper_QBaseMetaObject((KModelIndexProxyMapper*)self);
}

void* k_modelindexproxymapper_metacast(void* self, const char* param1) {
    return KModelIndexProxyMapper_Metacast((KModelIndexProxyMapper*)self, param1);
}

void k_modelindexproxymapper_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KModelIndexProxyMapper_OnMetacast((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

void* k_modelindexproxymapper_qbase_metacast(void* self, const char* param1) {
    return KModelIndexProxyMapper_QBaseMetacast((KModelIndexProxyMapper*)self, param1);
}

int32_t k_modelindexproxymapper_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KModelIndexProxyMapper_Metacall((KModelIndexProxyMapper*)self, param1, param2, param3);
}

void k_modelindexproxymapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KModelIndexProxyMapper_OnMetacall((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

int32_t k_modelindexproxymapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KModelIndexProxyMapper_QBaseMetacall((KModelIndexProxyMapper*)self, param1, param2, param3);
}

const char* k_modelindexproxymapper_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QModelIndex* k_modelindexproxymapper_map_left_to_right(void* self, void* index) {
    return KModelIndexProxyMapper_MapLeftToRight((KModelIndexProxyMapper*)self, (QModelIndex*)index);
}

QModelIndex* k_modelindexproxymapper_map_right_to_left(void* self, void* index) {
    return KModelIndexProxyMapper_MapRightToLeft((KModelIndexProxyMapper*)self, (QModelIndex*)index);
}

QItemSelection* k_modelindexproxymapper_map_selection_left_to_right(void* self, void* selection) {
    return KModelIndexProxyMapper_MapSelectionLeftToRight((KModelIndexProxyMapper*)self, (QItemSelection*)selection);
}

QItemSelection* k_modelindexproxymapper_map_selection_right_to_left(void* self, void* selection) {
    return KModelIndexProxyMapper_MapSelectionRightToLeft((KModelIndexProxyMapper*)self, (QItemSelection*)selection);
}

bool k_modelindexproxymapper_is_connected(void* self) {
    return KModelIndexProxyMapper_IsConnected((KModelIndexProxyMapper*)self);
}

void k_modelindexproxymapper_is_connected_changed(void* self) {
    KModelIndexProxyMapper_IsConnectedChanged((KModelIndexProxyMapper*)self);
}

void k_modelindexproxymapper_on_is_connected_changed(void* self, void (*callback)(void*)) {
    KModelIndexProxyMapper_Connect_IsConnectedChanged((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

const char* k_modelindexproxymapper_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_modelindexproxymapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_modelindexproxymapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_modelindexproxymapper_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_modelindexproxymapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_modelindexproxymapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_modelindexproxymapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_modelindexproxymapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_modelindexproxymapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_modelindexproxymapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_modelindexproxymapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_modelindexproxymapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_modelindexproxymapper_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_modelindexproxymapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_modelindexproxymapper_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_modelindexproxymapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_modelindexproxymapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_modelindexproxymapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_modelindexproxymapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_modelindexproxymapper_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_modelindexproxymapper_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_modelindexproxymapper_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_modelindexproxymapper_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_modelindexproxymapper_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_modelindexproxymapper_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_modelindexproxymapper_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_modelindexproxymapper_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_modelindexproxymapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_modelindexproxymapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_modelindexproxymapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_modelindexproxymapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_modelindexproxymapper_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_modelindexproxymapper_dynamic_property_names\n");
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

QBindingStorage* k_modelindexproxymapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_modelindexproxymapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_modelindexproxymapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_modelindexproxymapper_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_modelindexproxymapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_modelindexproxymapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_modelindexproxymapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_modelindexproxymapper_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_modelindexproxymapper_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_modelindexproxymapper_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_modelindexproxymapper_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_modelindexproxymapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_modelindexproxymapper_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_modelindexproxymapper_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_modelindexproxymapper_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_modelindexproxymapper_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_modelindexproxymapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_modelindexproxymapper_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_modelindexproxymapper_event(void* self, void* event) {
    return KModelIndexProxyMapper_Event((KModelIndexProxyMapper*)self, (QEvent*)event);
}

bool k_modelindexproxymapper_qbase_event(void* self, void* event) {
    return KModelIndexProxyMapper_QBaseEvent((KModelIndexProxyMapper*)self, (QEvent*)event);
}

void k_modelindexproxymapper_on_event(void* self, bool (*callback)(void*, void*)) {
    KModelIndexProxyMapper_OnEvent((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

bool k_modelindexproxymapper_event_filter(void* self, void* watched, void* event) {
    return KModelIndexProxyMapper_EventFilter((KModelIndexProxyMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool k_modelindexproxymapper_qbase_event_filter(void* self, void* watched, void* event) {
    return KModelIndexProxyMapper_QBaseEventFilter((KModelIndexProxyMapper*)self, (QObject*)watched, (QEvent*)event);
}

void k_modelindexproxymapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KModelIndexProxyMapper_OnEventFilter((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

void k_modelindexproxymapper_timer_event(void* self, void* event) {
    KModelIndexProxyMapper_TimerEvent((KModelIndexProxyMapper*)self, (QTimerEvent*)event);
}

void k_modelindexproxymapper_qbase_timer_event(void* self, void* event) {
    KModelIndexProxyMapper_QBaseTimerEvent((KModelIndexProxyMapper*)self, (QTimerEvent*)event);
}

void k_modelindexproxymapper_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KModelIndexProxyMapper_OnTimerEvent((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

void k_modelindexproxymapper_child_event(void* self, void* event) {
    KModelIndexProxyMapper_ChildEvent((KModelIndexProxyMapper*)self, (QChildEvent*)event);
}

void k_modelindexproxymapper_qbase_child_event(void* self, void* event) {
    KModelIndexProxyMapper_QBaseChildEvent((KModelIndexProxyMapper*)self, (QChildEvent*)event);
}

void k_modelindexproxymapper_on_child_event(void* self, void (*callback)(void*, void*)) {
    KModelIndexProxyMapper_OnChildEvent((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

void k_modelindexproxymapper_custom_event(void* self, void* event) {
    KModelIndexProxyMapper_CustomEvent((KModelIndexProxyMapper*)self, (QEvent*)event);
}

void k_modelindexproxymapper_qbase_custom_event(void* self, void* event) {
    KModelIndexProxyMapper_QBaseCustomEvent((KModelIndexProxyMapper*)self, (QEvent*)event);
}

void k_modelindexproxymapper_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KModelIndexProxyMapper_OnCustomEvent((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

void k_modelindexproxymapper_connect_notify(void* self, void* signal) {
    KModelIndexProxyMapper_ConnectNotify((KModelIndexProxyMapper*)self, (QMetaMethod*)signal);
}

void k_modelindexproxymapper_qbase_connect_notify(void* self, void* signal) {
    KModelIndexProxyMapper_QBaseConnectNotify((KModelIndexProxyMapper*)self, (QMetaMethod*)signal);
}

void k_modelindexproxymapper_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KModelIndexProxyMapper_OnConnectNotify((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

void k_modelindexproxymapper_disconnect_notify(void* self, void* signal) {
    KModelIndexProxyMapper_DisconnectNotify((KModelIndexProxyMapper*)self, (QMetaMethod*)signal);
}

void k_modelindexproxymapper_qbase_disconnect_notify(void* self, void* signal) {
    KModelIndexProxyMapper_QBaseDisconnectNotify((KModelIndexProxyMapper*)self, (QMetaMethod*)signal);
}

void k_modelindexproxymapper_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KModelIndexProxyMapper_OnDisconnectNotify((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

QObject* k_modelindexproxymapper_sender(void* self) {
    return KModelIndexProxyMapper_Sender((KModelIndexProxyMapper*)self);
}

QObject* k_modelindexproxymapper_qbase_sender(void* self) {
    return KModelIndexProxyMapper_QBaseSender((KModelIndexProxyMapper*)self);
}

void k_modelindexproxymapper_on_sender(void* self, QObject* (*callback)()) {
    KModelIndexProxyMapper_OnSender((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

int32_t k_modelindexproxymapper_sender_signal_index(void* self) {
    return KModelIndexProxyMapper_SenderSignalIndex((KModelIndexProxyMapper*)self);
}

int32_t k_modelindexproxymapper_qbase_sender_signal_index(void* self) {
    return KModelIndexProxyMapper_QBaseSenderSignalIndex((KModelIndexProxyMapper*)self);
}

void k_modelindexproxymapper_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KModelIndexProxyMapper_OnSenderSignalIndex((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

int32_t k_modelindexproxymapper_receivers(void* self, const char* signal) {
    return KModelIndexProxyMapper_Receivers((KModelIndexProxyMapper*)self, signal);
}

int32_t k_modelindexproxymapper_qbase_receivers(void* self, const char* signal) {
    return KModelIndexProxyMapper_QBaseReceivers((KModelIndexProxyMapper*)self, signal);
}

void k_modelindexproxymapper_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KModelIndexProxyMapper_OnReceivers((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

bool k_modelindexproxymapper_is_signal_connected(void* self, void* signal) {
    return KModelIndexProxyMapper_IsSignalConnected((KModelIndexProxyMapper*)self, (QMetaMethod*)signal);
}

bool k_modelindexproxymapper_qbase_is_signal_connected(void* self, void* signal) {
    return KModelIndexProxyMapper_QBaseIsSignalConnected((KModelIndexProxyMapper*)self, (QMetaMethod*)signal);
}

void k_modelindexproxymapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KModelIndexProxyMapper_OnIsSignalConnected((KModelIndexProxyMapper*)self, (intptr_t)callback);
}

void k_modelindexproxymapper_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_modelindexproxymapper_delete(void* self) {
    KModelIndexProxyMapper_Delete((KModelIndexProxyMapper*)(self));
}
