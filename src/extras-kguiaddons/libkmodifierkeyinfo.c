#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkmodifierkeyinfo.hpp"
#include "libkmodifierkeyinfo.h"

KModifierKeyInfo* k_modifierkeyinfo_new() {
    return KModifierKeyInfo_new();
}

KModifierKeyInfo* k_modifierkeyinfo_new2(void* parent) {
    return KModifierKeyInfo_new2((QObject*)parent);
}

const QMetaObject* k_modifierkeyinfo_meta_object(void* self) {
    return KModifierKeyInfo_MetaObject((KModifierKeyInfo*)self);
}

void* k_modifierkeyinfo_metacast(void* self, const char* param1) {
    return KModifierKeyInfo_Metacast((KModifierKeyInfo*)self, param1);
}

int32_t k_modifierkeyinfo_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KModifierKeyInfo_Metacall((KModifierKeyInfo*)self, param1, param2, param3);
}

void k_modifierkeyinfo_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KModifierKeyInfo_OnMetacall((KModifierKeyInfo*)self, (intptr_t)callback);
}

int32_t k_modifierkeyinfo_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KModifierKeyInfo_QBaseMetacall((KModifierKeyInfo*)self, param1, param2, param3);
}

const char* k_modifierkeyinfo_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_modifierkeyinfo_knows_key(void* self, int32_t key) {
    return KModifierKeyInfo_KnowsKey((KModifierKeyInfo*)self, key);
}

libqt_list /* of int32_t */ k_modifierkeyinfo_known_keys(void* self) {
    libqt_list _arr = KModifierKeyInfo_KnownKeys((KModifierKeyInfo*)self);
    return _arr;
}

bool k_modifierkeyinfo_is_key_pressed(void* self, int32_t key) {
    return KModifierKeyInfo_IsKeyPressed((KModifierKeyInfo*)self, key);
}

bool k_modifierkeyinfo_is_key_latched(void* self, int32_t key) {
    return KModifierKeyInfo_IsKeyLatched((KModifierKeyInfo*)self, key);
}

bool k_modifierkeyinfo_set_key_latched(void* self, int32_t key, bool latched) {
    return KModifierKeyInfo_SetKeyLatched((KModifierKeyInfo*)self, key, latched);
}

bool k_modifierkeyinfo_is_key_locked(void* self, int32_t key) {
    return KModifierKeyInfo_IsKeyLocked((KModifierKeyInfo*)self, key);
}

bool k_modifierkeyinfo_set_key_locked(void* self, int32_t key, bool locked) {
    return KModifierKeyInfo_SetKeyLocked((KModifierKeyInfo*)self, key, locked);
}

bool k_modifierkeyinfo_is_button_pressed(void* self, int64_t button) {
    return KModifierKeyInfo_IsButtonPressed((KModifierKeyInfo*)self, button);
}

void k_modifierkeyinfo_key_pressed(void* self, int32_t key, bool pressed) {
    KModifierKeyInfo_KeyPressed((KModifierKeyInfo*)self, key, pressed);
}

void k_modifierkeyinfo_on_key_pressed(void* self, void (*callback)(void*, int32_t, bool)) {
    KModifierKeyInfo_Connect_KeyPressed((KModifierKeyInfo*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_key_latched(void* self, int32_t key, bool latched) {
    KModifierKeyInfo_KeyLatched((KModifierKeyInfo*)self, key, latched);
}

void k_modifierkeyinfo_on_key_latched(void* self, void (*callback)(void*, int32_t, bool)) {
    KModifierKeyInfo_Connect_KeyLatched((KModifierKeyInfo*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_key_locked(void* self, int32_t key, bool locked) {
    KModifierKeyInfo_KeyLocked((KModifierKeyInfo*)self, key, locked);
}

void k_modifierkeyinfo_on_key_locked(void* self, void (*callback)(void*, int32_t, bool)) {
    KModifierKeyInfo_Connect_KeyLocked((KModifierKeyInfo*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_button_pressed(void* self, int64_t button, bool pressed) {
    KModifierKeyInfo_ButtonPressed((KModifierKeyInfo*)self, button, pressed);
}

void k_modifierkeyinfo_on_button_pressed(void* self, void (*callback)(void*, int64_t, bool)) {
    KModifierKeyInfo_Connect_ButtonPressed((KModifierKeyInfo*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_key_added(void* self, int32_t key) {
    KModifierKeyInfo_KeyAdded((KModifierKeyInfo*)self, key);
}

void k_modifierkeyinfo_on_key_added(void* self, void (*callback)(void*, int32_t)) {
    KModifierKeyInfo_Connect_KeyAdded((KModifierKeyInfo*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_key_removed(void* self, int32_t key) {
    KModifierKeyInfo_KeyRemoved((KModifierKeyInfo*)self, key);
}

void k_modifierkeyinfo_on_key_removed(void* self, void (*callback)(void*, int32_t)) {
    KModifierKeyInfo_Connect_KeyRemoved((KModifierKeyInfo*)self, (intptr_t)callback);
}

const char* k_modifierkeyinfo_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_modifierkeyinfo_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_modifierkeyinfo_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_modifierkeyinfo_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_modifierkeyinfo_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_modifierkeyinfo_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_modifierkeyinfo_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_modifierkeyinfo_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_modifierkeyinfo_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_modifierkeyinfo_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_modifierkeyinfo_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_modifierkeyinfo_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_modifierkeyinfo_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_modifierkeyinfo_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_modifierkeyinfo_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_modifierkeyinfo_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_modifierkeyinfo_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_modifierkeyinfo_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_modifierkeyinfo_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_modifierkeyinfo_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_modifierkeyinfo_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_modifierkeyinfo_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_modifierkeyinfo_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_modifierkeyinfo_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_modifierkeyinfo_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_modifierkeyinfo_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_modifierkeyinfo_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_modifierkeyinfo_dynamic_property_names");
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

QBindingStorage* k_modifierkeyinfo_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_modifierkeyinfo_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_modifierkeyinfo_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_modifierkeyinfo_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_modifierkeyinfo_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_modifierkeyinfo_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_modifierkeyinfo_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_modifierkeyinfo_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_modifierkeyinfo_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_modifierkeyinfo_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_modifierkeyinfo_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_modifierkeyinfo_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_modifierkeyinfo_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_modifierkeyinfo_event(void* self, void* event) {
    return KModifierKeyInfo_Event((KModifierKeyInfo*)self, (QEvent*)event);
}

bool k_modifierkeyinfo_qbase_event(void* self, void* event) {
    return KModifierKeyInfo_QBaseEvent((KModifierKeyInfo*)self, (QEvent*)event);
}

void k_modifierkeyinfo_on_event(void* self, bool (*callback)(void*, void*)) {
    KModifierKeyInfo_OnEvent((KModifierKeyInfo*)self, (intptr_t)callback);
}

bool k_modifierkeyinfo_event_filter(void* self, void* watched, void* event) {
    return KModifierKeyInfo_EventFilter((KModifierKeyInfo*)self, (QObject*)watched, (QEvent*)event);
}

bool k_modifierkeyinfo_qbase_event_filter(void* self, void* watched, void* event) {
    return KModifierKeyInfo_QBaseEventFilter((KModifierKeyInfo*)self, (QObject*)watched, (QEvent*)event);
}

void k_modifierkeyinfo_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KModifierKeyInfo_OnEventFilter((KModifierKeyInfo*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_timer_event(void* self, void* event) {
    KModifierKeyInfo_TimerEvent((KModifierKeyInfo*)self, (QTimerEvent*)event);
}

void k_modifierkeyinfo_qbase_timer_event(void* self, void* event) {
    KModifierKeyInfo_QBaseTimerEvent((KModifierKeyInfo*)self, (QTimerEvent*)event);
}

void k_modifierkeyinfo_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KModifierKeyInfo_OnTimerEvent((KModifierKeyInfo*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_child_event(void* self, void* event) {
    KModifierKeyInfo_ChildEvent((KModifierKeyInfo*)self, (QChildEvent*)event);
}

void k_modifierkeyinfo_qbase_child_event(void* self, void* event) {
    KModifierKeyInfo_QBaseChildEvent((KModifierKeyInfo*)self, (QChildEvent*)event);
}

void k_modifierkeyinfo_on_child_event(void* self, void (*callback)(void*, void*)) {
    KModifierKeyInfo_OnChildEvent((KModifierKeyInfo*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_custom_event(void* self, void* event) {
    KModifierKeyInfo_CustomEvent((KModifierKeyInfo*)self, (QEvent*)event);
}

void k_modifierkeyinfo_qbase_custom_event(void* self, void* event) {
    KModifierKeyInfo_QBaseCustomEvent((KModifierKeyInfo*)self, (QEvent*)event);
}

void k_modifierkeyinfo_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KModifierKeyInfo_OnCustomEvent((KModifierKeyInfo*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_connect_notify(void* self, void* signal) {
    KModifierKeyInfo_ConnectNotify((KModifierKeyInfo*)self, (QMetaMethod*)signal);
}

void k_modifierkeyinfo_qbase_connect_notify(void* self, void* signal) {
    KModifierKeyInfo_QBaseConnectNotify((KModifierKeyInfo*)self, (QMetaMethod*)signal);
}

void k_modifierkeyinfo_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KModifierKeyInfo_OnConnectNotify((KModifierKeyInfo*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_disconnect_notify(void* self, void* signal) {
    KModifierKeyInfo_DisconnectNotify((KModifierKeyInfo*)self, (QMetaMethod*)signal);
}

void k_modifierkeyinfo_qbase_disconnect_notify(void* self, void* signal) {
    KModifierKeyInfo_QBaseDisconnectNotify((KModifierKeyInfo*)self, (QMetaMethod*)signal);
}

void k_modifierkeyinfo_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KModifierKeyInfo_OnDisconnectNotify((KModifierKeyInfo*)self, (intptr_t)callback);
}

QObject* k_modifierkeyinfo_sender(void* self) {
    return KModifierKeyInfo_Sender((KModifierKeyInfo*)self);
}

QObject* k_modifierkeyinfo_qbase_sender(void* self) {
    return KModifierKeyInfo_QBaseSender((KModifierKeyInfo*)self);
}

void k_modifierkeyinfo_on_sender(void* self, QObject* (*callback)()) {
    KModifierKeyInfo_OnSender((KModifierKeyInfo*)self, (intptr_t)callback);
}

int32_t k_modifierkeyinfo_sender_signal_index(void* self) {
    return KModifierKeyInfo_SenderSignalIndex((KModifierKeyInfo*)self);
}

int32_t k_modifierkeyinfo_qbase_sender_signal_index(void* self) {
    return KModifierKeyInfo_QBaseSenderSignalIndex((KModifierKeyInfo*)self);
}

void k_modifierkeyinfo_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KModifierKeyInfo_OnSenderSignalIndex((KModifierKeyInfo*)self, (intptr_t)callback);
}

int32_t k_modifierkeyinfo_receivers(void* self, const char* signal) {
    return KModifierKeyInfo_Receivers((KModifierKeyInfo*)self, signal);
}

int32_t k_modifierkeyinfo_qbase_receivers(void* self, const char* signal) {
    return KModifierKeyInfo_QBaseReceivers((KModifierKeyInfo*)self, signal);
}

void k_modifierkeyinfo_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KModifierKeyInfo_OnReceivers((KModifierKeyInfo*)self, (intptr_t)callback);
}

bool k_modifierkeyinfo_is_signal_connected(void* self, void* signal) {
    return KModifierKeyInfo_IsSignalConnected((KModifierKeyInfo*)self, (QMetaMethod*)signal);
}

bool k_modifierkeyinfo_qbase_is_signal_connected(void* self, void* signal) {
    return KModifierKeyInfo_QBaseIsSignalConnected((KModifierKeyInfo*)self, (QMetaMethod*)signal);
}

void k_modifierkeyinfo_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KModifierKeyInfo_OnIsSignalConnected((KModifierKeyInfo*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_modifierkeyinfo_delete(void* self) {
    KModifierKeyInfo_Delete((KModifierKeyInfo*)(self));
}
