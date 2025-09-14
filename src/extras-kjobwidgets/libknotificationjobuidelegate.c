#include "../extras-kcoreaddons/libkjob.hpp"
#include "../extras-kcoreaddons/libkjobuidelegate.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libknotificationjobuidelegate.hpp"
#include "libknotificationjobuidelegate.h"

KNotificationJobUiDelegate* k_notificationjobuidelegate_new() {
    return KNotificationJobUiDelegate_new();
}

KNotificationJobUiDelegate* k_notificationjobuidelegate_new2(int32_t flags) {
    return KNotificationJobUiDelegate_new2(flags);
}

const QMetaObject* k_notificationjobuidelegate_meta_object(void* self) {
    return KNotificationJobUiDelegate_MetaObject((KNotificationJobUiDelegate*)self);
}

void* k_notificationjobuidelegate_metacast(void* self, const char* param1) {
    return KNotificationJobUiDelegate_Metacast((KNotificationJobUiDelegate*)self, param1);
}

int32_t k_notificationjobuidelegate_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNotificationJobUiDelegate_Metacall((KNotificationJobUiDelegate*)self, param1, param2, param3);
}

void k_notificationjobuidelegate_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNotificationJobUiDelegate_OnMetacall((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

int32_t k_notificationjobuidelegate_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNotificationJobUiDelegate_QBaseMetacall((KNotificationJobUiDelegate*)self, param1, param2, param3);
}

const char* k_notificationjobuidelegate_tr(const char* s) {
    libqt_string _str = KNotificationJobUiDelegate_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notificationjobuidelegate_show_error_message(void* self) {
    KNotificationJobUiDelegate_ShowErrorMessage((KNotificationJobUiDelegate*)self);
}

void k_notificationjobuidelegate_on_show_error_message(void* self, void (*callback)()) {
    KNotificationJobUiDelegate_OnShowErrorMessage((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

void k_notificationjobuidelegate_qbase_show_error_message(void* self) {
    KNotificationJobUiDelegate_QBaseShowErrorMessage((KNotificationJobUiDelegate*)self);
}

bool k_notificationjobuidelegate_set_job(void* self, void* job) {
    return KNotificationJobUiDelegate_SetJob((KNotificationJobUiDelegate*)self, (KJob*)job);
}

void k_notificationjobuidelegate_on_set_job(void* self, bool (*callback)(void*, void*)) {
    KNotificationJobUiDelegate_OnSetJob((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

bool k_notificationjobuidelegate_qbase_set_job(void* self, void* job) {
    return KNotificationJobUiDelegate_QBaseSetJob((KNotificationJobUiDelegate*)self, (KJob*)job);
}

void k_notificationjobuidelegate_slot_warning(void* self, void* job, const char* message) {
    KNotificationJobUiDelegate_SlotWarning((KNotificationJobUiDelegate*)self, (KJob*)job, qstring(message));
}

void k_notificationjobuidelegate_on_slot_warning(void* self, void (*callback)(void*, void*, const char*)) {
    KNotificationJobUiDelegate_OnSlotWarning((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

void k_notificationjobuidelegate_qbase_slot_warning(void* self, void* job, const char* message) {
    KNotificationJobUiDelegate_QBaseSlotWarning((KNotificationJobUiDelegate*)self, (KJob*)job, qstring(message));
}

const char* k_notificationjobuidelegate_tr2(const char* s, const char* c) {
    libqt_string _str = KNotificationJobUiDelegate_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notificationjobuidelegate_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KNotificationJobUiDelegate_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notificationjobuidelegate_set_auto_error_handling_enabled(void* self, bool enable) {
    KJobUiDelegate_SetAutoErrorHandlingEnabled((KJobUiDelegate*)self, enable);
}

bool k_notificationjobuidelegate_is_auto_error_handling_enabled(void* self) {
    return KJobUiDelegate_IsAutoErrorHandlingEnabled((KJobUiDelegate*)self);
}

void k_notificationjobuidelegate_set_auto_warning_handling_enabled(void* self, bool enable) {
    KJobUiDelegate_SetAutoWarningHandlingEnabled((KJobUiDelegate*)self, enable);
}

bool k_notificationjobuidelegate_is_auto_warning_handling_enabled(void* self) {
    return KJobUiDelegate_IsAutoWarningHandlingEnabled((KJobUiDelegate*)self);
}

const char* k_notificationjobuidelegate_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notificationjobuidelegate_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_notificationjobuidelegate_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_notificationjobuidelegate_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_notificationjobuidelegate_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_notificationjobuidelegate_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_notificationjobuidelegate_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_notificationjobuidelegate_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_notificationjobuidelegate_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_notificationjobuidelegate_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_notificationjobuidelegate_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_notificationjobuidelegate_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_notificationjobuidelegate_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_notificationjobuidelegate_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_notificationjobuidelegate_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_notificationjobuidelegate_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_notificationjobuidelegate_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_notificationjobuidelegate_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_notificationjobuidelegate_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_notificationjobuidelegate_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_notificationjobuidelegate_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_notificationjobuidelegate_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_notificationjobuidelegate_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_notificationjobuidelegate_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_notificationjobuidelegate_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_notificationjobuidelegate_dynamic_property_names");
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

QBindingStorage* k_notificationjobuidelegate_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_notificationjobuidelegate_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_notificationjobuidelegate_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_notificationjobuidelegate_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_notificationjobuidelegate_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_notificationjobuidelegate_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_notificationjobuidelegate_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_notificationjobuidelegate_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_notificationjobuidelegate_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_notificationjobuidelegate_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_notificationjobuidelegate_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_notificationjobuidelegate_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_notificationjobuidelegate_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_notificationjobuidelegate_event(void* self, void* event) {
    return KNotificationJobUiDelegate_Event((KNotificationJobUiDelegate*)self, (QEvent*)event);
}

bool k_notificationjobuidelegate_qbase_event(void* self, void* event) {
    return KNotificationJobUiDelegate_QBaseEvent((KNotificationJobUiDelegate*)self, (QEvent*)event);
}

void k_notificationjobuidelegate_on_event(void* self, bool (*callback)(void*, void*)) {
    KNotificationJobUiDelegate_OnEvent((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

bool k_notificationjobuidelegate_event_filter(void* self, void* watched, void* event) {
    return KNotificationJobUiDelegate_EventFilter((KNotificationJobUiDelegate*)self, (QObject*)watched, (QEvent*)event);
}

bool k_notificationjobuidelegate_qbase_event_filter(void* self, void* watched, void* event) {
    return KNotificationJobUiDelegate_QBaseEventFilter((KNotificationJobUiDelegate*)self, (QObject*)watched, (QEvent*)event);
}

void k_notificationjobuidelegate_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNotificationJobUiDelegate_OnEventFilter((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

void k_notificationjobuidelegate_timer_event(void* self, void* event) {
    KNotificationJobUiDelegate_TimerEvent((KNotificationJobUiDelegate*)self, (QTimerEvent*)event);
}

void k_notificationjobuidelegate_qbase_timer_event(void* self, void* event) {
    KNotificationJobUiDelegate_QBaseTimerEvent((KNotificationJobUiDelegate*)self, (QTimerEvent*)event);
}

void k_notificationjobuidelegate_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNotificationJobUiDelegate_OnTimerEvent((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

void k_notificationjobuidelegate_child_event(void* self, void* event) {
    KNotificationJobUiDelegate_ChildEvent((KNotificationJobUiDelegate*)self, (QChildEvent*)event);
}

void k_notificationjobuidelegate_qbase_child_event(void* self, void* event) {
    KNotificationJobUiDelegate_QBaseChildEvent((KNotificationJobUiDelegate*)self, (QChildEvent*)event);
}

void k_notificationjobuidelegate_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNotificationJobUiDelegate_OnChildEvent((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

void k_notificationjobuidelegate_custom_event(void* self, void* event) {
    KNotificationJobUiDelegate_CustomEvent((KNotificationJobUiDelegate*)self, (QEvent*)event);
}

void k_notificationjobuidelegate_qbase_custom_event(void* self, void* event) {
    KNotificationJobUiDelegate_QBaseCustomEvent((KNotificationJobUiDelegate*)self, (QEvent*)event);
}

void k_notificationjobuidelegate_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNotificationJobUiDelegate_OnCustomEvent((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

void k_notificationjobuidelegate_connect_notify(void* self, void* signal) {
    KNotificationJobUiDelegate_ConnectNotify((KNotificationJobUiDelegate*)self, (QMetaMethod*)signal);
}

void k_notificationjobuidelegate_qbase_connect_notify(void* self, void* signal) {
    KNotificationJobUiDelegate_QBaseConnectNotify((KNotificationJobUiDelegate*)self, (QMetaMethod*)signal);
}

void k_notificationjobuidelegate_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNotificationJobUiDelegate_OnConnectNotify((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

void k_notificationjobuidelegate_disconnect_notify(void* self, void* signal) {
    KNotificationJobUiDelegate_DisconnectNotify((KNotificationJobUiDelegate*)self, (QMetaMethod*)signal);
}

void k_notificationjobuidelegate_qbase_disconnect_notify(void* self, void* signal) {
    KNotificationJobUiDelegate_QBaseDisconnectNotify((KNotificationJobUiDelegate*)self, (QMetaMethod*)signal);
}

void k_notificationjobuidelegate_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNotificationJobUiDelegate_OnDisconnectNotify((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

KJob* k_notificationjobuidelegate_job(void* self) {
    return KNotificationJobUiDelegate_Job((KNotificationJobUiDelegate*)self);
}

KJob* k_notificationjobuidelegate_qbase_job(void* self) {
    return KNotificationJobUiDelegate_QBaseJob((KNotificationJobUiDelegate*)self);
}

void k_notificationjobuidelegate_on_job(void* self, KJob* (*callback)()) {
    KNotificationJobUiDelegate_OnJob((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

QObject* k_notificationjobuidelegate_sender(void* self) {
    return KNotificationJobUiDelegate_Sender((KNotificationJobUiDelegate*)self);
}

QObject* k_notificationjobuidelegate_qbase_sender(void* self) {
    return KNotificationJobUiDelegate_QBaseSender((KNotificationJobUiDelegate*)self);
}

void k_notificationjobuidelegate_on_sender(void* self, QObject* (*callback)()) {
    KNotificationJobUiDelegate_OnSender((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

int32_t k_notificationjobuidelegate_sender_signal_index(void* self) {
    return KNotificationJobUiDelegate_SenderSignalIndex((KNotificationJobUiDelegate*)self);
}

int32_t k_notificationjobuidelegate_qbase_sender_signal_index(void* self) {
    return KNotificationJobUiDelegate_QBaseSenderSignalIndex((KNotificationJobUiDelegate*)self);
}

void k_notificationjobuidelegate_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNotificationJobUiDelegate_OnSenderSignalIndex((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

int32_t k_notificationjobuidelegate_receivers(void* self, const char* signal) {
    return KNotificationJobUiDelegate_Receivers((KNotificationJobUiDelegate*)self, signal);
}

int32_t k_notificationjobuidelegate_qbase_receivers(void* self, const char* signal) {
    return KNotificationJobUiDelegate_QBaseReceivers((KNotificationJobUiDelegate*)self, signal);
}

void k_notificationjobuidelegate_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNotificationJobUiDelegate_OnReceivers((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

bool k_notificationjobuidelegate_is_signal_connected(void* self, void* signal) {
    return KNotificationJobUiDelegate_IsSignalConnected((KNotificationJobUiDelegate*)self, (QMetaMethod*)signal);
}

bool k_notificationjobuidelegate_qbase_is_signal_connected(void* self, void* signal) {
    return KNotificationJobUiDelegate_QBaseIsSignalConnected((KNotificationJobUiDelegate*)self, (QMetaMethod*)signal);
}

void k_notificationjobuidelegate_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNotificationJobUiDelegate_OnIsSignalConnected((KNotificationJobUiDelegate*)self, (intptr_t)callback);
}

void k_notificationjobuidelegate_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_notificationjobuidelegate_delete(void* self) {
    KNotificationJobUiDelegate_Delete((KNotificationJobUiDelegate*)(self));
}
