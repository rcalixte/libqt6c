#include "libqaction.hpp"
#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqicon.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqactiongroup.hpp"
#include "libqactiongroup.h"

QActionGroup* q_actiongroup_new(void* parent) {
    return QActionGroup_new((QObject*)parent);
}

QMetaObject* q_actiongroup_meta_object(void* self) {
    return QActionGroup_MetaObject((QActionGroup*)self);
}

void* q_actiongroup_metacast(void* self, const char* param1) {
    return QActionGroup_Metacast((QActionGroup*)self, param1);
}

int32_t q_actiongroup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QActionGroup_Metacall((QActionGroup*)self, param1, param2, param3);
}

void q_actiongroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QActionGroup_OnMetacall((QActionGroup*)self, (intptr_t)slot);
}

int32_t q_actiongroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QActionGroup_QBaseMetacall((QActionGroup*)self, param1, param2, param3);
}

const char* q_actiongroup_tr(const char* s) {
    libqt_string _str = QActionGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAction* q_actiongroup_add_action(void* self, void* a) {
    return QActionGroup_AddAction((QActionGroup*)self, (QAction*)a);
}

QAction* q_actiongroup_add_action_with_text(void* self, const char* text) {
    return QActionGroup_AddActionWithText((QActionGroup*)self, qstring(text));
}

QAction* q_actiongroup_add_action2(void* self, void* icon, const char* text) {
    return QActionGroup_AddAction2((QActionGroup*)self, (QIcon*)icon, qstring(text));
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

int64_t q_actiongroup_exclusion_policy(void* self) {
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

void q_actiongroup_set_exclusion_policy(void* self, int64_t policy) {
    QActionGroup_SetExclusionPolicy((QActionGroup*)self, policy);
}

void q_actiongroup_triggered(void* self, void* param1) {
    QActionGroup_Triggered((QActionGroup*)self, (QAction*)param1);
}

void q_actiongroup_on_triggered(void* self, void (*slot)(void*, void*)) {
    QActionGroup_Connect_Triggered((QActionGroup*)self, (intptr_t)slot);
}

void q_actiongroup_hovered(void* self, void* param1) {
    QActionGroup_Hovered((QActionGroup*)self, (QAction*)param1);
}

void q_actiongroup_on_hovered(void* self, void (*slot)(void*, void*)) {
    QActionGroup_Connect_Hovered((QActionGroup*)self, (intptr_t)slot);
}

const char* q_actiongroup_tr2(const char* s, const char* c) {
    libqt_string _str = QActionGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_actiongroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QActionGroup_Tr3(s, c, n);
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

void q_actiongroup_set_object_name(void* self, char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
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

void q_actiongroup_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_actiongroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_actiongroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
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

QMetaObject__Connection* q_actiongroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_actiongroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_actiongroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_actiongroup_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
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
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_actiongroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_actiongroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_actiongroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_actiongroup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
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

int32_t q_actiongroup_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_actiongroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_actiongroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_actiongroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_actiongroup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_actiongroup_event(void* self, void* event) {
    return QActionGroup_Event((QActionGroup*)self, (QEvent*)event);
}

bool q_actiongroup_qbase_event(void* self, void* event) {
    return QActionGroup_QBaseEvent((QActionGroup*)self, (QEvent*)event);
}

void q_actiongroup_on_event(void* self, bool (*slot)(void*, void*)) {
    QActionGroup_OnEvent((QActionGroup*)self, (intptr_t)slot);
}

bool q_actiongroup_event_filter(void* self, void* watched, void* event) {
    return QActionGroup_EventFilter((QActionGroup*)self, (QObject*)watched, (QEvent*)event);
}

bool q_actiongroup_qbase_event_filter(void* self, void* watched, void* event) {
    return QActionGroup_QBaseEventFilter((QActionGroup*)self, (QObject*)watched, (QEvent*)event);
}

void q_actiongroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QActionGroup_OnEventFilter((QActionGroup*)self, (intptr_t)slot);
}

void q_actiongroup_timer_event(void* self, void* event) {
    QActionGroup_TimerEvent((QActionGroup*)self, (QTimerEvent*)event);
}

void q_actiongroup_qbase_timer_event(void* self, void* event) {
    QActionGroup_QBaseTimerEvent((QActionGroup*)self, (QTimerEvent*)event);
}

void q_actiongroup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QActionGroup_OnTimerEvent((QActionGroup*)self, (intptr_t)slot);
}

void q_actiongroup_child_event(void* self, void* event) {
    QActionGroup_ChildEvent((QActionGroup*)self, (QChildEvent*)event);
}

void q_actiongroup_qbase_child_event(void* self, void* event) {
    QActionGroup_QBaseChildEvent((QActionGroup*)self, (QChildEvent*)event);
}

void q_actiongroup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QActionGroup_OnChildEvent((QActionGroup*)self, (intptr_t)slot);
}

void q_actiongroup_custom_event(void* self, void* event) {
    QActionGroup_CustomEvent((QActionGroup*)self, (QEvent*)event);
}

void q_actiongroup_qbase_custom_event(void* self, void* event) {
    QActionGroup_QBaseCustomEvent((QActionGroup*)self, (QEvent*)event);
}

void q_actiongroup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QActionGroup_OnCustomEvent((QActionGroup*)self, (intptr_t)slot);
}

void q_actiongroup_connect_notify(void* self, void* signal) {
    QActionGroup_ConnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

void q_actiongroup_qbase_connect_notify(void* self, void* signal) {
    QActionGroup_QBaseConnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

void q_actiongroup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QActionGroup_OnConnectNotify((QActionGroup*)self, (intptr_t)slot);
}

void q_actiongroup_disconnect_notify(void* self, void* signal) {
    QActionGroup_DisconnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

void q_actiongroup_qbase_disconnect_notify(void* self, void* signal) {
    QActionGroup_QBaseDisconnectNotify((QActionGroup*)self, (QMetaMethod*)signal);
}

void q_actiongroup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QActionGroup_OnDisconnectNotify((QActionGroup*)self, (intptr_t)slot);
}

QObject* q_actiongroup_sender(void* self) {
    return QActionGroup_Sender((QActionGroup*)self);
}

QObject* q_actiongroup_qbase_sender(void* self) {
    return QActionGroup_QBaseSender((QActionGroup*)self);
}

void q_actiongroup_on_sender(void* self, QObject* (*slot)()) {
    QActionGroup_OnSender((QActionGroup*)self, (intptr_t)slot);
}

int32_t q_actiongroup_sender_signal_index(void* self) {
    return QActionGroup_SenderSignalIndex((QActionGroup*)self);
}

int32_t q_actiongroup_qbase_sender_signal_index(void* self) {
    return QActionGroup_QBaseSenderSignalIndex((QActionGroup*)self);
}

void q_actiongroup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QActionGroup_OnSenderSignalIndex((QActionGroup*)self, (intptr_t)slot);
}

int32_t q_actiongroup_receivers(void* self, const char* signal) {
    return QActionGroup_Receivers((QActionGroup*)self, signal);
}

int32_t q_actiongroup_qbase_receivers(void* self, const char* signal) {
    return QActionGroup_QBaseReceivers((QActionGroup*)self, signal);
}

void q_actiongroup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QActionGroup_OnReceivers((QActionGroup*)self, (intptr_t)slot);
}

bool q_actiongroup_is_signal_connected(void* self, void* signal) {
    return QActionGroup_IsSignalConnected((QActionGroup*)self, (QMetaMethod*)signal);
}

bool q_actiongroup_qbase_is_signal_connected(void* self, void* signal) {
    return QActionGroup_QBaseIsSignalConnected((QActionGroup*)self, (QMetaMethod*)signal);
}

void q_actiongroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QActionGroup_OnIsSignalConnected((QActionGroup*)self, (intptr_t)slot);
}

void q_actiongroup_delete(void* self) {
    QActionGroup_Delete((QActionGroup*)(self));
}
