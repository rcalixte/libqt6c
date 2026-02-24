#include "libqaction.hpp"
#include "libqcoreevent.hpp"
#include "libqicon.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqactiongroup.hpp"
#include "libqactiongroup.h"

QActionGroup* q_actiongroup_new(void* parent) {
    return QActionGroup_new((QObject*)parent);
}

const QMetaObject* q_actiongroup_meta_object(void* self) {
    return QActionGroup_MetaObject((QActionGroup*)self);
}

void q_actiongroup_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QActionGroup_OnMetaObject((QActionGroup*)self, (intptr_t)callback);
}

const QMetaObject* q_actiongroup_super_meta_object(void* self) {
    return QActionGroup_SuperMetaObject((QActionGroup*)self);
}

void* q_actiongroup_metacast(void* self, const char* param1) {
    return QActionGroup_Metacast((QActionGroup*)self, param1);
}

void q_actiongroup_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QActionGroup_OnMetacast((QActionGroup*)self, (intptr_t)callback);
}

void* q_actiongroup_super_metacast(void* self, const char* param1) {
    return QActionGroup_SuperMetacast((QActionGroup*)self, param1);
}

int32_t q_actiongroup_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QActionGroup_Metacall((QActionGroup*)self, param1, param2, param3);
}

void q_actiongroup_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QActionGroup_OnMetacall((QActionGroup*)self, (intptr_t)callback);
}

int32_t q_actiongroup_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QActionGroup_SuperMetacall((QActionGroup*)self, param1, param2, param3);
}

const char* q_actiongroup_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* q_actiongroup_add_action(void* self, void* a) {
    return QActionGroup_AddAction((QActionGroup*)self, (QAction*)a);
}

QAction* q_actiongroup_add_action2(void* self, const char* text) {
    return QActionGroup_AddAction2((QActionGroup*)self, qstring(text));
}

QAction* q_actiongroup_add_action3(void* self, void* icon, const char* text) {
    return QActionGroup_AddAction3((QActionGroup*)self, (QIcon*)icon, qstring(text));
}

void q_actiongroup_remove_action(void* self, void* a) {
    QActionGroup_RemoveAction((QActionGroup*)self, (QAction*)a);
}

libqt_list /* of QAction* */ q_actiongroup_actions(void* self) {
    libqt_list _arr = QActionGroup_Actions((QActionGroup*)self);
    return _arr;
}

QAction* q_actiongroup_checked_action(void* self) {
    return QActionGroup_CheckedAction((QActionGroup*)self);
}

bool q_actiongroup_is_exclusive(void* self) {
    return QActionGroup_IsExclusive((QActionGroup*)self);
}

bool q_actiongroup_is_enabled(void* self) {
    return QActionGroup_IsEnabled((QActionGroup*)self);
}

bool q_actiongroup_is_visible(void* self) {
    return QActionGroup_IsVisible((QActionGroup*)self);
}

int32_t q_actiongroup_exclusion_policy(void* self) {
    return QActionGroup_ExclusionPolicy((QActionGroup*)self);
}

void q_actiongroup_set_enabled(void* self, bool enabled) {
    QActionGroup_SetEnabled((QActionGroup*)self, enabled);
}

void q_actiongroup_set_disabled(void* self, bool b) {
    QActionGroup_SetDisabled((QActionGroup*)self, b);
}

void q_actiongroup_set_visible(void* self, bool visible) {
    QActionGroup_SetVisible((QActionGroup*)self, visible);
}

void q_actiongroup_set_exclusive(void* self, bool exclusive) {
    QActionGroup_SetExclusive((QActionGroup*)self, exclusive);
}

void q_actiongroup_set_exclusion_policy(void* self, int32_t policy) {
    QActionGroup_SetExclusionPolicy((QActionGroup*)self, policy);
}

void q_actiongroup_triggered(void* self, void* param1) {
    QActionGroup_Triggered((QActionGroup*)self, (QAction*)param1);
}

void q_actiongroup_on_triggered(void* self, void (*callback)(void*, void*)) {
    QActionGroup_Connect_Triggered((QActionGroup*)self, (intptr_t)callback);
}

void q_actiongroup_hovered(void* self, void* param1) {
    QActionGroup_Hovered((QActionGroup*)self, (QAction*)param1);
}

void q_actiongroup_on_hovered(void* self, void (*callback)(void*, void*)) {
    QActionGroup_Connect_Hovered((QActionGroup*)self, (intptr_t)callback);
}

const char* q_actiongroup_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_actiongroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_actiongroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_actiongroup_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_actiongroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_actiongroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_actiongroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_actiongroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_actiongroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_actiongroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_actiongroup_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_actiongroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_actiongroup_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_actiongroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_actiongroup_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_actiongroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_actiongroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_actiongroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_actiongroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_actiongroup_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_actiongroup_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_actiongroup_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_actiongroup_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_actiongroup_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_actiongroup_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_actiongroup_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_actiongroup_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_actiongroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_actiongroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_actiongroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_actiongroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_actiongroup_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_actiongroup_dynamic_property_names\n");
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

QBindingStorage* q_actiongroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_actiongroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_actiongroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_actiongroup_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_actiongroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_actiongroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_actiongroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_actiongroup_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_actiongroup_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_actiongroup_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_actiongroup_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_actiongroup_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_actiongroup_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_actiongroup_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_actiongroup_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_actiongroup_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_actiongroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_actiongroup_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_actiongroup_event(void* self, void* event) {
    return QActionGroup_Event((QActionGroup*)self, (QEvent*)event);
}

bool q_actiongroup_super_event(void* self, void* event) {
    return QActionGroup_SuperEvent((QActionGroup*)self, (QEvent*)event);
}

void q_actiongroup_on_event(void* self, bool (*callback)(void*, void*)) {
    QActionGroup_OnEvent((QActionGroup*)self, (intptr_t)callback);
}

bool q_actiongroup_event_filter(void* self, void* watched, void* event) {
    return QActionGroup_EventFilter((QActionGroup*)self, (QObject*)watched, (QEvent*)event);
}

bool q_actiongroup_super_event_filter(void* self, void* watched, void* event) {
    return QActionGroup_SuperEventFilter((QActionGroup*)self, (QObject*)watched, (QEvent*)event);
}

void q_actiongroup_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QActionGroup_OnEventFilter((QActionGroup*)self, (intptr_t)callback);
}

void q_actiongroup_timer_event(void* self, void* event) {
    QActionGroup_TimerEvent((QActionGroup*)self, (QTimerEvent*)event);
}

void q_actiongroup_super_timer_event(void* self, void* event) {
    QActionGroup_SuperTimerEvent((QActionGroup*)self, (QTimerEvent*)event);
}

void q_actiongroup_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QActionGroup_OnTimerEvent((QActionGroup*)self, (intptr_t)callback);
}

void q_actiongroup_child_event(void* self, void* event) {
    QActionGroup_ChildEvent((QActionGroup*)self, (QChildEvent*)event);
}

void q_actiongroup_super_child_event(void* self, void* event) {
    QActionGroup_SuperChildEvent((QActionGroup*)self, (QChildEvent*)event);
}

void q_actiongroup_on_child_event(void* self, void (*callback)(void*, void*)) {
    QActionGroup_OnChildEvent((QActionGroup*)self, (intptr_t)callback);
}

void q_actiongroup_custom_event(void* self, void* event) {
    QActionGroup_CustomEvent((QActionGroup*)self, (QEvent*)event);
}

void q_actiongroup_super_custom_event(void* self, void* event) {
    QActionGroup_SuperCustomEvent((QActionGroup*)self, (QEvent*)event);
}

void q_actiongroup_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QActionGroup_OnCustomEvent((QActionGroup*)self, (intptr_t)callback);
}

void q_actiongroup_connect_notify(void* self, void* signal) {
    QActionGroup_ConnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

void q_actiongroup_super_connect_notify(void* self, void* signal) {
    QActionGroup_SuperConnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

void q_actiongroup_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QActionGroup_OnConnectNotify((QActionGroup*)self, (intptr_t)callback);
}

void q_actiongroup_disconnect_notify(void* self, void* signal) {
    QActionGroup_DisconnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

void q_actiongroup_super_disconnect_notify(void* self, void* signal) {
    QActionGroup_SuperDisconnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

void q_actiongroup_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QActionGroup_OnDisconnectNotify((QActionGroup*)self, (intptr_t)callback);
}

QObject* q_actiongroup_sender(void* self) {
    return QActionGroup_Sender((QActionGroup*)self);
}

QObject* q_actiongroup_super_sender(void* self) {
    return QActionGroup_SuperSender((QActionGroup*)self);
}

void q_actiongroup_on_sender(void* self, QObject* (*callback)()) {
    QActionGroup_OnSender((QActionGroup*)self, (intptr_t)callback);
}

int32_t q_actiongroup_sender_signal_index(void* self) {
    return QActionGroup_SenderSignalIndex((QActionGroup*)self);
}

int32_t q_actiongroup_super_sender_signal_index(void* self) {
    return QActionGroup_SuperSenderSignalIndex((QActionGroup*)self);
}

void q_actiongroup_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QActionGroup_OnSenderSignalIndex((QActionGroup*)self, (intptr_t)callback);
}

int32_t q_actiongroup_receivers(void* self, const char* signal) {
    return QActionGroup_Receivers((QActionGroup*)self, signal);
}

int32_t q_actiongroup_super_receivers(void* self, const char* signal) {
    return QActionGroup_SuperReceivers((QActionGroup*)self, signal);
}

void q_actiongroup_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QActionGroup_OnReceivers((QActionGroup*)self, (intptr_t)callback);
}

bool q_actiongroup_is_signal_connected(void* self, void* signal) {
    return QActionGroup_IsSignalConnected((QActionGroup*)self, (QMetaMethod*)signal);
}

bool q_actiongroup_super_is_signal_connected(void* self, void* signal) {
    return QActionGroup_SuperIsSignalConnected((QActionGroup*)self, (QMetaMethod*)signal);
}

void q_actiongroup_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QActionGroup_OnIsSignalConnected((QActionGroup*)self, (intptr_t)callback);
}

void q_actiongroup_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_actiongroup_delete(void* self) {
    QActionGroup_Delete((QActionGroup*)(self));
}
