#include "libqanimationgroup.hpp"
#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqabstractanimation.hpp"
#include "libqabstractanimation.h"

QAbstractAnimation* q_abstractanimation_new() {
    return QAbstractAnimation_new();
}

QAbstractAnimation* q_abstractanimation_new2(void* parent) {
    return QAbstractAnimation_new2((QObject*)parent);
}

const QMetaObject* q_abstractanimation_meta_object(void* self) {
    return QAbstractAnimation_MetaObject((QAbstractAnimation*)self);
}

void* q_abstractanimation_metacast(void* self, const char* param1) {
    return QAbstractAnimation_Metacast((QAbstractAnimation*)self, param1);
}

int32_t q_abstractanimation_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractAnimation_Metacall((QAbstractAnimation*)self, param1, param2, param3);
}

void q_abstractanimation_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractAnimation_OnMetacall((QAbstractAnimation*)self, (intptr_t)slot);
}

int32_t q_abstractanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractAnimation_QBaseMetacall((QAbstractAnimation*)self, param1, param2, param3);
}

const char* q_abstractanimation_tr(const char* s) {
    libqt_string _str = QAbstractAnimation_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_abstractanimation_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

QAnimationGroup* q_abstractanimation_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

int64_t q_abstractanimation_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

void q_abstractanimation_set_direction(void* self, int64_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

int32_t q_abstractanimation_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

int32_t q_abstractanimation_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

int32_t q_abstractanimation_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

void q_abstractanimation_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

int32_t q_abstractanimation_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

int32_t q_abstractanimation_duration(void* self) {
    return QAbstractAnimation_Duration((QAbstractAnimation*)self);
}

void q_abstractanimation_on_duration(void* self, int32_t (*slot)()) {
    QAbstractAnimation_OnDuration((QAbstractAnimation*)self, (intptr_t)slot);
}

int32_t q_abstractanimation_qbase_duration(void* self) {
    return QAbstractAnimation_QBaseDuration((QAbstractAnimation*)self);
}

int32_t q_abstractanimation_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

void q_abstractanimation_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

void q_abstractanimation_on_finished(void* self, void (*slot)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_state_changed(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

void q_abstractanimation_on_state_changed(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

void q_abstractanimation_on_current_loop_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_direction_changed(void* self, int64_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

void q_abstractanimation_on_direction_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

void q_abstractanimation_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

void q_abstractanimation_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

void q_abstractanimation_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

void q_abstractanimation_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

void q_abstractanimation_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

bool q_abstractanimation_event(void* self, void* event) {
    return QAbstractAnimation_Event((QAbstractAnimation*)self, (QEvent*)event);
}

void q_abstractanimation_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractAnimation_OnEvent((QAbstractAnimation*)self, (intptr_t)slot);
}

bool q_abstractanimation_qbase_event(void* self, void* event) {
    return QAbstractAnimation_QBaseEvent((QAbstractAnimation*)self, (QEvent*)event);
}

void q_abstractanimation_update_current_time(void* self, int currentTime) {
    QAbstractAnimation_UpdateCurrentTime((QAbstractAnimation*)self, currentTime);
}

void q_abstractanimation_on_update_current_time(void* self, void (*slot)(void*, int)) {
    QAbstractAnimation_OnUpdateCurrentTime((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_qbase_update_current_time(void* self, int currentTime) {
    QAbstractAnimation_QBaseUpdateCurrentTime((QAbstractAnimation*)self, currentTime);
}

void q_abstractanimation_update_state(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_UpdateState((QAbstractAnimation*)self, newState, oldState);
}

void q_abstractanimation_on_update_state(void* self, void (*slot)(void*, int64_t, int64_t)) {
    QAbstractAnimation_OnUpdateState((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_QBaseUpdateState((QAbstractAnimation*)self, newState, oldState);
}

void q_abstractanimation_update_direction(void* self, int64_t direction) {
    QAbstractAnimation_UpdateDirection((QAbstractAnimation*)self, direction);
}

void q_abstractanimation_on_update_direction(void* self, void (*slot)(void*, int64_t)) {
    QAbstractAnimation_OnUpdateDirection((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_qbase_update_direction(void* self, int64_t direction) {
    QAbstractAnimation_QBaseUpdateDirection((QAbstractAnimation*)self, direction);
}

const char* q_abstractanimation_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractAnimation_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractanimation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractAnimation_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractanimation_start1(void* self, int64_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

const char* q_abstractanimation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractanimation_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractanimation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractanimation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractanimation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractanimation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractanimation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractanimation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_abstractanimation_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractanimation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstractanimation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

const libqt_list /* of QObject* */ q_abstractanimation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractanimation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_abstractanimation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractanimation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractanimation_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractanimation_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractanimation_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractanimation_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_abstractanimation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractanimation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractanimation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractanimation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractanimation_dynamic_property_names(void* self) {
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

QBindingStorage* q_abstractanimation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractanimation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractanimation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractanimation_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_abstractanimation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstractanimation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractanimation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_abstractanimation_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstractanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_abstractanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_abstractanimation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractanimation_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_abstractanimation_event_filter(void* self, void* watched, void* event) {
    return QAbstractAnimation_EventFilter((QAbstractAnimation*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstractanimation_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractAnimation_QBaseEventFilter((QAbstractAnimation*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstractanimation_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractAnimation_OnEventFilter((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_timer_event(void* self, void* event) {
    QAbstractAnimation_TimerEvent((QAbstractAnimation*)self, (QTimerEvent*)event);
}

void q_abstractanimation_qbase_timer_event(void* self, void* event) {
    QAbstractAnimation_QBaseTimerEvent((QAbstractAnimation*)self, (QTimerEvent*)event);
}

void q_abstractanimation_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractAnimation_OnTimerEvent((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_child_event(void* self, void* event) {
    QAbstractAnimation_ChildEvent((QAbstractAnimation*)self, (QChildEvent*)event);
}

void q_abstractanimation_qbase_child_event(void* self, void* event) {
    QAbstractAnimation_QBaseChildEvent((QAbstractAnimation*)self, (QChildEvent*)event);
}

void q_abstractanimation_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractAnimation_OnChildEvent((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_custom_event(void* self, void* event) {
    QAbstractAnimation_CustomEvent((QAbstractAnimation*)self, (QEvent*)event);
}

void q_abstractanimation_qbase_custom_event(void* self, void* event) {
    QAbstractAnimation_QBaseCustomEvent((QAbstractAnimation*)self, (QEvent*)event);
}

void q_abstractanimation_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractAnimation_OnCustomEvent((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_connect_notify(void* self, void* signal) {
    QAbstractAnimation_ConnectNotify((QAbstractAnimation*)self, (QMetaMethod*)signal);
}

void q_abstractanimation_qbase_connect_notify(void* self, void* signal) {
    QAbstractAnimation_QBaseConnectNotify((QAbstractAnimation*)self, (QMetaMethod*)signal);
}

void q_abstractanimation_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractAnimation_OnConnectNotify((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_disconnect_notify(void* self, void* signal) {
    QAbstractAnimation_DisconnectNotify((QAbstractAnimation*)self, (QMetaMethod*)signal);
}

void q_abstractanimation_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractAnimation_QBaseDisconnectNotify((QAbstractAnimation*)self, (QMetaMethod*)signal);
}

void q_abstractanimation_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractAnimation_OnDisconnectNotify((QAbstractAnimation*)self, (intptr_t)slot);
}

QObject* q_abstractanimation_sender(void* self) {
    return QAbstractAnimation_Sender((QAbstractAnimation*)self);
}

QObject* q_abstractanimation_qbase_sender(void* self) {
    return QAbstractAnimation_QBaseSender((QAbstractAnimation*)self);
}

void q_abstractanimation_on_sender(void* self, QObject* (*slot)()) {
    QAbstractAnimation_OnSender((QAbstractAnimation*)self, (intptr_t)slot);
}

int32_t q_abstractanimation_sender_signal_index(void* self) {
    return QAbstractAnimation_SenderSignalIndex((QAbstractAnimation*)self);
}

int32_t q_abstractanimation_qbase_sender_signal_index(void* self) {
    return QAbstractAnimation_QBaseSenderSignalIndex((QAbstractAnimation*)self);
}

void q_abstractanimation_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractAnimation_OnSenderSignalIndex((QAbstractAnimation*)self, (intptr_t)slot);
}

int32_t q_abstractanimation_receivers(void* self, const char* signal) {
    return QAbstractAnimation_Receivers((QAbstractAnimation*)self, signal);
}

int32_t q_abstractanimation_qbase_receivers(void* self, const char* signal) {
    return QAbstractAnimation_QBaseReceivers((QAbstractAnimation*)self, signal);
}

void q_abstractanimation_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractAnimation_OnReceivers((QAbstractAnimation*)self, (intptr_t)slot);
}

bool q_abstractanimation_is_signal_connected(void* self, void* signal) {
    return QAbstractAnimation_IsSignalConnected((QAbstractAnimation*)self, (QMetaMethod*)signal);
}

bool q_abstractanimation_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractAnimation_QBaseIsSignalConnected((QAbstractAnimation*)self, (QMetaMethod*)signal);
}

void q_abstractanimation_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractAnimation_OnIsSignalConnected((QAbstractAnimation*)self, (intptr_t)slot);
}

void q_abstractanimation_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_abstractanimation_delete(void* self) {
    QAbstractAnimation_Delete((QAbstractAnimation*)(self));
}

QAnimationDriver* q_animationdriver_new() {
    return QAnimationDriver_new();
}

QAnimationDriver* q_animationdriver_new2(void* parent) {
    return QAnimationDriver_new2((QObject*)parent);
}

const QMetaObject* q_animationdriver_meta_object(void* self) {
    return QAnimationDriver_MetaObject((QAnimationDriver*)self);
}

void* q_animationdriver_metacast(void* self, const char* param1) {
    return QAnimationDriver_Metacast((QAnimationDriver*)self, param1);
}

int32_t q_animationdriver_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAnimationDriver_Metacall((QAnimationDriver*)self, param1, param2, param3);
}

void q_animationdriver_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAnimationDriver_OnMetacall((QAnimationDriver*)self, (intptr_t)slot);
}

int32_t q_animationdriver_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAnimationDriver_QBaseMetacall((QAnimationDriver*)self, param1, param2, param3);
}

const char* q_animationdriver_tr(const char* s) {
    libqt_string _str = QAnimationDriver_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_animationdriver_advance(void* self) {
    QAnimationDriver_Advance((QAnimationDriver*)self);
}

void q_animationdriver_on_advance(void* self, void (*slot)()) {
    QAnimationDriver_OnAdvance((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_qbase_advance(void* self) {
    QAnimationDriver_QBaseAdvance((QAnimationDriver*)self);
}

void q_animationdriver_install(void* self) {
    QAnimationDriver_Install((QAnimationDriver*)self);
}

void q_animationdriver_uninstall(void* self) {
    QAnimationDriver_Uninstall((QAnimationDriver*)self);
}

bool q_animationdriver_is_running(void* self) {
    return QAnimationDriver_IsRunning((QAnimationDriver*)self);
}

long long q_animationdriver_elapsed(void* self) {
    return QAnimationDriver_Elapsed((QAnimationDriver*)self);
}

void q_animationdriver_on_elapsed(void* self, long long (*slot)()) {
    QAnimationDriver_OnElapsed((QAnimationDriver*)self, (intptr_t)slot);
}

long long q_animationdriver_qbase_elapsed(void* self) {
    return QAnimationDriver_QBaseElapsed((QAnimationDriver*)self);
}

void q_animationdriver_started(void* self) {
    QAnimationDriver_Started((QAnimationDriver*)self);
}

void q_animationdriver_on_started(void* self, void (*slot)(void*)) {
    QAnimationDriver_Connect_Started((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_stopped(void* self) {
    QAnimationDriver_Stopped((QAnimationDriver*)self);
}

void q_animationdriver_on_stopped(void* self, void (*slot)(void*)) {
    QAnimationDriver_Connect_Stopped((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_advance_animation(void* self) {
    QAnimationDriver_AdvanceAnimation((QAnimationDriver*)self);
}

void q_animationdriver_on_advance_animation(void* self, void (*slot)()) {
    QAnimationDriver_OnAdvanceAnimation((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_qbase_advance_animation(void* self) {
    QAnimationDriver_QBaseAdvanceAnimation((QAnimationDriver*)self);
}

void q_animationdriver_start(void* self) {
    QAnimationDriver_Start((QAnimationDriver*)self);
}

void q_animationdriver_on_start(void* self, void (*slot)()) {
    QAnimationDriver_OnStart((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_qbase_start(void* self) {
    QAnimationDriver_QBaseStart((QAnimationDriver*)self);
}

void q_animationdriver_stop(void* self) {
    QAnimationDriver_Stop((QAnimationDriver*)self);
}

void q_animationdriver_on_stop(void* self, void (*slot)()) {
    QAnimationDriver_OnStop((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_qbase_stop(void* self) {
    QAnimationDriver_QBaseStop((QAnimationDriver*)self);
}

const char* q_animationdriver_tr2(const char* s, const char* c) {
    libqt_string _str = QAnimationDriver_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_animationdriver_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAnimationDriver_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_animationdriver_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_animationdriver_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_animationdriver_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_animationdriver_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_animationdriver_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_animationdriver_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_animationdriver_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_animationdriver_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_animationdriver_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_animationdriver_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_animationdriver_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

const libqt_list /* of QObject* */ q_animationdriver_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_animationdriver_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_animationdriver_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_animationdriver_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_animationdriver_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_animationdriver_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_animationdriver_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_animationdriver_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_animationdriver_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_animationdriver_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_animationdriver_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_animationdriver_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_animationdriver_dynamic_property_names(void* self) {
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

QBindingStorage* q_animationdriver_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_animationdriver_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_animationdriver_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_animationdriver_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_animationdriver_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_animationdriver_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_animationdriver_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_animationdriver_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_animationdriver_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_animationdriver_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_animationdriver_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_animationdriver_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_animationdriver_event(void* self, void* event) {
    return QAnimationDriver_Event((QAnimationDriver*)self, (QEvent*)event);
}

bool q_animationdriver_qbase_event(void* self, void* event) {
    return QAnimationDriver_QBaseEvent((QAnimationDriver*)self, (QEvent*)event);
}

void q_animationdriver_on_event(void* self, bool (*slot)(void*, void*)) {
    QAnimationDriver_OnEvent((QAnimationDriver*)self, (intptr_t)slot);
}

bool q_animationdriver_event_filter(void* self, void* watched, void* event) {
    return QAnimationDriver_EventFilter((QAnimationDriver*)self, (QObject*)watched, (QEvent*)event);
}

bool q_animationdriver_qbase_event_filter(void* self, void* watched, void* event) {
    return QAnimationDriver_QBaseEventFilter((QAnimationDriver*)self, (QObject*)watched, (QEvent*)event);
}

void q_animationdriver_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAnimationDriver_OnEventFilter((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_timer_event(void* self, void* event) {
    QAnimationDriver_TimerEvent((QAnimationDriver*)self, (QTimerEvent*)event);
}

void q_animationdriver_qbase_timer_event(void* self, void* event) {
    QAnimationDriver_QBaseTimerEvent((QAnimationDriver*)self, (QTimerEvent*)event);
}

void q_animationdriver_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAnimationDriver_OnTimerEvent((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_child_event(void* self, void* event) {
    QAnimationDriver_ChildEvent((QAnimationDriver*)self, (QChildEvent*)event);
}

void q_animationdriver_qbase_child_event(void* self, void* event) {
    QAnimationDriver_QBaseChildEvent((QAnimationDriver*)self, (QChildEvent*)event);
}

void q_animationdriver_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAnimationDriver_OnChildEvent((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_custom_event(void* self, void* event) {
    QAnimationDriver_CustomEvent((QAnimationDriver*)self, (QEvent*)event);
}

void q_animationdriver_qbase_custom_event(void* self, void* event) {
    QAnimationDriver_QBaseCustomEvent((QAnimationDriver*)self, (QEvent*)event);
}

void q_animationdriver_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAnimationDriver_OnCustomEvent((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_connect_notify(void* self, void* signal) {
    QAnimationDriver_ConnectNotify((QAnimationDriver*)self, (QMetaMethod*)signal);
}

void q_animationdriver_qbase_connect_notify(void* self, void* signal) {
    QAnimationDriver_QBaseConnectNotify((QAnimationDriver*)self, (QMetaMethod*)signal);
}

void q_animationdriver_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAnimationDriver_OnConnectNotify((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_disconnect_notify(void* self, void* signal) {
    QAnimationDriver_DisconnectNotify((QAnimationDriver*)self, (QMetaMethod*)signal);
}

void q_animationdriver_qbase_disconnect_notify(void* self, void* signal) {
    QAnimationDriver_QBaseDisconnectNotify((QAnimationDriver*)self, (QMetaMethod*)signal);
}

void q_animationdriver_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAnimationDriver_OnDisconnectNotify((QAnimationDriver*)self, (intptr_t)slot);
}

QObject* q_animationdriver_sender(void* self) {
    return QAnimationDriver_Sender((QAnimationDriver*)self);
}

QObject* q_animationdriver_qbase_sender(void* self) {
    return QAnimationDriver_QBaseSender((QAnimationDriver*)self);
}

void q_animationdriver_on_sender(void* self, QObject* (*slot)()) {
    QAnimationDriver_OnSender((QAnimationDriver*)self, (intptr_t)slot);
}

int32_t q_animationdriver_sender_signal_index(void* self) {
    return QAnimationDriver_SenderSignalIndex((QAnimationDriver*)self);
}

int32_t q_animationdriver_qbase_sender_signal_index(void* self) {
    return QAnimationDriver_QBaseSenderSignalIndex((QAnimationDriver*)self);
}

void q_animationdriver_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAnimationDriver_OnSenderSignalIndex((QAnimationDriver*)self, (intptr_t)slot);
}

int32_t q_animationdriver_receivers(void* self, const char* signal) {
    return QAnimationDriver_Receivers((QAnimationDriver*)self, signal);
}

int32_t q_animationdriver_qbase_receivers(void* self, const char* signal) {
    return QAnimationDriver_QBaseReceivers((QAnimationDriver*)self, signal);
}

void q_animationdriver_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAnimationDriver_OnReceivers((QAnimationDriver*)self, (intptr_t)slot);
}

bool q_animationdriver_is_signal_connected(void* self, void* signal) {
    return QAnimationDriver_IsSignalConnected((QAnimationDriver*)self, (QMetaMethod*)signal);
}

bool q_animationdriver_qbase_is_signal_connected(void* self, void* signal) {
    return QAnimationDriver_QBaseIsSignalConnected((QAnimationDriver*)self, (QMetaMethod*)signal);
}

void q_animationdriver_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAnimationDriver_OnIsSignalConnected((QAnimationDriver*)self, (intptr_t)slot);
}

void q_animationdriver_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_animationdriver_delete(void* self) {
    QAnimationDriver_Delete((QAnimationDriver*)(self));
}
