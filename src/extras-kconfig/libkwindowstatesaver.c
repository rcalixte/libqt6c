#include "libkconfiggroup.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwindow.hpp"
#include "libkwindowstatesaver.hpp"
#include "libkwindowstatesaver.h"

KWindowStateSaver* k_windowstatesaver_new(void* window, void* configGroup) {
    return KWindowStateSaver_new((QWindow*)window, (KConfigGroup*)configGroup);
}

KWindowStateSaver* k_windowstatesaver_new2(void* window, const char* configGroupName) {
    return KWindowStateSaver_new2((QWindow*)window, qstring(configGroupName));
}

const QMetaObject* k_windowstatesaver_meta_object(void* self) {
    return KWindowStateSaver_MetaObject((KWindowStateSaver*)self);
}

void* k_windowstatesaver_metacast(void* self, const char* param1) {
    return KWindowStateSaver_Metacast((KWindowStateSaver*)self, param1);
}

int32_t k_windowstatesaver_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWindowStateSaver_Metacall((KWindowStateSaver*)self, param1, param2, param3);
}

void k_windowstatesaver_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KWindowStateSaver_OnMetacall((KWindowStateSaver*)self, (intptr_t)callback);
}

int32_t k_windowstatesaver_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWindowStateSaver_QBaseMetacall((KWindowStateSaver*)self, param1, param2, param3);
}

const char* k_windowstatesaver_tr(const char* s) {
    libqt_string _str = KWindowStateSaver_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowstatesaver_tr2(const char* s, const char* c) {
    libqt_string _str = KWindowStateSaver_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowstatesaver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KWindowStateSaver_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_windowstatesaver_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

void k_windowstatesaver_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QObject_OnEventFilter((QObject*)self, (intptr_t)callback);
}

bool k_windowstatesaver_qbase_event_filter(void* self, void* watched, void* event) {
    return QObject_QBaseEventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_windowstatesaver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_windowstatesaver_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_windowstatesaver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_windowstatesaver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_windowstatesaver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_windowstatesaver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_windowstatesaver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_windowstatesaver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_windowstatesaver_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_windowstatesaver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_windowstatesaver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_windowstatesaver_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_windowstatesaver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_windowstatesaver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_windowstatesaver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_windowstatesaver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_windowstatesaver_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_windowstatesaver_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_windowstatesaver_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_windowstatesaver_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_windowstatesaver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_windowstatesaver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_windowstatesaver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_windowstatesaver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_windowstatesaver_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_windowstatesaver_dynamic_property_names");
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

QBindingStorage* k_windowstatesaver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_windowstatesaver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_windowstatesaver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_windowstatesaver_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_windowstatesaver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_windowstatesaver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_windowstatesaver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_windowstatesaver_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_windowstatesaver_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_windowstatesaver_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_windowstatesaver_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_windowstatesaver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_windowstatesaver_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_windowstatesaver_event(void* self, void* event) {
    return KWindowStateSaver_Event((KWindowStateSaver*)self, (QEvent*)event);
}

bool k_windowstatesaver_qbase_event(void* self, void* event) {
    return KWindowStateSaver_QBaseEvent((KWindowStateSaver*)self, (QEvent*)event);
}

void k_windowstatesaver_on_event(void* self, bool (*callback)(void*, void*)) {
    KWindowStateSaver_OnEvent((KWindowStateSaver*)self, (intptr_t)callback);
}

void k_windowstatesaver_child_event(void* self, void* event) {
    KWindowStateSaver_ChildEvent((KWindowStateSaver*)self, (QChildEvent*)event);
}

void k_windowstatesaver_qbase_child_event(void* self, void* event) {
    KWindowStateSaver_QBaseChildEvent((KWindowStateSaver*)self, (QChildEvent*)event);
}

void k_windowstatesaver_on_child_event(void* self, void (*callback)(void*, void*)) {
    KWindowStateSaver_OnChildEvent((KWindowStateSaver*)self, (intptr_t)callback);
}

void k_windowstatesaver_custom_event(void* self, void* event) {
    KWindowStateSaver_CustomEvent((KWindowStateSaver*)self, (QEvent*)event);
}

void k_windowstatesaver_qbase_custom_event(void* self, void* event) {
    KWindowStateSaver_QBaseCustomEvent((KWindowStateSaver*)self, (QEvent*)event);
}

void k_windowstatesaver_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KWindowStateSaver_OnCustomEvent((KWindowStateSaver*)self, (intptr_t)callback);
}

void k_windowstatesaver_connect_notify(void* self, void* signal) {
    KWindowStateSaver_ConnectNotify((KWindowStateSaver*)self, (QMetaMethod*)signal);
}

void k_windowstatesaver_qbase_connect_notify(void* self, void* signal) {
    KWindowStateSaver_QBaseConnectNotify((KWindowStateSaver*)self, (QMetaMethod*)signal);
}

void k_windowstatesaver_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KWindowStateSaver_OnConnectNotify((KWindowStateSaver*)self, (intptr_t)callback);
}

void k_windowstatesaver_disconnect_notify(void* self, void* signal) {
    KWindowStateSaver_DisconnectNotify((KWindowStateSaver*)self, (QMetaMethod*)signal);
}

void k_windowstatesaver_qbase_disconnect_notify(void* self, void* signal) {
    KWindowStateSaver_QBaseDisconnectNotify((KWindowStateSaver*)self, (QMetaMethod*)signal);
}

void k_windowstatesaver_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KWindowStateSaver_OnDisconnectNotify((KWindowStateSaver*)self, (intptr_t)callback);
}

QObject* k_windowstatesaver_sender(void* self) {
    return KWindowStateSaver_Sender((KWindowStateSaver*)self);
}

QObject* k_windowstatesaver_qbase_sender(void* self) {
    return KWindowStateSaver_QBaseSender((KWindowStateSaver*)self);
}

void k_windowstatesaver_on_sender(void* self, QObject* (*callback)()) {
    KWindowStateSaver_OnSender((KWindowStateSaver*)self, (intptr_t)callback);
}

int32_t k_windowstatesaver_sender_signal_index(void* self) {
    return KWindowStateSaver_SenderSignalIndex((KWindowStateSaver*)self);
}

int32_t k_windowstatesaver_qbase_sender_signal_index(void* self) {
    return KWindowStateSaver_QBaseSenderSignalIndex((KWindowStateSaver*)self);
}

void k_windowstatesaver_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KWindowStateSaver_OnSenderSignalIndex((KWindowStateSaver*)self, (intptr_t)callback);
}

int32_t k_windowstatesaver_receivers(void* self, const char* signal) {
    return KWindowStateSaver_Receivers((KWindowStateSaver*)self, signal);
}

int32_t k_windowstatesaver_qbase_receivers(void* self, const char* signal) {
    return KWindowStateSaver_QBaseReceivers((KWindowStateSaver*)self, signal);
}

void k_windowstatesaver_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KWindowStateSaver_OnReceivers((KWindowStateSaver*)self, (intptr_t)callback);
}

bool k_windowstatesaver_is_signal_connected(void* self, void* signal) {
    return KWindowStateSaver_IsSignalConnected((KWindowStateSaver*)self, (QMetaMethod*)signal);
}

bool k_windowstatesaver_qbase_is_signal_connected(void* self, void* signal) {
    return KWindowStateSaver_QBaseIsSignalConnected((KWindowStateSaver*)self, (QMetaMethod*)signal);
}

void k_windowstatesaver_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KWindowStateSaver_OnIsSignalConnected((KWindowStateSaver*)self, (intptr_t)callback);
}

void k_windowstatesaver_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_windowstatesaver_delete(void* self) {
    KWindowStateSaver_Delete((KWindowStateSaver*)(self));
}
