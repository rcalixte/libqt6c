#include "libpart.hpp"
#include "libreadonlypart.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqstatusbar.hpp"
#include "../libqwidget.hpp"
#include "libstatusbarextension.hpp"
#include "libstatusbarextension.h"

KParts__StatusBarExtension* k_parts__statusbarextension_new(void* parent) {
    return KParts__StatusBarExtension_new((KParts__Part*)parent);
}

KParts__StatusBarExtension* k_parts__statusbarextension_new2(void* parent) {
    return KParts__StatusBarExtension_new2((KParts__ReadOnlyPart*)parent);
}

const QMetaObject* k_parts__statusbarextension_meta_object(void* self) {
    return KParts__StatusBarExtension_MetaObject((KParts__StatusBarExtension*)self);
}

void* k_parts__statusbarextension_metacast(void* self, const char* param1) {
    return KParts__StatusBarExtension_Metacast((KParts__StatusBarExtension*)self, param1);
}

int32_t k_parts__statusbarextension_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__StatusBarExtension_Metacall((KParts__StatusBarExtension*)self, param1, param2, param3);
}

void k_parts__statusbarextension_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KParts__StatusBarExtension_OnMetacall((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

int32_t k_parts__statusbarextension_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__StatusBarExtension_QBaseMetacall((KParts__StatusBarExtension*)self, param1, param2, param3);
}

const char* k_parts__statusbarextension_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__statusbarextension_add_status_bar_item(void* self, void* widget, int stretch, bool permanent) {
    KParts__StatusBarExtension_AddStatusBarItem((KParts__StatusBarExtension*)self, (QWidget*)widget, stretch, permanent);
}

void k_parts__statusbarextension_remove_status_bar_item(void* self, void* widget) {
    KParts__StatusBarExtension_RemoveStatusBarItem((KParts__StatusBarExtension*)self, (QWidget*)widget);
}

QStatusBar* k_parts__statusbarextension_status_bar(void* self) {
    return KParts__StatusBarExtension_StatusBar((KParts__StatusBarExtension*)self);
}

void k_parts__statusbarextension_set_status_bar(void* self, void* status) {
    KParts__StatusBarExtension_SetStatusBar((KParts__StatusBarExtension*)self, (QStatusBar*)status);
}

KParts__StatusBarExtension* k_parts__statusbarextension_child_object(void* obj) {
    return KParts__StatusBarExtension_ChildObject((QObject*)obj);
}

bool k_parts__statusbarextension_event_filter(void* self, void* watched, void* ev) {
    return KParts__StatusBarExtension_EventFilter((KParts__StatusBarExtension*)self, (QObject*)watched, (QEvent*)ev);
}

void k_parts__statusbarextension_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KParts__StatusBarExtension_OnEventFilter((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

bool k_parts__statusbarextension_qbase_event_filter(void* self, void* watched, void* ev) {
    return KParts__StatusBarExtension_QBaseEventFilter((KParts__StatusBarExtension*)self, (QObject*)watched, (QEvent*)ev);
}

const char* k_parts__statusbarextension_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__statusbarextension_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__statusbarextension_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__statusbarextension_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_parts__statusbarextension_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_parts__statusbarextension_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_parts__statusbarextension_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_parts__statusbarextension_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_parts__statusbarextension_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_parts__statusbarextension_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_parts__statusbarextension_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_parts__statusbarextension_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_parts__statusbarextension_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_parts__statusbarextension_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_parts__statusbarextension_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_parts__statusbarextension_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_parts__statusbarextension_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_parts__statusbarextension_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_parts__statusbarextension_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_parts__statusbarextension_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_parts__statusbarextension_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_parts__statusbarextension_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_parts__statusbarextension_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_parts__statusbarextension_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_parts__statusbarextension_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_parts__statusbarextension_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_parts__statusbarextension_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__statusbarextension_dynamic_property_names");
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

QBindingStorage* k_parts__statusbarextension_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_parts__statusbarextension_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_parts__statusbarextension_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_parts__statusbarextension_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_parts__statusbarextension_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_parts__statusbarextension_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_parts__statusbarextension_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_parts__statusbarextension_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_parts__statusbarextension_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_parts__statusbarextension_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_parts__statusbarextension_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_parts__statusbarextension_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_parts__statusbarextension_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_parts__statusbarextension_event(void* self, void* event) {
    return KParts__StatusBarExtension_Event((KParts__StatusBarExtension*)self, (QEvent*)event);
}

bool k_parts__statusbarextension_qbase_event(void* self, void* event) {
    return KParts__StatusBarExtension_QBaseEvent((KParts__StatusBarExtension*)self, (QEvent*)event);
}

void k_parts__statusbarextension_on_event(void* self, bool (*callback)(void*, void*)) {
    KParts__StatusBarExtension_OnEvent((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

void k_parts__statusbarextension_timer_event(void* self, void* event) {
    KParts__StatusBarExtension_TimerEvent((KParts__StatusBarExtension*)self, (QTimerEvent*)event);
}

void k_parts__statusbarextension_qbase_timer_event(void* self, void* event) {
    KParts__StatusBarExtension_QBaseTimerEvent((KParts__StatusBarExtension*)self, (QTimerEvent*)event);
}

void k_parts__statusbarextension_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KParts__StatusBarExtension_OnTimerEvent((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

void k_parts__statusbarextension_child_event(void* self, void* event) {
    KParts__StatusBarExtension_ChildEvent((KParts__StatusBarExtension*)self, (QChildEvent*)event);
}

void k_parts__statusbarextension_qbase_child_event(void* self, void* event) {
    KParts__StatusBarExtension_QBaseChildEvent((KParts__StatusBarExtension*)self, (QChildEvent*)event);
}

void k_parts__statusbarextension_on_child_event(void* self, void (*callback)(void*, void*)) {
    KParts__StatusBarExtension_OnChildEvent((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

void k_parts__statusbarextension_custom_event(void* self, void* event) {
    KParts__StatusBarExtension_CustomEvent((KParts__StatusBarExtension*)self, (QEvent*)event);
}

void k_parts__statusbarextension_qbase_custom_event(void* self, void* event) {
    KParts__StatusBarExtension_QBaseCustomEvent((KParts__StatusBarExtension*)self, (QEvent*)event);
}

void k_parts__statusbarextension_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KParts__StatusBarExtension_OnCustomEvent((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

void k_parts__statusbarextension_connect_notify(void* self, void* signal) {
    KParts__StatusBarExtension_ConnectNotify((KParts__StatusBarExtension*)self, (QMetaMethod*)signal);
}

void k_parts__statusbarextension_qbase_connect_notify(void* self, void* signal) {
    KParts__StatusBarExtension_QBaseConnectNotify((KParts__StatusBarExtension*)self, (QMetaMethod*)signal);
}

void k_parts__statusbarextension_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__StatusBarExtension_OnConnectNotify((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

void k_parts__statusbarextension_disconnect_notify(void* self, void* signal) {
    KParts__StatusBarExtension_DisconnectNotify((KParts__StatusBarExtension*)self, (QMetaMethod*)signal);
}

void k_parts__statusbarextension_qbase_disconnect_notify(void* self, void* signal) {
    KParts__StatusBarExtension_QBaseDisconnectNotify((KParts__StatusBarExtension*)self, (QMetaMethod*)signal);
}

void k_parts__statusbarextension_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__StatusBarExtension_OnDisconnectNotify((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

QObject* k_parts__statusbarextension_sender(void* self) {
    return KParts__StatusBarExtension_Sender((KParts__StatusBarExtension*)self);
}

QObject* k_parts__statusbarextension_qbase_sender(void* self) {
    return KParts__StatusBarExtension_QBaseSender((KParts__StatusBarExtension*)self);
}

void k_parts__statusbarextension_on_sender(void* self, QObject* (*callback)()) {
    KParts__StatusBarExtension_OnSender((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

int32_t k_parts__statusbarextension_sender_signal_index(void* self) {
    return KParts__StatusBarExtension_SenderSignalIndex((KParts__StatusBarExtension*)self);
}

int32_t k_parts__statusbarextension_qbase_sender_signal_index(void* self) {
    return KParts__StatusBarExtension_QBaseSenderSignalIndex((KParts__StatusBarExtension*)self);
}

void k_parts__statusbarextension_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KParts__StatusBarExtension_OnSenderSignalIndex((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

int32_t k_parts__statusbarextension_receivers(void* self, const char* signal) {
    return KParts__StatusBarExtension_Receivers((KParts__StatusBarExtension*)self, signal);
}

int32_t k_parts__statusbarextension_qbase_receivers(void* self, const char* signal) {
    return KParts__StatusBarExtension_QBaseReceivers((KParts__StatusBarExtension*)self, signal);
}

void k_parts__statusbarextension_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KParts__StatusBarExtension_OnReceivers((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

bool k_parts__statusbarextension_is_signal_connected(void* self, void* signal) {
    return KParts__StatusBarExtension_IsSignalConnected((KParts__StatusBarExtension*)self, (QMetaMethod*)signal);
}

bool k_parts__statusbarextension_qbase_is_signal_connected(void* self, void* signal) {
    return KParts__StatusBarExtension_QBaseIsSignalConnected((KParts__StatusBarExtension*)self, (QMetaMethod*)signal);
}

void k_parts__statusbarextension_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KParts__StatusBarExtension_OnIsSignalConnected((KParts__StatusBarExtension*)self, (intptr_t)callback);
}

void k_parts__statusbarextension_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_parts__statusbarextension_delete(void* self) {
    KParts__StatusBarExtension_Delete((KParts__StatusBarExtension*)(self));
}
