#include "libqabstractanimation.hpp"
#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqanimationgroup.hpp"
#include "libqanimationgroup.h"

QAnimationGroup* q_animationgroup_new() {
    return QAnimationGroup_new();
}

QAnimationGroup* q_animationgroup_new2(void* parent) {
    return QAnimationGroup_new2((QObject*)parent);
}

const QMetaObject* q_animationgroup_meta_object(void* self) {
    return QAnimationGroup_MetaObject((QAnimationGroup*)self);
}

void* q_animationgroup_metacast(void* self, const char* param1) {
    return QAnimationGroup_Metacast((QAnimationGroup*)self, param1);
}

int32_t q_animationgroup_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAnimationGroup_Metacall((QAnimationGroup*)self, param1, param2, param3);
}

void q_animationgroup_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAnimationGroup_OnMetacall((QAnimationGroup*)self, (intptr_t)callback);
}

int32_t q_animationgroup_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAnimationGroup_QBaseMetacall((QAnimationGroup*)self, param1, param2, param3);
}

const char* q_animationgroup_tr(const char* s) {
    libqt_string _str = QAnimationGroup_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QAbstractAnimation* q_animationgroup_animation_at(void* self, int index) {
    return QAnimationGroup_AnimationAt((QAnimationGroup*)self, index);
}

int32_t q_animationgroup_animation_count(void* self) {
    return QAnimationGroup_AnimationCount((QAnimationGroup*)self);
}

int32_t q_animationgroup_index_of_animation(void* self, void* animation) {
    return QAnimationGroup_IndexOfAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

void q_animationgroup_add_animation(void* self, void* animation) {
    QAnimationGroup_AddAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

void q_animationgroup_insert_animation(void* self, int index, void* animation) {
    QAnimationGroup_InsertAnimation((QAnimationGroup*)self, index, (QAbstractAnimation*)animation);
}

void q_animationgroup_remove_animation(void* self, void* animation) {
    QAnimationGroup_RemoveAnimation((QAnimationGroup*)self, (QAbstractAnimation*)animation);
}

QAbstractAnimation* q_animationgroup_take_animation(void* self, int index) {
    return QAnimationGroup_TakeAnimation((QAnimationGroup*)self, index);
}

void q_animationgroup_clear(void* self) {
    QAnimationGroup_Clear((QAnimationGroup*)self);
}

bool q_animationgroup_event(void* self, void* event) {
    return QAnimationGroup_Event((QAnimationGroup*)self, (QEvent*)event);
}

void q_animationgroup_on_event(void* self, bool (*callback)(void*, void*)) {
    QAnimationGroup_OnEvent((QAnimationGroup*)self, (intptr_t)callback);
}

bool q_animationgroup_qbase_event(void* self, void* event) {
    return QAnimationGroup_QBaseEvent((QAnimationGroup*)self, (QEvent*)event);
}

const char* q_animationgroup_tr2(const char* s, const char* c) {
    libqt_string _str = QAnimationGroup_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_animationgroup_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAnimationGroup_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_animationgroup_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

QAnimationGroup* q_animationgroup_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

int32_t q_animationgroup_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

void q_animationgroup_set_direction(void* self, int32_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

int32_t q_animationgroup_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

int32_t q_animationgroup_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

int32_t q_animationgroup_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

void q_animationgroup_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

int32_t q_animationgroup_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

int32_t q_animationgroup_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

void q_animationgroup_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

void q_animationgroup_on_finished(void* self, void (*callback)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_animationgroup_state_changed(void* self, int32_t newState, int32_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

void q_animationgroup_on_state_changed(void* self, void (*callback)(void*, int32_t, int32_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_animationgroup_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

void q_animationgroup_on_current_loop_changed(void* self, void (*callback)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_animationgroup_direction_changed(void* self, int32_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

void q_animationgroup_on_direction_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_animationgroup_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

void q_animationgroup_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

void q_animationgroup_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

void q_animationgroup_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

void q_animationgroup_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

void q_animationgroup_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

void q_animationgroup_start1(void* self, int32_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

const char* q_animationgroup_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_animationgroup_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_animationgroup_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_animationgroup_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_animationgroup_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_animationgroup_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_animationgroup_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_animationgroup_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_animationgroup_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_animationgroup_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_animationgroup_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_animationgroup_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_animationgroup_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_animationgroup_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_animationgroup_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_animationgroup_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_animationgroup_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_animationgroup_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_animationgroup_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_animationgroup_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_animationgroup_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_animationgroup_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_animationgroup_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_animationgroup_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_animationgroup_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_animationgroup_dynamic_property_names");
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

QBindingStorage* q_animationgroup_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_animationgroup_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_animationgroup_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_animationgroup_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_animationgroup_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_animationgroup_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_animationgroup_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_animationgroup_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_animationgroup_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_animationgroup_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_animationgroup_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_animationgroup_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_animationgroup_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_animationgroup_duration(void* self) {
    return QAnimationGroup_Duration((QAnimationGroup*)self);
}

int32_t q_animationgroup_qbase_duration(void* self) {
    return QAnimationGroup_QBaseDuration((QAnimationGroup*)self);
}

void q_animationgroup_on_duration(void* self, int32_t (*callback)()) {
    QAnimationGroup_OnDuration((QAnimationGroup*)self, (intptr_t)callback);
}

void q_animationgroup_update_current_time(void* self, int currentTime) {
    QAnimationGroup_UpdateCurrentTime((QAnimationGroup*)self, currentTime);
}

void q_animationgroup_qbase_update_current_time(void* self, int currentTime) {
    QAnimationGroup_QBaseUpdateCurrentTime((QAnimationGroup*)self, currentTime);
}

void q_animationgroup_on_update_current_time(void* self, void (*callback)(void*, int)) {
    QAnimationGroup_OnUpdateCurrentTime((QAnimationGroup*)self, (intptr_t)callback);
}

void q_animationgroup_update_state(void* self, int32_t newState, int32_t oldState) {
    QAnimationGroup_UpdateState((QAnimationGroup*)self, newState, oldState);
}

void q_animationgroup_qbase_update_state(void* self, int32_t newState, int32_t oldState) {
    QAnimationGroup_QBaseUpdateState((QAnimationGroup*)self, newState, oldState);
}

void q_animationgroup_on_update_state(void* self, void (*callback)(void*, int32_t, int32_t)) {
    QAnimationGroup_OnUpdateState((QAnimationGroup*)self, (intptr_t)callback);
}

void q_animationgroup_update_direction(void* self, int32_t direction) {
    QAnimationGroup_UpdateDirection((QAnimationGroup*)self, direction);
}

void q_animationgroup_qbase_update_direction(void* self, int32_t direction) {
    QAnimationGroup_QBaseUpdateDirection((QAnimationGroup*)self, direction);
}

void q_animationgroup_on_update_direction(void* self, void (*callback)(void*, int32_t)) {
    QAnimationGroup_OnUpdateDirection((QAnimationGroup*)self, (intptr_t)callback);
}

bool q_animationgroup_event_filter(void* self, void* watched, void* event) {
    return QAnimationGroup_EventFilter((QAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

bool q_animationgroup_qbase_event_filter(void* self, void* watched, void* event) {
    return QAnimationGroup_QBaseEventFilter((QAnimationGroup*)self, (QObject*)watched, (QEvent*)event);
}

void q_animationgroup_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAnimationGroup_OnEventFilter((QAnimationGroup*)self, (intptr_t)callback);
}

void q_animationgroup_timer_event(void* self, void* event) {
    QAnimationGroup_TimerEvent((QAnimationGroup*)self, (QTimerEvent*)event);
}

void q_animationgroup_qbase_timer_event(void* self, void* event) {
    QAnimationGroup_QBaseTimerEvent((QAnimationGroup*)self, (QTimerEvent*)event);
}

void q_animationgroup_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAnimationGroup_OnTimerEvent((QAnimationGroup*)self, (intptr_t)callback);
}

void q_animationgroup_child_event(void* self, void* event) {
    QAnimationGroup_ChildEvent((QAnimationGroup*)self, (QChildEvent*)event);
}

void q_animationgroup_qbase_child_event(void* self, void* event) {
    QAnimationGroup_QBaseChildEvent((QAnimationGroup*)self, (QChildEvent*)event);
}

void q_animationgroup_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAnimationGroup_OnChildEvent((QAnimationGroup*)self, (intptr_t)callback);
}

void q_animationgroup_custom_event(void* self, void* event) {
    QAnimationGroup_CustomEvent((QAnimationGroup*)self, (QEvent*)event);
}

void q_animationgroup_qbase_custom_event(void* self, void* event) {
    QAnimationGroup_QBaseCustomEvent((QAnimationGroup*)self, (QEvent*)event);
}

void q_animationgroup_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAnimationGroup_OnCustomEvent((QAnimationGroup*)self, (intptr_t)callback);
}

void q_animationgroup_connect_notify(void* self, void* signal) {
    QAnimationGroup_ConnectNotify((QAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_animationgroup_qbase_connect_notify(void* self, void* signal) {
    QAnimationGroup_QBaseConnectNotify((QAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_animationgroup_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAnimationGroup_OnConnectNotify((QAnimationGroup*)self, (intptr_t)callback);
}

void q_animationgroup_disconnect_notify(void* self, void* signal) {
    QAnimationGroup_DisconnectNotify((QAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_animationgroup_qbase_disconnect_notify(void* self, void* signal) {
    QAnimationGroup_QBaseDisconnectNotify((QAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_animationgroup_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAnimationGroup_OnDisconnectNotify((QAnimationGroup*)self, (intptr_t)callback);
}

QObject* q_animationgroup_sender(void* self) {
    return QAnimationGroup_Sender((QAnimationGroup*)self);
}

QObject* q_animationgroup_qbase_sender(void* self) {
    return QAnimationGroup_QBaseSender((QAnimationGroup*)self);
}

void q_animationgroup_on_sender(void* self, QObject* (*callback)()) {
    QAnimationGroup_OnSender((QAnimationGroup*)self, (intptr_t)callback);
}

int32_t q_animationgroup_sender_signal_index(void* self) {
    return QAnimationGroup_SenderSignalIndex((QAnimationGroup*)self);
}

int32_t q_animationgroup_qbase_sender_signal_index(void* self) {
    return QAnimationGroup_QBaseSenderSignalIndex((QAnimationGroup*)self);
}

void q_animationgroup_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAnimationGroup_OnSenderSignalIndex((QAnimationGroup*)self, (intptr_t)callback);
}

int32_t q_animationgroup_receivers(void* self, const char* signal) {
    return QAnimationGroup_Receivers((QAnimationGroup*)self, signal);
}

int32_t q_animationgroup_qbase_receivers(void* self, const char* signal) {
    return QAnimationGroup_QBaseReceivers((QAnimationGroup*)self, signal);
}

void q_animationgroup_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAnimationGroup_OnReceivers((QAnimationGroup*)self, (intptr_t)callback);
}

bool q_animationgroup_is_signal_connected(void* self, void* signal) {
    return QAnimationGroup_IsSignalConnected((QAnimationGroup*)self, (QMetaMethod*)signal);
}

bool q_animationgroup_qbase_is_signal_connected(void* self, void* signal) {
    return QAnimationGroup_QBaseIsSignalConnected((QAnimationGroup*)self, (QMetaMethod*)signal);
}

void q_animationgroup_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAnimationGroup_OnIsSignalConnected((QAnimationGroup*)self, (intptr_t)callback);
}

void q_animationgroup_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_animationgroup_delete(void* self) {
    QAnimationGroup_Delete((QAnimationGroup*)(self));
}
