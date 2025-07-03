#include "libqevent.hpp"
#include "libqkeysequence.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqshortcut.hpp"
#include "libqshortcut.h"

QShortcut* q_shortcut_new(void* parent) {
    return QShortcut_new((QObject*)parent);
}

QShortcut* q_shortcut_new2(void* key, void* parent) {
    return QShortcut_new2((QKeySequence*)key, (QObject*)parent);
}

QShortcut* q_shortcut_new3(int64_t key, void* parent) {
    return QShortcut_new3(key, (QObject*)parent);
}

QShortcut* q_shortcut_new4(void* key, void* parent, const char* member) {
    return QShortcut_new4((QKeySequence*)key, (QObject*)parent, member);
}

QShortcut* q_shortcut_new5(void* key, void* parent, const char* member, const char* ambiguousMember) {
    return QShortcut_new5((QKeySequence*)key, (QObject*)parent, member, ambiguousMember);
}

QShortcut* q_shortcut_new6(void* key, void* parent, const char* member, const char* ambiguousMember, int64_t context) {
    return QShortcut_new6((QKeySequence*)key, (QObject*)parent, member, ambiguousMember, context);
}

QShortcut* q_shortcut_new7(int64_t key, void* parent, const char* member) {
    return QShortcut_new7(key, (QObject*)parent, member);
}

QShortcut* q_shortcut_new8(int64_t key, void* parent, const char* member, const char* ambiguousMember) {
    return QShortcut_new8(key, (QObject*)parent, member, ambiguousMember);
}

QShortcut* q_shortcut_new9(int64_t key, void* parent, const char* member, const char* ambiguousMember, int64_t context) {
    return QShortcut_new9(key, (QObject*)parent, member, ambiguousMember, context);
}

const QMetaObject* q_shortcut_meta_object(void* self) {
    return QShortcut_MetaObject((QShortcut*)self);
}

void* q_shortcut_metacast(void* self, const char* param1) {
    return QShortcut_Metacast((QShortcut*)self, param1);
}

int32_t q_shortcut_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QShortcut_Metacall((QShortcut*)self, param1, param2, param3);
}

void q_shortcut_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QShortcut_OnMetacall((QShortcut*)self, (intptr_t)slot);
}

int32_t q_shortcut_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QShortcut_QBaseMetacall((QShortcut*)self, param1, param2, param3);
}

const char* q_shortcut_tr(const char* s) {
    libqt_string _str = QShortcut_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_shortcut_set_key(void* self, void* key) {
    QShortcut_SetKey((QShortcut*)self, (QKeySequence*)key);
}

QKeySequence* q_shortcut_key(void* self) {
    return QShortcut_Key((QShortcut*)self);
}

void q_shortcut_set_keys(void* self, int64_t key) {
    QShortcut_SetKeys((QShortcut*)self, key);
}

void q_shortcut_set_keys_with_keys(void* self, libqt_list keys) {
    QShortcut_SetKeysWithKeys((QShortcut*)self, keys);
}

libqt_list /* of QKeySequence* */ q_shortcut_keys(void* self) {
    libqt_list _arr = QShortcut_Keys((QShortcut*)self);
    return _arr;
}

void q_shortcut_set_enabled(void* self, bool enable) {
    QShortcut_SetEnabled((QShortcut*)self, enable);
}

bool q_shortcut_is_enabled(void* self) {
    return QShortcut_IsEnabled((QShortcut*)self);
}

void q_shortcut_set_context(void* self, int64_t context) {
    QShortcut_SetContext((QShortcut*)self, context);
}

int64_t q_shortcut_context(void* self) {
    return QShortcut_Context((QShortcut*)self);
}

void q_shortcut_set_auto_repeat(void* self, bool on) {
    QShortcut_SetAutoRepeat((QShortcut*)self, on);
}

bool q_shortcut_auto_repeat(void* self) {
    return QShortcut_AutoRepeat((QShortcut*)self);
}

int32_t q_shortcut_id(void* self) {
    return QShortcut_Id((QShortcut*)self);
}

void q_shortcut_set_whats_this(void* self, const char* text) {
    QShortcut_SetWhatsThis((QShortcut*)self, qstring(text));
}

const char* q_shortcut_whats_this(void* self) {
    libqt_string _str = QShortcut_WhatsThis((QShortcut*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_shortcut_activated(void* self) {
    QShortcut_Activated((QShortcut*)self);
}

void q_shortcut_on_activated(void* self, void (*slot)(void*)) {
    QShortcut_Connect_Activated((QShortcut*)self, (intptr_t)slot);
}

void q_shortcut_activated_ambiguously(void* self) {
    QShortcut_ActivatedAmbiguously((QShortcut*)self);
}

void q_shortcut_on_activated_ambiguously(void* self, void (*slot)(void*)) {
    QShortcut_Connect_ActivatedAmbiguously((QShortcut*)self, (intptr_t)slot);
}

bool q_shortcut_event(void* self, void* e) {
    return QShortcut_Event((QShortcut*)self, (QEvent*)e);
}

void q_shortcut_on_event(void* self, bool (*slot)(void*, void*)) {
    QShortcut_OnEvent((QShortcut*)self, (intptr_t)slot);
}

bool q_shortcut_qbase_event(void* self, void* e) {
    return QShortcut_QBaseEvent((QShortcut*)self, (QEvent*)e);
}

const char* q_shortcut_tr2(const char* s, const char* c) {
    libqt_string _str = QShortcut_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_shortcut_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QShortcut_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_shortcut_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_shortcut_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_shortcut_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_shortcut_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_shortcut_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_shortcut_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_shortcut_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_shortcut_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_shortcut_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_shortcut_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_shortcut_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_shortcut_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_shortcut_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_shortcut_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_shortcut_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_shortcut_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_shortcut_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_shortcut_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_shortcut_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_shortcut_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_shortcut_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_shortcut_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_shortcut_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_shortcut_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_shortcut_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_shortcut_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_shortcut_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_shortcut_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_shortcut_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_shortcut_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_shortcut_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_shortcut_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_shortcut_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_shortcut_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_shortcut_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_shortcut_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_shortcut_event_filter(void* self, void* watched, void* event) {
    return QShortcut_EventFilter((QShortcut*)self, (QObject*)watched, (QEvent*)event);
}

bool q_shortcut_qbase_event_filter(void* self, void* watched, void* event) {
    return QShortcut_QBaseEventFilter((QShortcut*)self, (QObject*)watched, (QEvent*)event);
}

void q_shortcut_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QShortcut_OnEventFilter((QShortcut*)self, (intptr_t)slot);
}

void q_shortcut_timer_event(void* self, void* event) {
    QShortcut_TimerEvent((QShortcut*)self, (QTimerEvent*)event);
}

void q_shortcut_qbase_timer_event(void* self, void* event) {
    QShortcut_QBaseTimerEvent((QShortcut*)self, (QTimerEvent*)event);
}

void q_shortcut_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QShortcut_OnTimerEvent((QShortcut*)self, (intptr_t)slot);
}

void q_shortcut_child_event(void* self, void* event) {
    QShortcut_ChildEvent((QShortcut*)self, (QChildEvent*)event);
}

void q_shortcut_qbase_child_event(void* self, void* event) {
    QShortcut_QBaseChildEvent((QShortcut*)self, (QChildEvent*)event);
}

void q_shortcut_on_child_event(void* self, void (*slot)(void*, void*)) {
    QShortcut_OnChildEvent((QShortcut*)self, (intptr_t)slot);
}

void q_shortcut_custom_event(void* self, void* event) {
    QShortcut_CustomEvent((QShortcut*)self, (QEvent*)event);
}

void q_shortcut_qbase_custom_event(void* self, void* event) {
    QShortcut_QBaseCustomEvent((QShortcut*)self, (QEvent*)event);
}

void q_shortcut_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QShortcut_OnCustomEvent((QShortcut*)self, (intptr_t)slot);
}

void q_shortcut_connect_notify(void* self, void* signal) {
    QShortcut_ConnectNotify((QShortcut*)self, (QMetaMethod*)signal);
}

void q_shortcut_qbase_connect_notify(void* self, void* signal) {
    QShortcut_QBaseConnectNotify((QShortcut*)self, (QMetaMethod*)signal);
}

void q_shortcut_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QShortcut_OnConnectNotify((QShortcut*)self, (intptr_t)slot);
}

void q_shortcut_disconnect_notify(void* self, void* signal) {
    QShortcut_DisconnectNotify((QShortcut*)self, (QMetaMethod*)signal);
}

void q_shortcut_qbase_disconnect_notify(void* self, void* signal) {
    QShortcut_QBaseDisconnectNotify((QShortcut*)self, (QMetaMethod*)signal);
}

void q_shortcut_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QShortcut_OnDisconnectNotify((QShortcut*)self, (intptr_t)slot);
}

QObject* q_shortcut_sender(void* self) {
    return QShortcut_Sender((QShortcut*)self);
}

QObject* q_shortcut_qbase_sender(void* self) {
    return QShortcut_QBaseSender((QShortcut*)self);
}

void q_shortcut_on_sender(void* self, QObject* (*slot)()) {
    QShortcut_OnSender((QShortcut*)self, (intptr_t)slot);
}

int32_t q_shortcut_sender_signal_index(void* self) {
    return QShortcut_SenderSignalIndex((QShortcut*)self);
}

int32_t q_shortcut_qbase_sender_signal_index(void* self) {
    return QShortcut_QBaseSenderSignalIndex((QShortcut*)self);
}

void q_shortcut_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QShortcut_OnSenderSignalIndex((QShortcut*)self, (intptr_t)slot);
}

int32_t q_shortcut_receivers(void* self, const char* signal) {
    return QShortcut_Receivers((QShortcut*)self, signal);
}

int32_t q_shortcut_qbase_receivers(void* self, const char* signal) {
    return QShortcut_QBaseReceivers((QShortcut*)self, signal);
}

void q_shortcut_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QShortcut_OnReceivers((QShortcut*)self, (intptr_t)slot);
}

bool q_shortcut_is_signal_connected(void* self, void* signal) {
    return QShortcut_IsSignalConnected((QShortcut*)self, (QMetaMethod*)signal);
}

bool q_shortcut_qbase_is_signal_connected(void* self, void* signal) {
    return QShortcut_QBaseIsSignalConnected((QShortcut*)self, (QMetaMethod*)signal);
}

void q_shortcut_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QShortcut_OnIsSignalConnected((QShortcut*)self, (intptr_t)slot);
}

void q_shortcut_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_shortcut_delete(void* self) {
    QShortcut_Delete((QShortcut*)(self));
}
