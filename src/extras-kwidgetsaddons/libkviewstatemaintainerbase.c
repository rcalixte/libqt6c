#include "../libqabstractitemview.hpp"
#include "../libqcoreevent.hpp"
#include "../libqitemselectionmodel.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkviewstatemaintainerbase.hpp"
#include "libkviewstatemaintainerbase.h"

KViewStateMaintainerBase* k_viewstatemaintainerbase_new() {
    return KViewStateMaintainerBase_new();
}

KViewStateMaintainerBase* k_viewstatemaintainerbase_new2(void* parent) {
    return KViewStateMaintainerBase_new2((QObject*)parent);
}

const QMetaObject* k_viewstatemaintainerbase_meta_object(void* self) {
    return KViewStateMaintainerBase_MetaObject((KViewStateMaintainerBase*)self);
}

void k_viewstatemaintainerbase_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KViewStateMaintainerBase_OnMetaObject((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

const QMetaObject* k_viewstatemaintainerbase_qbase_meta_object(void* self) {
    return KViewStateMaintainerBase_QBaseMetaObject((KViewStateMaintainerBase*)self);
}

void* k_viewstatemaintainerbase_metacast(void* self, const char* param1) {
    return KViewStateMaintainerBase_Metacast((KViewStateMaintainerBase*)self, param1);
}

void k_viewstatemaintainerbase_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KViewStateMaintainerBase_OnMetacast((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

void* k_viewstatemaintainerbase_qbase_metacast(void* self, const char* param1) {
    return KViewStateMaintainerBase_QBaseMetacast((KViewStateMaintainerBase*)self, param1);
}

int32_t k_viewstatemaintainerbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KViewStateMaintainerBase_Metacall((KViewStateMaintainerBase*)self, param1, param2, param3);
}

void k_viewstatemaintainerbase_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KViewStateMaintainerBase_OnMetacall((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

int32_t k_viewstatemaintainerbase_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KViewStateMaintainerBase_QBaseMetacall((KViewStateMaintainerBase*)self, param1, param2, param3);
}

const char* k_viewstatemaintainerbase_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_viewstatemaintainerbase_set_selection_model(void* self, void* selectionModel) {
    KViewStateMaintainerBase_SetSelectionModel((KViewStateMaintainerBase*)self, (QItemSelectionModel*)selectionModel);
}

QItemSelectionModel* k_viewstatemaintainerbase_selection_model(void* self) {
    return KViewStateMaintainerBase_SelectionModel((KViewStateMaintainerBase*)self);
}

void k_viewstatemaintainerbase_set_view(void* self, void* view) {
    KViewStateMaintainerBase_SetView((KViewStateMaintainerBase*)self, (QAbstractItemView*)view);
}

QAbstractItemView* k_viewstatemaintainerbase_view(void* self) {
    return KViewStateMaintainerBase_View((KViewStateMaintainerBase*)self);
}

void k_viewstatemaintainerbase_save_state(void* self) {
    KViewStateMaintainerBase_SaveState((KViewStateMaintainerBase*)self);
}

void k_viewstatemaintainerbase_on_save_state(void* self, void (*callback)()) {
    KViewStateMaintainerBase_OnSaveState((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

void k_viewstatemaintainerbase_qbase_save_state(void* self) {
    KViewStateMaintainerBase_QBaseSaveState((KViewStateMaintainerBase*)self);
}

void k_viewstatemaintainerbase_restore_state(void* self) {
    KViewStateMaintainerBase_RestoreState((KViewStateMaintainerBase*)self);
}

void k_viewstatemaintainerbase_on_restore_state(void* self, void (*callback)()) {
    KViewStateMaintainerBase_OnRestoreState((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

void k_viewstatemaintainerbase_qbase_restore_state(void* self) {
    KViewStateMaintainerBase_QBaseRestoreState((KViewStateMaintainerBase*)self);
}

const char* k_viewstatemaintainerbase_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_viewstatemaintainerbase_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_viewstatemaintainerbase_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_viewstatemaintainerbase_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_viewstatemaintainerbase_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_viewstatemaintainerbase_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_viewstatemaintainerbase_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_viewstatemaintainerbase_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_viewstatemaintainerbase_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_viewstatemaintainerbase_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_viewstatemaintainerbase_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_viewstatemaintainerbase_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_viewstatemaintainerbase_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_viewstatemaintainerbase_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_viewstatemaintainerbase_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_viewstatemaintainerbase_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_viewstatemaintainerbase_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_viewstatemaintainerbase_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_viewstatemaintainerbase_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_viewstatemaintainerbase_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_viewstatemaintainerbase_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_viewstatemaintainerbase_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_viewstatemaintainerbase_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_viewstatemaintainerbase_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_viewstatemaintainerbase_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_viewstatemaintainerbase_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_viewstatemaintainerbase_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_viewstatemaintainerbase_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_viewstatemaintainerbase_dynamic_property_names\n");
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

QBindingStorage* k_viewstatemaintainerbase_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_viewstatemaintainerbase_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_viewstatemaintainerbase_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_viewstatemaintainerbase_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_viewstatemaintainerbase_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_viewstatemaintainerbase_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_viewstatemaintainerbase_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_viewstatemaintainerbase_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_viewstatemaintainerbase_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_viewstatemaintainerbase_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_viewstatemaintainerbase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_viewstatemaintainerbase_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_viewstatemaintainerbase_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_viewstatemaintainerbase_event(void* self, void* event) {
    return KViewStateMaintainerBase_Event((KViewStateMaintainerBase*)self, (QEvent*)event);
}

bool k_viewstatemaintainerbase_qbase_event(void* self, void* event) {
    return KViewStateMaintainerBase_QBaseEvent((KViewStateMaintainerBase*)self, (QEvent*)event);
}

void k_viewstatemaintainerbase_on_event(void* self, bool (*callback)(void*, void*)) {
    KViewStateMaintainerBase_OnEvent((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

bool k_viewstatemaintainerbase_event_filter(void* self, void* watched, void* event) {
    return KViewStateMaintainerBase_EventFilter((KViewStateMaintainerBase*)self, (QObject*)watched, (QEvent*)event);
}

bool k_viewstatemaintainerbase_qbase_event_filter(void* self, void* watched, void* event) {
    return KViewStateMaintainerBase_QBaseEventFilter((KViewStateMaintainerBase*)self, (QObject*)watched, (QEvent*)event);
}

void k_viewstatemaintainerbase_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KViewStateMaintainerBase_OnEventFilter((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

void k_viewstatemaintainerbase_timer_event(void* self, void* event) {
    KViewStateMaintainerBase_TimerEvent((KViewStateMaintainerBase*)self, (QTimerEvent*)event);
}

void k_viewstatemaintainerbase_qbase_timer_event(void* self, void* event) {
    KViewStateMaintainerBase_QBaseTimerEvent((KViewStateMaintainerBase*)self, (QTimerEvent*)event);
}

void k_viewstatemaintainerbase_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KViewStateMaintainerBase_OnTimerEvent((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

void k_viewstatemaintainerbase_child_event(void* self, void* event) {
    KViewStateMaintainerBase_ChildEvent((KViewStateMaintainerBase*)self, (QChildEvent*)event);
}

void k_viewstatemaintainerbase_qbase_child_event(void* self, void* event) {
    KViewStateMaintainerBase_QBaseChildEvent((KViewStateMaintainerBase*)self, (QChildEvent*)event);
}

void k_viewstatemaintainerbase_on_child_event(void* self, void (*callback)(void*, void*)) {
    KViewStateMaintainerBase_OnChildEvent((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

void k_viewstatemaintainerbase_custom_event(void* self, void* event) {
    KViewStateMaintainerBase_CustomEvent((KViewStateMaintainerBase*)self, (QEvent*)event);
}

void k_viewstatemaintainerbase_qbase_custom_event(void* self, void* event) {
    KViewStateMaintainerBase_QBaseCustomEvent((KViewStateMaintainerBase*)self, (QEvent*)event);
}

void k_viewstatemaintainerbase_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KViewStateMaintainerBase_OnCustomEvent((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

void k_viewstatemaintainerbase_connect_notify(void* self, void* signal) {
    KViewStateMaintainerBase_ConnectNotify((KViewStateMaintainerBase*)self, (QMetaMethod*)signal);
}

void k_viewstatemaintainerbase_qbase_connect_notify(void* self, void* signal) {
    KViewStateMaintainerBase_QBaseConnectNotify((KViewStateMaintainerBase*)self, (QMetaMethod*)signal);
}

void k_viewstatemaintainerbase_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KViewStateMaintainerBase_OnConnectNotify((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

void k_viewstatemaintainerbase_disconnect_notify(void* self, void* signal) {
    KViewStateMaintainerBase_DisconnectNotify((KViewStateMaintainerBase*)self, (QMetaMethod*)signal);
}

void k_viewstatemaintainerbase_qbase_disconnect_notify(void* self, void* signal) {
    KViewStateMaintainerBase_QBaseDisconnectNotify((KViewStateMaintainerBase*)self, (QMetaMethod*)signal);
}

void k_viewstatemaintainerbase_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KViewStateMaintainerBase_OnDisconnectNotify((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

QObject* k_viewstatemaintainerbase_sender(void* self) {
    return KViewStateMaintainerBase_Sender((KViewStateMaintainerBase*)self);
}

QObject* k_viewstatemaintainerbase_qbase_sender(void* self) {
    return KViewStateMaintainerBase_QBaseSender((KViewStateMaintainerBase*)self);
}

void k_viewstatemaintainerbase_on_sender(void* self, QObject* (*callback)()) {
    KViewStateMaintainerBase_OnSender((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

int32_t k_viewstatemaintainerbase_sender_signal_index(void* self) {
    return KViewStateMaintainerBase_SenderSignalIndex((KViewStateMaintainerBase*)self);
}

int32_t k_viewstatemaintainerbase_qbase_sender_signal_index(void* self) {
    return KViewStateMaintainerBase_QBaseSenderSignalIndex((KViewStateMaintainerBase*)self);
}

void k_viewstatemaintainerbase_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KViewStateMaintainerBase_OnSenderSignalIndex((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

int32_t k_viewstatemaintainerbase_receivers(void* self, const char* signal) {
    return KViewStateMaintainerBase_Receivers((KViewStateMaintainerBase*)self, signal);
}

int32_t k_viewstatemaintainerbase_qbase_receivers(void* self, const char* signal) {
    return KViewStateMaintainerBase_QBaseReceivers((KViewStateMaintainerBase*)self, signal);
}

void k_viewstatemaintainerbase_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KViewStateMaintainerBase_OnReceivers((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

bool k_viewstatemaintainerbase_is_signal_connected(void* self, void* signal) {
    return KViewStateMaintainerBase_IsSignalConnected((KViewStateMaintainerBase*)self, (QMetaMethod*)signal);
}

bool k_viewstatemaintainerbase_qbase_is_signal_connected(void* self, void* signal) {
    return KViewStateMaintainerBase_QBaseIsSignalConnected((KViewStateMaintainerBase*)self, (QMetaMethod*)signal);
}

void k_viewstatemaintainerbase_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KViewStateMaintainerBase_OnIsSignalConnected((KViewStateMaintainerBase*)self, (intptr_t)callback);
}

void k_viewstatemaintainerbase_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_viewstatemaintainerbase_delete(void* self) {
    KViewStateMaintainerBase_Delete((KViewStateMaintainerBase*)(self));
}
