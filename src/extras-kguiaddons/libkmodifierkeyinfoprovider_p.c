#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqshareddata.hpp"
#include "libkmodifierkeyinfoprovider_p.hpp"
#include "libkmodifierkeyinfoprovider_p.h"

KModifierKeyInfoProvider* k_modifierkeyinfoprovider_new() {
    return KModifierKeyInfoProvider_new();
}

const QMetaObject* k_modifierkeyinfoprovider_meta_object(void* self) {
    return KModifierKeyInfoProvider_MetaObject((KModifierKeyInfoProvider*)self);
}

void* k_modifierkeyinfoprovider_metacast(void* self, const char* param1) {
    return KModifierKeyInfoProvider_Metacast((KModifierKeyInfoProvider*)self, param1);
}

int32_t k_modifierkeyinfoprovider_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KModifierKeyInfoProvider_Metacall((KModifierKeyInfoProvider*)self, param1, param2, param3);
}

void k_modifierkeyinfoprovider_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KModifierKeyInfoProvider_OnMetacall((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

int32_t k_modifierkeyinfoprovider_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KModifierKeyInfoProvider_QBaseMetacall((KModifierKeyInfoProvider*)self, param1, param2, param3);
}

const char* k_modifierkeyinfoprovider_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_modifierkeyinfoprovider_is_key_pressed(void* self, int32_t key) {
    return KModifierKeyInfoProvider_IsKeyPressed((KModifierKeyInfoProvider*)self, key);
}

bool k_modifierkeyinfoprovider_is_key_latched(void* self, int32_t key) {
    return KModifierKeyInfoProvider_IsKeyLatched((KModifierKeyInfoProvider*)self, key);
}

bool k_modifierkeyinfoprovider_set_key_latched(void* self, int32_t key, bool latched) {
    return KModifierKeyInfoProvider_SetKeyLatched((KModifierKeyInfoProvider*)self, key, latched);
}

void k_modifierkeyinfoprovider_on_set_key_latched(void* self, bool (*callback)(void*, int32_t, bool)) {
    KModifierKeyInfoProvider_OnSetKeyLatched((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

bool k_modifierkeyinfoprovider_qbase_set_key_latched(void* self, int32_t key, bool latched) {
    return KModifierKeyInfoProvider_QBaseSetKeyLatched((KModifierKeyInfoProvider*)self, key, latched);
}

bool k_modifierkeyinfoprovider_is_key_locked(void* self, int32_t key) {
    return KModifierKeyInfoProvider_IsKeyLocked((KModifierKeyInfoProvider*)self, key);
}

bool k_modifierkeyinfoprovider_set_key_locked(void* self, int32_t key, bool locked) {
    return KModifierKeyInfoProvider_SetKeyLocked((KModifierKeyInfoProvider*)self, key, locked);
}

void k_modifierkeyinfoprovider_on_set_key_locked(void* self, bool (*callback)(void*, int32_t, bool)) {
    KModifierKeyInfoProvider_OnSetKeyLocked((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

bool k_modifierkeyinfoprovider_qbase_set_key_locked(void* self, int32_t key, bool locked) {
    return KModifierKeyInfoProvider_QBaseSetKeyLocked((KModifierKeyInfoProvider*)self, key, locked);
}

bool k_modifierkeyinfoprovider_is_button_pressed(void* self, int32_t button) {
    return KModifierKeyInfoProvider_IsButtonPressed((KModifierKeyInfoProvider*)self, button);
}

bool k_modifierkeyinfoprovider_knows_key(void* self, int32_t key) {
    return KModifierKeyInfoProvider_KnowsKey((KModifierKeyInfoProvider*)self, key);
}

libqt_list /* of enum Qt__Key */ k_modifierkeyinfoprovider_known_keys(void* self) {
    libqt_list _arr = KModifierKeyInfoProvider_KnownKeys((KModifierKeyInfoProvider*)self);
    return _arr;
}

void k_modifierkeyinfoprovider_key_latched(void* self, int32_t key, bool state) {
    KModifierKeyInfoProvider_KeyLatched((KModifierKeyInfoProvider*)self, key, state);
}

void k_modifierkeyinfoprovider_on_key_latched(void* self, void (*callback)(void*, int32_t, bool)) {
    KModifierKeyInfoProvider_Connect_KeyLatched((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_key_locked(void* self, int32_t key, bool state) {
    KModifierKeyInfoProvider_KeyLocked((KModifierKeyInfoProvider*)self, key, state);
}

void k_modifierkeyinfoprovider_on_key_locked(void* self, void (*callback)(void*, int32_t, bool)) {
    KModifierKeyInfoProvider_Connect_KeyLocked((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_key_pressed(void* self, int32_t key, bool state) {
    KModifierKeyInfoProvider_KeyPressed((KModifierKeyInfoProvider*)self, key, state);
}

void k_modifierkeyinfoprovider_on_key_pressed(void* self, void (*callback)(void*, int32_t, bool)) {
    KModifierKeyInfoProvider_Connect_KeyPressed((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_button_pressed(void* self, int32_t button, bool state) {
    KModifierKeyInfoProvider_ButtonPressed((KModifierKeyInfoProvider*)self, button, state);
}

void k_modifierkeyinfoprovider_on_button_pressed(void* self, void (*callback)(void*, int32_t, bool)) {
    KModifierKeyInfoProvider_Connect_ButtonPressed((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_key_added(void* self, int32_t key) {
    KModifierKeyInfoProvider_KeyAdded((KModifierKeyInfoProvider*)self, key);
}

void k_modifierkeyinfoprovider_on_key_added(void* self, void (*callback)(void*, int32_t)) {
    KModifierKeyInfoProvider_Connect_KeyAdded((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_key_removed(void* self, int32_t key) {
    KModifierKeyInfoProvider_KeyRemoved((KModifierKeyInfoProvider*)self, key);
}

void k_modifierkeyinfoprovider_on_key_removed(void* self, void (*callback)(void*, int32_t)) {
    KModifierKeyInfoProvider_Connect_KeyRemoved((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_state_updated(void* self, int32_t key, int32_t state) {
    KModifierKeyInfoProvider_StateUpdated((KModifierKeyInfoProvider*)self, key, state);
}

void k_modifierkeyinfoprovider_on_state_updated(void* self, void (*callback)(void*, int32_t, int32_t)) {
    KModifierKeyInfoProvider_OnStateUpdated((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_qbase_state_updated(void* self, int32_t key, int32_t state) {
    KModifierKeyInfoProvider_QBaseStateUpdated((KModifierKeyInfoProvider*)self, key, state);
}

const char* k_modifierkeyinfoprovider_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_modifierkeyinfoprovider_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_modifierkeyinfoprovider_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_modifierkeyinfoprovider_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_modifierkeyinfoprovider_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_modifierkeyinfoprovider_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_modifierkeyinfoprovider_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_modifierkeyinfoprovider_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_modifierkeyinfoprovider_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_modifierkeyinfoprovider_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_modifierkeyinfoprovider_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_modifierkeyinfoprovider_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_modifierkeyinfoprovider_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_modifierkeyinfoprovider_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_modifierkeyinfoprovider_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_modifierkeyinfoprovider_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_modifierkeyinfoprovider_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_modifierkeyinfoprovider_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_modifierkeyinfoprovider_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_modifierkeyinfoprovider_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_modifierkeyinfoprovider_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_modifierkeyinfoprovider_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_modifierkeyinfoprovider_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_modifierkeyinfoprovider_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_modifierkeyinfoprovider_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_modifierkeyinfoprovider_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_modifierkeyinfoprovider_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_modifierkeyinfoprovider_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_modifierkeyinfoprovider_dynamic_property_names\n");
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

QBindingStorage* k_modifierkeyinfoprovider_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_modifierkeyinfoprovider_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_modifierkeyinfoprovider_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_modifierkeyinfoprovider_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_modifierkeyinfoprovider_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_modifierkeyinfoprovider_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_modifierkeyinfoprovider_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_modifierkeyinfoprovider_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_modifierkeyinfoprovider_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_modifierkeyinfoprovider_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_modifierkeyinfoprovider_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_modifierkeyinfoprovider_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_modifierkeyinfoprovider_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_modifierkeyinfoprovider_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_modifierkeyinfoprovider_event(void* self, void* event) {
    return KModifierKeyInfoProvider_Event((KModifierKeyInfoProvider*)self, (QEvent*)event);
}

bool k_modifierkeyinfoprovider_qbase_event(void* self, void* event) {
    return KModifierKeyInfoProvider_QBaseEvent((KModifierKeyInfoProvider*)self, (QEvent*)event);
}

void k_modifierkeyinfoprovider_on_event(void* self, bool (*callback)(void*, void*)) {
    KModifierKeyInfoProvider_OnEvent((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

bool k_modifierkeyinfoprovider_event_filter(void* self, void* watched, void* event) {
    return KModifierKeyInfoProvider_EventFilter((KModifierKeyInfoProvider*)self, (QObject*)watched, (QEvent*)event);
}

bool k_modifierkeyinfoprovider_qbase_event_filter(void* self, void* watched, void* event) {
    return KModifierKeyInfoProvider_QBaseEventFilter((KModifierKeyInfoProvider*)self, (QObject*)watched, (QEvent*)event);
}

void k_modifierkeyinfoprovider_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KModifierKeyInfoProvider_OnEventFilter((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_timer_event(void* self, void* event) {
    KModifierKeyInfoProvider_TimerEvent((KModifierKeyInfoProvider*)self, (QTimerEvent*)event);
}

void k_modifierkeyinfoprovider_qbase_timer_event(void* self, void* event) {
    KModifierKeyInfoProvider_QBaseTimerEvent((KModifierKeyInfoProvider*)self, (QTimerEvent*)event);
}

void k_modifierkeyinfoprovider_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KModifierKeyInfoProvider_OnTimerEvent((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_child_event(void* self, void* event) {
    KModifierKeyInfoProvider_ChildEvent((KModifierKeyInfoProvider*)self, (QChildEvent*)event);
}

void k_modifierkeyinfoprovider_qbase_child_event(void* self, void* event) {
    KModifierKeyInfoProvider_QBaseChildEvent((KModifierKeyInfoProvider*)self, (QChildEvent*)event);
}

void k_modifierkeyinfoprovider_on_child_event(void* self, void (*callback)(void*, void*)) {
    KModifierKeyInfoProvider_OnChildEvent((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_custom_event(void* self, void* event) {
    KModifierKeyInfoProvider_CustomEvent((KModifierKeyInfoProvider*)self, (QEvent*)event);
}

void k_modifierkeyinfoprovider_qbase_custom_event(void* self, void* event) {
    KModifierKeyInfoProvider_QBaseCustomEvent((KModifierKeyInfoProvider*)self, (QEvent*)event);
}

void k_modifierkeyinfoprovider_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KModifierKeyInfoProvider_OnCustomEvent((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_connect_notify(void* self, void* signal) {
    KModifierKeyInfoProvider_ConnectNotify((KModifierKeyInfoProvider*)self, (QMetaMethod*)signal);
}

void k_modifierkeyinfoprovider_qbase_connect_notify(void* self, void* signal) {
    KModifierKeyInfoProvider_QBaseConnectNotify((KModifierKeyInfoProvider*)self, (QMetaMethod*)signal);
}

void k_modifierkeyinfoprovider_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KModifierKeyInfoProvider_OnConnectNotify((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_disconnect_notify(void* self, void* signal) {
    KModifierKeyInfoProvider_DisconnectNotify((KModifierKeyInfoProvider*)self, (QMetaMethod*)signal);
}

void k_modifierkeyinfoprovider_qbase_disconnect_notify(void* self, void* signal) {
    KModifierKeyInfoProvider_QBaseDisconnectNotify((KModifierKeyInfoProvider*)self, (QMetaMethod*)signal);
}

void k_modifierkeyinfoprovider_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KModifierKeyInfoProvider_OnDisconnectNotify((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

QObject* k_modifierkeyinfoprovider_sender(void* self) {
    return KModifierKeyInfoProvider_Sender((KModifierKeyInfoProvider*)self);
}

QObject* k_modifierkeyinfoprovider_qbase_sender(void* self) {
    return KModifierKeyInfoProvider_QBaseSender((KModifierKeyInfoProvider*)self);
}

void k_modifierkeyinfoprovider_on_sender(void* self, QObject* (*callback)()) {
    KModifierKeyInfoProvider_OnSender((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

int32_t k_modifierkeyinfoprovider_sender_signal_index(void* self) {
    return KModifierKeyInfoProvider_SenderSignalIndex((KModifierKeyInfoProvider*)self);
}

int32_t k_modifierkeyinfoprovider_qbase_sender_signal_index(void* self) {
    return KModifierKeyInfoProvider_QBaseSenderSignalIndex((KModifierKeyInfoProvider*)self);
}

void k_modifierkeyinfoprovider_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KModifierKeyInfoProvider_OnSenderSignalIndex((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

int32_t k_modifierkeyinfoprovider_receivers(void* self, const char* signal) {
    return KModifierKeyInfoProvider_Receivers((KModifierKeyInfoProvider*)self, signal);
}

int32_t k_modifierkeyinfoprovider_qbase_receivers(void* self, const char* signal) {
    return KModifierKeyInfoProvider_QBaseReceivers((KModifierKeyInfoProvider*)self, signal);
}

void k_modifierkeyinfoprovider_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KModifierKeyInfoProvider_OnReceivers((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

bool k_modifierkeyinfoprovider_is_signal_connected(void* self, void* signal) {
    return KModifierKeyInfoProvider_IsSignalConnected((KModifierKeyInfoProvider*)self, (QMetaMethod*)signal);
}

bool k_modifierkeyinfoprovider_qbase_is_signal_connected(void* self, void* signal) {
    return KModifierKeyInfoProvider_QBaseIsSignalConnected((KModifierKeyInfoProvider*)self, (QMetaMethod*)signal);
}

void k_modifierkeyinfoprovider_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KModifierKeyInfoProvider_OnIsSignalConnected((KModifierKeyInfoProvider*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_modifierkeyinfoprovider_delete(void* self) {
    KModifierKeyInfoProvider_Delete((KModifierKeyInfoProvider*)(self));
}
