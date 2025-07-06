#include "libqabstractanimation.hpp"
#include "libqanimationgroup.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpauseanimation.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqsequentialanimationgroup.hpp"
#include "libqsequentialanimationgroup.h"

QSequentialAnimationGroup* q_sequentialanimationgroup_new() {
    return QSequentialAnimationGroup_new();
}

QSequentialAnimationGroup* q_sequentialanimationgroup_new2(void* parent) {
    return QSequentialAnimationGroup_new2((QObject*)parent);
}

const QMetaObject* q_sequentialanimationgroup_meta_object(void* self) {
    return QSequentialAnimationGroup_MetaObject((QSequentialAnimationGroup*)self);
}

void* q_sequentialanimationgroup_metacast(void* self, const char* param1) {
    return QSequentialAnimationGroup_Metacast((QSequentialAnimationGroup*)self, param1);
}

int32_t q_sequentialanimationgroup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSequentialAnimationGroup_Metacall((QSequentialAnimationGroup*)self, param1, param2, param3);
}

void q_sequentialanimationgroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSequentialAnimationGroup_OnMetacall((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

int32_t q_sequentialanimationgroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSequentialAnimationGroup_QBaseMetacall((QSequentialAnimationGroup*)self, param1, param2, param3);
}

const char* q_sequentialanimationgroup_tr(const char* s) {
    libqt_string _str = QSequentialAnimationGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPauseAnimation* q_sequentialanimationgroup_add_pause(void* self, int msecs) {
    return QSequentialAnimationGroup_AddPause((QSequentialAnimationGroup*)self, msecs);
}

QPauseAnimation* q_sequentialanimationgroup_insert_pause(void* self, int index, int msecs) {
    return QSequentialAnimationGroup_InsertPause((QSequentialAnimationGroup*)self, index, msecs);
}

QAbstractAnimation* q_sequentialanimationgroup_current_animation(void* self) {
    return QSequentialAnimationGroup_CurrentAnimation((QSequentialAnimationGroup*)self);
}

int32_t q_sequentialanimationgroup_duration(void* self) {
    return QSequentialAnimationGroup_Duration((QSequentialAnimationGroup*)self);
}

void q_sequentialanimationgroup_on_duration(void* self, int32_t (*slot)()) {
    QSequentialAnimationGroup_OnDuration((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

int32_t q_sequentialanimationgroup_qbase_duration(void* self) {
    return QSequentialAnimationGroup_QBaseDuration((QSequentialAnimationGroup*)self);
}

void q_sequentialanimationgroup_current_animation_changed(void* self, void* current) {
    QSequentialAnimationGroup_CurrentAnimationChanged((QSequentialAnimationGroup*)self, (QAbstractAnimation*)current);
}

void q_sequentialanimationgroup_on_current_animation_changed(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_Connect_CurrentAnimationChanged((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

bool q_sequentialanimationgroup_event(void* self, void* event) {
    return QSequentialAnimationGroup_Event((QSequentialAnimationGroup*)self, (QEvent*)event);
}

void q_sequentialanimationgroup_on_event(void* self, bool (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnEvent((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

bool q_sequentialanimationgroup_qbase_event(void* self, void* event) {
    return QSequentialAnimationGroup_QBaseEvent((QSequentialAnimationGroup*)self, (QEvent*)event);
}

void q_sequentialanimationgroup_update_current_time(void* self, int param1) {
    QSequentialAnimationGroup_UpdateCurrentTime((QSequentialAnimationGroup*)self, param1);
}

void q_sequentialanimationgroup_on_update_current_time(void* self, void (*slot)(void*, int)) {
    QSequentialAnimationGroup_OnUpdateCurrentTime((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_qbase_update_current_time(void* self, int param1) {
    QSequentialAnimationGroup_QBaseUpdateCurrentTime((QSequentialAnimationGroup*)self, param1);
}

void q_sequentialanimationgroup_update_state(void* self, int64_t newState, int64_t oldState) {
    QSequentialAnimationGroup_UpdateState((QSequentialAnimationGroup*)self, newState, oldState);
}

void q_sequentialanimationgroup_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QSequentialAnimationGroup_OnUpdateState((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_qbase_update_state(void* self, int64_t newState, int64_t oldState) {
    QSequentialAnimationGroup_QBaseUpdateState((QSequentialAnimationGroup*)self, newState, oldState);
}

void q_sequentialanimationgroup_update_direction(void* self, int64_t direction) {
    QSequentialAnimationGroup_UpdateDirection((QSequentialAnimationGroup*)self, direction);
}

void q_sequentialanimationgroup_on_update_direction(void* self, void (*slot)(void*, int64_t)) {
    QSequentialAnimationGroup_OnUpdateDirection((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_qbase_update_direction(void* self, int64_t direction) {
    QSequentialAnimationGroup_QBaseUpdateDirection((QSequentialAnimationGroup*)self, direction);
}

const char* q_sequentialanimationgroup_tr2(const char* s, const char* c) {
    libqt_string _str = QSequentialAnimationGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sequentialanimationgroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSequentialAnimationGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractAnimation* q_sequentialanimationgroup_animation_at(void* self, int index) {
    return QAnimationGroup_AnimationAt((QAnimationGroup*)self, index);
}

int32_t q_sequentialanimationgroup_animation_count(void* self) {
    return QAnimationGroup_AnimationCount((QAnimationGroup*)self);
}

int32_t q_sequentialanimationgroup_index_of_animation(void* self, void* animation) {
    return QAnimationGroup_IndexOfAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

void q_sequentialanimationgroup_add_animation(void* self, void* animation) {
    QAnimationGroup_AddAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

void q_sequentialanimationgroup_insert_animation(void* self, int index, void* animation) {
    QAnimationGroup_InsertAnimation((QAnimationGroup*)self, index, (QAbstractAnimation*)animation);
}

void q_sequentialanimationgroup_remove_animation(void* self, void* animation) {
    QAnimationGroup_RemoveAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

QAbstractAnimation* q_sequentialanimationgroup_take_animation(void* self, int index) {
    return QAnimationGroup_TakeAnimation((QAnimationGroup*)self, index);
}

void q_sequentialanimationgroup_clear(void* self) {
    QAnimationGroup_Clear((QAnimationGroup*)self);
}

int64_t q_sequentialanimationgroup_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

QAnimationGroup* q_sequentialanimationgroup_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

int64_t q_sequentialanimationgroup_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

void q_sequentialanimationgroup_set_direction(void* self, int64_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

int32_t q_sequentialanimationgroup_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

int32_t q_sequentialanimationgroup_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

int32_t q_sequentialanimationgroup_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

void q_sequentialanimationgroup_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

int32_t q_sequentialanimationgroup_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

int32_t q_sequentialanimationgroup_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

void q_sequentialanimationgroup_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

void q_sequentialanimationgroup_on_finished(void* self, void (*slot)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_state_changed(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

void q_sequentialanimationgroup_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

void q_sequentialanimationgroup_on_current_loop_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_direction_changed(void* self, int64_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

void q_sequentialanimationgroup_on_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

void q_sequentialanimationgroup_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

void q_sequentialanimationgroup_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

void q_sequentialanimationgroup_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

void q_sequentialanimationgroup_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

void q_sequentialanimationgroup_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

void q_sequentialanimationgroup_start1(void* self, int64_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

const char* q_sequentialanimationgroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sequentialanimationgroup_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sequentialanimationgroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sequentialanimationgroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sequentialanimationgroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sequentialanimationgroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sequentialanimationgroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sequentialanimationgroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sequentialanimationgroup_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sequentialanimationgroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_sequentialanimationgroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sequentialanimationgroup_kill_timer_with_id(void* self, int64_t id) {
    QObject_KillTimerWithId((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sequentialanimationgroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sequentialanimationgroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sequentialanimationgroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sequentialanimationgroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sequentialanimationgroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sequentialanimationgroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sequentialanimationgroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sequentialanimationgroup_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_sequentialanimationgroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sequentialanimationgroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sequentialanimationgroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sequentialanimationgroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sequentialanimationgroup_dynamic_property_names(void* self) {
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

QBindingStorage* q_sequentialanimationgroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sequentialanimationgroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sequentialanimationgroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sequentialanimationgroup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_sequentialanimationgroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sequentialanimationgroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sequentialanimationgroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sequentialanimationgroup_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sequentialanimationgroup_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_sequentialanimationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_sequentialanimationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_sequentialanimationgroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sequentialanimationgroup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_sequentialanimationgroup_event_filter(void* self, void* watched, void* event) {
    return QSequentialAnimationGroup_EventFilter((QSequentialAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sequentialanimationgroup_qbase_event_filter(void* self, void* watched, void* event) {
    return QSequentialAnimationGroup_QBaseEventFilter((QSequentialAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

void q_sequentialanimationgroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSequentialAnimationGroup_OnEventFilter((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_timer_event(void* self, void* event) {
    QSequentialAnimationGroup_TimerEvent((QSequentialAnimationGroup*)self, (QTimerEvent*)event);
}

void q_sequentialanimationgroup_qbase_timer_event(void* self, void* event) {
    QSequentialAnimationGroup_QBaseTimerEvent((QSequentialAnimationGroup*)self, (QTimerEvent*)event);
}

void q_sequentialanimationgroup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnTimerEvent((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_child_event(void* self, void* event) {
    QSequentialAnimationGroup_ChildEvent((QSequentialAnimationGroup*)self, (QChildEvent*)event);
}

void q_sequentialanimationgroup_qbase_child_event(void* self, void* event) {
    QSequentialAnimationGroup_QBaseChildEvent((QSequentialAnimationGroup*)self, (QChildEvent*)event);
}

void q_sequentialanimationgroup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnChildEvent((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_custom_event(void* self, void* event) {
    QSequentialAnimationGroup_CustomEvent((QSequentialAnimationGroup*)self, (QEvent*)event);
}

void q_sequentialanimationgroup_qbase_custom_event(void* self, void* event) {
    QSequentialAnimationGroup_QBaseCustomEvent((QSequentialAnimationGroup*)self, (QEvent*)event);
}

void q_sequentialanimationgroup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnCustomEvent((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_connect_notify(void* self, void* signal) {
    QSequentialAnimationGroup_ConnectNotify((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_sequentialanimationgroup_qbase_connect_notify(void* self, void* signal) {
    QSequentialAnimationGroup_QBaseConnectNotify((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_sequentialanimationgroup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnConnectNotify((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_disconnect_notify(void* self, void* signal) {
    QSequentialAnimationGroup_DisconnectNotify((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_sequentialanimationgroup_qbase_disconnect_notify(void* self, void* signal) {
    QSequentialAnimationGroup_QBaseDisconnectNotify((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_sequentialanimationgroup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnDisconnectNotify((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

QObject* q_sequentialanimationgroup_sender(void* self) {
    return QSequentialAnimationGroup_Sender((QSequentialAnimationGroup*)self);
}

QObject* q_sequentialanimationgroup_qbase_sender(void* self) {
    return QSequentialAnimationGroup_QBaseSender((QSequentialAnimationGroup*)self);
}

void q_sequentialanimationgroup_on_sender(void* self, QObject* (*slot)()) {
    QSequentialAnimationGroup_OnSender((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

int32_t q_sequentialanimationgroup_sender_signal_index(void* self) {
    return QSequentialAnimationGroup_SenderSignalIndex((QSequentialAnimationGroup*)self);
}

int32_t q_sequentialanimationgroup_qbase_sender_signal_index(void* self) {
    return QSequentialAnimationGroup_QBaseSenderSignalIndex((QSequentialAnimationGroup*)self);
}

void q_sequentialanimationgroup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSequentialAnimationGroup_OnSenderSignalIndex((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

int32_t q_sequentialanimationgroup_receivers(void* self, const char* signal) {
    return QSequentialAnimationGroup_Receivers((QSequentialAnimationGroup*)self, signal);
}

int32_t q_sequentialanimationgroup_qbase_receivers(void* self, const char* signal) {
    return QSequentialAnimationGroup_QBaseReceivers((QSequentialAnimationGroup*)self, signal);
}

void q_sequentialanimationgroup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSequentialAnimationGroup_OnReceivers((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

bool q_sequentialanimationgroup_is_signal_connected(void* self, void* signal) {
    return QSequentialAnimationGroup_IsSignalConnected((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

bool q_sequentialanimationgroup_qbase_is_signal_connected(void* self, void* signal) {
    return QSequentialAnimationGroup_QBaseIsSignalConnected((QSequentialAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_sequentialanimationgroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSequentialAnimationGroup_OnIsSignalConnected((QSequentialAnimationGroup*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_sequentialanimationgroup_delete(void* self) {
    QSequentialAnimationGroup_Delete((QSequentialAnimationGroup*)(self));
}
