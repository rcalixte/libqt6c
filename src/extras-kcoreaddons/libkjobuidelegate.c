#include "libkjob.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkjobuidelegate.hpp"
#include "libkjobuidelegate.h"

KJobUiDelegate* k_jobuidelegate_new() {
    return KJobUiDelegate_new();
}

KJobUiDelegate* k_jobuidelegate_new2(int32_t flags) {
    return KJobUiDelegate_new2(flags);
}

const QMetaObject* k_jobuidelegate_meta_object(void* self) {
    return KJobUiDelegate_MetaObject((KJobUiDelegate*)self);
}

void* k_jobuidelegate_metacast(void* self, const char* param1) {
    return KJobUiDelegate_Metacast((KJobUiDelegate*)self, param1);
}

int32_t k_jobuidelegate_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KJobUiDelegate_Metacall((KJobUiDelegate*)self, param1, param2, param3);
}

void k_jobuidelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KJobUiDelegate_OnMetacall((KJobUiDelegate*)self, (intptr_t)callback);
}

int32_t k_jobuidelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KJobUiDelegate_QBaseMetacall((KJobUiDelegate*)self, param1, param2, param3);
}

const char* k_jobuidelegate_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_jobuidelegate_set_job(void* self, void* job) {
    return KJobUiDelegate_SetJob((KJobUiDelegate*)self, (KJob*)job);
}

void k_jobuidelegate_on_set_job(void* self, bool (*callback)(void*, void*)) {
    KJobUiDelegate_OnSetJob((KJobUiDelegate*)self, (intptr_t)callback);
}

bool k_jobuidelegate_qbase_set_job(void* self, void* job) {
    return KJobUiDelegate_QBaseSetJob((KJobUiDelegate*)self, (KJob*)job);
}

KJob* k_jobuidelegate_job(void* self) {
    return KJobUiDelegate_Job((KJobUiDelegate*)self);
}

void k_jobuidelegate_on_job(void* self, KJob* (*callback)()) {
    KJobUiDelegate_OnJob((KJobUiDelegate*)self, (intptr_t)callback);
}

KJob* k_jobuidelegate_qbase_job(void* self) {
    return KJobUiDelegate_QBaseJob((KJobUiDelegate*)self);
}

void k_jobuidelegate_show_error_message(void* self) {
    KJobUiDelegate_ShowErrorMessage((KJobUiDelegate*)self);
}

void k_jobuidelegate_on_show_error_message(void* self, void (*callback)()) {
    KJobUiDelegate_OnShowErrorMessage((KJobUiDelegate*)self, (intptr_t)callback);
}

void k_jobuidelegate_qbase_show_error_message(void* self) {
    KJobUiDelegate_QBaseShowErrorMessage((KJobUiDelegate*)self);
}

void k_jobuidelegate_set_auto_error_handling_enabled(void* self, bool enable) {
    KJobUiDelegate_SetAutoErrorHandlingEnabled((KJobUiDelegate*)self, enable);
}

bool k_jobuidelegate_is_auto_error_handling_enabled(void* self) {
    return KJobUiDelegate_IsAutoErrorHandlingEnabled((KJobUiDelegate*)self);
}

void k_jobuidelegate_set_auto_warning_handling_enabled(void* self, bool enable) {
    KJobUiDelegate_SetAutoWarningHandlingEnabled((KJobUiDelegate*)self, enable);
}

bool k_jobuidelegate_is_auto_warning_handling_enabled(void* self) {
    return KJobUiDelegate_IsAutoWarningHandlingEnabled((KJobUiDelegate*)self);
}

void k_jobuidelegate_slot_warning(void* self, void* job, const char* message) {
    KJobUiDelegate_SlotWarning((KJobUiDelegate*)self, (KJob*)job, qstring(message));
}

void k_jobuidelegate_on_slot_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KJobUiDelegate_OnSlotWarning((KJobUiDelegate*)self, (intptr_t)callback);
}

void k_jobuidelegate_qbase_slot_warning(void* self, void* job, const char* message) {
    KJobUiDelegate_QBaseSlotWarning((KJobUiDelegate*)self, (KJob*)job, qstring(message));
}

const char* k_jobuidelegate_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_jobuidelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_jobuidelegate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_jobuidelegate_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_jobuidelegate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_jobuidelegate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_jobuidelegate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_jobuidelegate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_jobuidelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_jobuidelegate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_jobuidelegate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_jobuidelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_jobuidelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_jobuidelegate_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_jobuidelegate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_jobuidelegate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_jobuidelegate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_jobuidelegate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_jobuidelegate_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_jobuidelegate_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_jobuidelegate_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_jobuidelegate_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_jobuidelegate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_jobuidelegate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_jobuidelegate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_jobuidelegate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_jobuidelegate_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_jobuidelegate_dynamic_property_names\n");
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

QBindingStorage* k_jobuidelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_jobuidelegate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_jobuidelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_jobuidelegate_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_jobuidelegate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_jobuidelegate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_jobuidelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_jobuidelegate_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_jobuidelegate_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_jobuidelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_jobuidelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_jobuidelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_jobuidelegate_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_jobuidelegate_event(void* self, void* event) {
    return KJobUiDelegate_Event((KJobUiDelegate*)self, (QEvent*)event);
}

bool k_jobuidelegate_qbase_event(void* self, void* event) {
    return KJobUiDelegate_QBaseEvent((KJobUiDelegate*)self, (QEvent*)event);
}

void k_jobuidelegate_on_event(void* self, bool (*callback)(void*, void*)) {
    KJobUiDelegate_OnEvent((KJobUiDelegate*)self, (intptr_t)callback);
}

bool k_jobuidelegate_event_filter(void* self, void* watched, void* event) {
    return KJobUiDelegate_EventFilter((KJobUiDelegate*)self, (QObject*)watched, (QEvent*)event);
}

bool k_jobuidelegate_qbase_event_filter(void* self, void* watched, void* event) {
    return KJobUiDelegate_QBaseEventFilter((KJobUiDelegate*)self, (QObject*)watched, (QEvent*)event);
}

void k_jobuidelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KJobUiDelegate_OnEventFilter((KJobUiDelegate*)self, (intptr_t)callback);
}

void k_jobuidelegate_timer_event(void* self, void* event) {
    KJobUiDelegate_TimerEvent((KJobUiDelegate*)self, (QTimerEvent*)event);
}

void k_jobuidelegate_qbase_timer_event(void* self, void* event) {
    KJobUiDelegate_QBaseTimerEvent((KJobUiDelegate*)self, (QTimerEvent*)event);
}

void k_jobuidelegate_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KJobUiDelegate_OnTimerEvent((KJobUiDelegate*)self, (intptr_t)callback);
}

void k_jobuidelegate_child_event(void* self, void* event) {
    KJobUiDelegate_ChildEvent((KJobUiDelegate*)self, (QChildEvent*)event);
}

void k_jobuidelegate_qbase_child_event(void* self, void* event) {
    KJobUiDelegate_QBaseChildEvent((KJobUiDelegate*)self, (QChildEvent*)event);
}

void k_jobuidelegate_on_child_event(void* self, void (*callback)(void*, void*)) {
    KJobUiDelegate_OnChildEvent((KJobUiDelegate*)self, (intptr_t)callback);
}

void k_jobuidelegate_custom_event(void* self, void* event) {
    KJobUiDelegate_CustomEvent((KJobUiDelegate*)self, (QEvent*)event);
}

void k_jobuidelegate_qbase_custom_event(void* self, void* event) {
    KJobUiDelegate_QBaseCustomEvent((KJobUiDelegate*)self, (QEvent*)event);
}

void k_jobuidelegate_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KJobUiDelegate_OnCustomEvent((KJobUiDelegate*)self, (intptr_t)callback);
}

void k_jobuidelegate_connect_notify(void* self, void* signal) {
    KJobUiDelegate_ConnectNotify((KJobUiDelegate*)self, (QMetaMethod*)signal);
}

void k_jobuidelegate_qbase_connect_notify(void* self, void* signal) {
    KJobUiDelegate_QBaseConnectNotify((KJobUiDelegate*)self, (QMetaMethod*)signal);
}

void k_jobuidelegate_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KJobUiDelegate_OnConnectNotify((KJobUiDelegate*)self, (intptr_t)callback);
}

void k_jobuidelegate_disconnect_notify(void* self, void* signal) {
    KJobUiDelegate_DisconnectNotify((KJobUiDelegate*)self, (QMetaMethod*)signal);
}

void k_jobuidelegate_qbase_disconnect_notify(void* self, void* signal) {
    KJobUiDelegate_QBaseDisconnectNotify((KJobUiDelegate*)self, (QMetaMethod*)signal);
}

void k_jobuidelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KJobUiDelegate_OnDisconnectNotify((KJobUiDelegate*)self, (intptr_t)callback);
}

QObject* k_jobuidelegate_sender(void* self) {
    return KJobUiDelegate_Sender((KJobUiDelegate*)self);
}

QObject* k_jobuidelegate_qbase_sender(void* self) {
    return KJobUiDelegate_QBaseSender((KJobUiDelegate*)self);
}

void k_jobuidelegate_on_sender(void* self, QObject* (*callback)()) {
    KJobUiDelegate_OnSender((KJobUiDelegate*)self, (intptr_t)callback);
}

int32_t k_jobuidelegate_sender_signal_index(void* self) {
    return KJobUiDelegate_SenderSignalIndex((KJobUiDelegate*)self);
}

int32_t k_jobuidelegate_qbase_sender_signal_index(void* self) {
    return KJobUiDelegate_QBaseSenderSignalIndex((KJobUiDelegate*)self);
}

void k_jobuidelegate_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KJobUiDelegate_OnSenderSignalIndex((KJobUiDelegate*)self, (intptr_t)callback);
}

int32_t k_jobuidelegate_receivers(void* self, const char* signal) {
    return KJobUiDelegate_Receivers((KJobUiDelegate*)self, signal);
}

int32_t k_jobuidelegate_qbase_receivers(void* self, const char* signal) {
    return KJobUiDelegate_QBaseReceivers((KJobUiDelegate*)self, signal);
}

void k_jobuidelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KJobUiDelegate_OnReceivers((KJobUiDelegate*)self, (intptr_t)callback);
}

bool k_jobuidelegate_is_signal_connected(void* self, void* signal) {
    return KJobUiDelegate_IsSignalConnected((KJobUiDelegate*)self, (QMetaMethod*)signal);
}

bool k_jobuidelegate_qbase_is_signal_connected(void* self, void* signal) {
    return KJobUiDelegate_QBaseIsSignalConnected((KJobUiDelegate*)self, (QMetaMethod*)signal);
}

void k_jobuidelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KJobUiDelegate_OnIsSignalConnected((KJobUiDelegate*)self, (intptr_t)callback);
}

void k_jobuidelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_jobuidelegate_delete(void* self) {
    KJobUiDelegate_Delete((KJobUiDelegate*)(self));
}
