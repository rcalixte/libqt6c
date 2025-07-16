#include "libqabstractanimation.hpp"
#include "libqanimationgroup.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqparallelanimationgroup.hpp"
#include "libqparallelanimationgroup.h"

QParallelAnimationGroup* q_parallelanimationgroup_new() {
    return QParallelAnimationGroup_new();
}

QParallelAnimationGroup* q_parallelanimationgroup_new2(void* parent) {
    return QParallelAnimationGroup_new2((QObject*)parent);
}

const QMetaObject* q_parallelanimationgroup_meta_object(void* self) {
    return QParallelAnimationGroup_MetaObject((QParallelAnimationGroup*)self);
}

void* q_parallelanimationgroup_metacast(void* self, const char* param1) {
    return QParallelAnimationGroup_Metacast((QParallelAnimationGroup*)self, param1);
}

int32_t q_parallelanimationgroup_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QParallelAnimationGroup_Metacall((QParallelAnimationGroup*)self, param1, param2, param3);
}

void q_parallelanimationgroup_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QParallelAnimationGroup_OnMetacall((QParallelAnimationGroup*)self, (intptr_t)slot);
}

int32_t q_parallelanimationgroup_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QParallelAnimationGroup_QBaseMetacall((QParallelAnimationGroup*)self, param1, param2, param3);
}

const char* q_parallelanimationgroup_tr(const char* s) {
    libqt_string _str = QParallelAnimationGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_parallelanimationgroup_duration(void* self) {
    return QParallelAnimationGroup_Duration((QParallelAnimationGroup*)self);
}

void q_parallelanimationgroup_on_duration(void* self, int32_t (*slot)()) {
    QParallelAnimationGroup_OnDuration((QParallelAnimationGroup*)self, (intptr_t)slot);
}

int32_t q_parallelanimationgroup_qbase_duration(void* self) {
    return QParallelAnimationGroup_QBaseDuration((QParallelAnimationGroup*)self);
}

bool q_parallelanimationgroup_event(void* self, void* event) {
    return QParallelAnimationGroup_Event((QParallelAnimationGroup*)self, (QEvent*)event);
}

void q_parallelanimationgroup_on_event(void* self, bool (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnEvent((QParallelAnimationGroup*)self, (intptr_t)slot);
}

bool q_parallelanimationgroup_qbase_event(void* self, void* event) {
    return QParallelAnimationGroup_QBaseEvent((QParallelAnimationGroup*)self, (QEvent*)event);
}

void q_parallelanimationgroup_update_current_time(void* self, int currentTime) {
    QParallelAnimationGroup_UpdateCurrentTime((QParallelAnimationGroup*)self, currentTime);
}

void q_parallelanimationgroup_on_update_current_time(void* self, void (*slot)(void*, int)) {
    QParallelAnimationGroup_OnUpdateCurrentTime((QParallelAnimationGroup*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_qbase_update_current_time(void* self, int currentTime) {
    QParallelAnimationGroup_QBaseUpdateCurrentTime((QParallelAnimationGroup*)self, currentTime);
}

void q_parallelanimationgroup_update_state(void* self, int64_t newState, int64_t oldState) {
    QParallelAnimationGroup_UpdateState((QParallelAnimationGroup*)self, newState, oldState);
}

void q_parallelanimationgroup_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QParallelAnimationGroup_OnUpdateState((QParallelAnimationGroup*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_qbase_update_state(void* self, int64_t newState, int64_t oldState) {
    QParallelAnimationGroup_QBaseUpdateState((QParallelAnimationGroup*)self, newState, oldState);
}

void q_parallelanimationgroup_update_direction(void* self, int64_t direction) {
    QParallelAnimationGroup_UpdateDirection((QParallelAnimationGroup*)self, direction);
}

void q_parallelanimationgroup_on_update_direction(void* self, void (*slot)(void*, int64_t)) {
    QParallelAnimationGroup_OnUpdateDirection((QParallelAnimationGroup*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_qbase_update_direction(void* self, int64_t direction) {
    QParallelAnimationGroup_QBaseUpdateDirection((QParallelAnimationGroup*)self, direction);
}

const char* q_parallelanimationgroup_tr2(const char* s, const char* c) {
    libqt_string _str = QParallelAnimationGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_parallelanimationgroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QParallelAnimationGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractAnimation* q_parallelanimationgroup_animation_at(void* self, int index) {
    return QAnimationGroup_AnimationAt((QAnimationGroup*)self, index);
}

int32_t q_parallelanimationgroup_animation_count(void* self) {
    return QAnimationGroup_AnimationCount((QAnimationGroup*)self);
}

int32_t q_parallelanimationgroup_index_of_animation(void* self, void* animation) {
    return QAnimationGroup_IndexOfAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

void q_parallelanimationgroup_add_animation(void* self, void* animation) {
    QAnimationGroup_AddAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

void q_parallelanimationgroup_insert_animation(void* self, int index, void* animation) {
    QAnimationGroup_InsertAnimation((QAnimationGroup*)self, index, (QAbstractAnimation*)animation);
}

void q_parallelanimationgroup_remove_animation(void* self, void* animation) {
    QAnimationGroup_RemoveAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

QAbstractAnimation* q_parallelanimationgroup_take_animation(void* self, int index) {
    return QAnimationGroup_TakeAnimation((QAnimationGroup*)self, index);
}

void q_parallelanimationgroup_clear(void* self) {
    QAnimationGroup_Clear((QAnimationGroup*)self);
}

int64_t q_parallelanimationgroup_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

QAnimationGroup* q_parallelanimationgroup_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

int64_t q_parallelanimationgroup_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

void q_parallelanimationgroup_set_direction(void* self, int64_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

int32_t q_parallelanimationgroup_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

int32_t q_parallelanimationgroup_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

int32_t q_parallelanimationgroup_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

void q_parallelanimationgroup_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

int32_t q_parallelanimationgroup_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

int32_t q_parallelanimationgroup_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

void q_parallelanimationgroup_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

void q_parallelanimationgroup_on_finished(void* self, void (*slot)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_state_changed(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

void q_parallelanimationgroup_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

void q_parallelanimationgroup_on_current_loop_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_direction_changed(void* self, int64_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

void q_parallelanimationgroup_on_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

void q_parallelanimationgroup_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

void q_parallelanimationgroup_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

void q_parallelanimationgroup_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

void q_parallelanimationgroup_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

void q_parallelanimationgroup_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

void q_parallelanimationgroup_start1(void* self, int64_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

const char* q_parallelanimationgroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_parallelanimationgroup_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_parallelanimationgroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_parallelanimationgroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_parallelanimationgroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_parallelanimationgroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_parallelanimationgroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_parallelanimationgroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_parallelanimationgroup_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_parallelanimationgroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_parallelanimationgroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_parallelanimationgroup_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_parallelanimationgroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_parallelanimationgroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_parallelanimationgroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_parallelanimationgroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_parallelanimationgroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_parallelanimationgroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_parallelanimationgroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_parallelanimationgroup_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_parallelanimationgroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_parallelanimationgroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_parallelanimationgroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_parallelanimationgroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_parallelanimationgroup_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_parallelanimationgroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_parallelanimationgroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_parallelanimationgroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_parallelanimationgroup_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_parallelanimationgroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_parallelanimationgroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_parallelanimationgroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_parallelanimationgroup_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_parallelanimationgroup_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_parallelanimationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_parallelanimationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_parallelanimationgroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_parallelanimationgroup_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_parallelanimationgroup_event_filter(void* self, void* watched, void* event) {
    return QParallelAnimationGroup_EventFilter((QParallelAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

bool q_parallelanimationgroup_qbase_event_filter(void* self, void* watched, void* event) {
    return QParallelAnimationGroup_QBaseEventFilter((QParallelAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

void q_parallelanimationgroup_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QParallelAnimationGroup_OnEventFilter((QParallelAnimationGroup*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_timer_event(void* self, void* event) {
    QParallelAnimationGroup_TimerEvent((QParallelAnimationGroup*)self, (QTimerEvent*)event);
}

void q_parallelanimationgroup_qbase_timer_event(void* self, void* event) {
    QParallelAnimationGroup_QBaseTimerEvent((QParallelAnimationGroup*)self, (QTimerEvent*)event);
}

void q_parallelanimationgroup_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnTimerEvent((QParallelAnimationGroup*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_child_event(void* self, void* event) {
    QParallelAnimationGroup_ChildEvent((QParallelAnimationGroup*)self, (QChildEvent*)event);
}

void q_parallelanimationgroup_qbase_child_event(void* self, void* event) {
    QParallelAnimationGroup_QBaseChildEvent((QParallelAnimationGroup*)self, (QChildEvent*)event);
}

void q_parallelanimationgroup_on_child_event(void* self, void (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnChildEvent((QParallelAnimationGroup*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_custom_event(void* self, void* event) {
    QParallelAnimationGroup_CustomEvent((QParallelAnimationGroup*)self, (QEvent*)event);
}

void q_parallelanimationgroup_qbase_custom_event(void* self, void* event) {
    QParallelAnimationGroup_QBaseCustomEvent((QParallelAnimationGroup*)self, (QEvent*)event);
}

void q_parallelanimationgroup_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnCustomEvent((QParallelAnimationGroup*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_connect_notify(void* self, void* signal) {
    QParallelAnimationGroup_ConnectNotify((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_parallelanimationgroup_qbase_connect_notify(void* self, void* signal) {
    QParallelAnimationGroup_QBaseConnectNotify((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_parallelanimationgroup_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnConnectNotify((QParallelAnimationGroup*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_disconnect_notify(void* self, void* signal) {
    QParallelAnimationGroup_DisconnectNotify((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_parallelanimationgroup_qbase_disconnect_notify(void* self, void* signal) {
    QParallelAnimationGroup_QBaseDisconnectNotify((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_parallelanimationgroup_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnDisconnectNotify((QParallelAnimationGroup*)self, (intptr_t)slot);
}

QObject* q_parallelanimationgroup_sender(void* self) {
    return QParallelAnimationGroup_Sender((QParallelAnimationGroup*)self);
}

QObject* q_parallelanimationgroup_qbase_sender(void* self) {
    return QParallelAnimationGroup_QBaseSender((QParallelAnimationGroup*)self);
}

void q_parallelanimationgroup_on_sender(void* self, QObject* (*slot)()) {
    QParallelAnimationGroup_OnSender((QParallelAnimationGroup*)self, (intptr_t)slot);
}

int32_t q_parallelanimationgroup_sender_signal_index(void* self) {
    return QParallelAnimationGroup_SenderSignalIndex((QParallelAnimationGroup*)self);
}

int32_t q_parallelanimationgroup_qbase_sender_signal_index(void* self) {
    return QParallelAnimationGroup_QBaseSenderSignalIndex((QParallelAnimationGroup*)self);
}

void q_parallelanimationgroup_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QParallelAnimationGroup_OnSenderSignalIndex((QParallelAnimationGroup*)self, (intptr_t)slot);
}

int32_t q_parallelanimationgroup_receivers(void* self, const char* signal) {
    return QParallelAnimationGroup_Receivers((QParallelAnimationGroup*)self, signal);
}

int32_t q_parallelanimationgroup_qbase_receivers(void* self, const char* signal) {
    return QParallelAnimationGroup_QBaseReceivers((QParallelAnimationGroup*)self, signal);
}

void q_parallelanimationgroup_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QParallelAnimationGroup_OnReceivers((QParallelAnimationGroup*)self, (intptr_t)slot);
}

bool q_parallelanimationgroup_is_signal_connected(void* self, void* signal) {
    return QParallelAnimationGroup_IsSignalConnected((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

bool q_parallelanimationgroup_qbase_is_signal_connected(void* self, void* signal) {
    return QParallelAnimationGroup_QBaseIsSignalConnected((QParallelAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_parallelanimationgroup_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QParallelAnimationGroup_OnIsSignalConnected((QParallelAnimationGroup*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_parallelanimationgroup_delete(void* self) {
    QParallelAnimationGroup_Delete((QParallelAnimationGroup*)(self));
}
