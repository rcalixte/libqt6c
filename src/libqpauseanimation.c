#include "libqabstractanimation.hpp"
#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpauseanimation.hpp"
#include "libqpauseanimation.h"

QPauseAnimation* q_pauseanimation_new() {
    return QPauseAnimation_new();
}

QPauseAnimation* q_pauseanimation_new2(int msecs) {
    return QPauseAnimation_new2(msecs);
}

QPauseAnimation* q_pauseanimation_new3(void* parent) {
    return QPauseAnimation_new3((QObject*)parent);
}

QPauseAnimation* q_pauseanimation_new4(int msecs, void* parent) {
    return QPauseAnimation_new4(msecs, (QObject*)parent);
}

const QMetaObject* q_pauseanimation_meta_object(void* self) {
    return QPauseAnimation_MetaObject((QPauseAnimation*)self);
}

void* q_pauseanimation_metacast(void* self, const char* param1) {
    return QPauseAnimation_Metacast((QPauseAnimation*)self, param1);
}

int32_t q_pauseanimation_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPauseAnimation_Metacall((QPauseAnimation*)self, param1, param2, param3);
}

void q_pauseanimation_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QPauseAnimation_OnMetacall((QPauseAnimation*)self, (intptr_t)callback);
}

int32_t q_pauseanimation_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPauseAnimation_QBaseMetacall((QPauseAnimation*)self, param1, param2, param3);
}

const char* q_pauseanimation_tr(const char* s) {
    libqt_string _str = QPauseAnimation_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_pauseanimation_duration(void* self) {
    return QPauseAnimation_Duration((QPauseAnimation*)self);
}

void q_pauseanimation_on_duration(void* self, int32_t (*callback)()) {
    QPauseAnimation_OnDuration((QPauseAnimation*)self, (intptr_t)callback);
}

int32_t q_pauseanimation_qbase_duration(void* self) {
    return QPauseAnimation_QBaseDuration((QPauseAnimation*)self);
}

void q_pauseanimation_set_duration(void* self, int msecs) {
    QPauseAnimation_SetDuration((QPauseAnimation*)self, msecs);
}

bool q_pauseanimation_event(void* self, void* e) {
    return QPauseAnimation_Event((QPauseAnimation*)self, (QEvent*)e);
}

void q_pauseanimation_on_event(void* self, bool (*callback)(void*, void*)) {
    QPauseAnimation_OnEvent((QPauseAnimation*)self, (intptr_t)callback);
}

bool q_pauseanimation_qbase_event(void* self, void* e) {
    return QPauseAnimation_QBaseEvent((QPauseAnimation*)self, (QEvent*)e);
}

void q_pauseanimation_update_current_time(void* self, int param1) {
    QPauseAnimation_UpdateCurrentTime((QPauseAnimation*)self, param1);
}

void q_pauseanimation_on_update_current_time(void* self, void (*callback)(void*, int)) {
    QPauseAnimation_OnUpdateCurrentTime((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_qbase_update_current_time(void* self, int param1) {
    QPauseAnimation_QBaseUpdateCurrentTime((QPauseAnimation*)self, param1);
}

const char* q_pauseanimation_tr2(const char* s, const char* c) {
    libqt_string _str = QPauseAnimation_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pauseanimation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPauseAnimation_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_pauseanimation_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

QAnimationGroup* q_pauseanimation_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

int64_t q_pauseanimation_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

void q_pauseanimation_set_direction(void* self, int64_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

int32_t q_pauseanimation_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

int32_t q_pauseanimation_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

int32_t q_pauseanimation_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

void q_pauseanimation_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

int32_t q_pauseanimation_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

int32_t q_pauseanimation_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

void q_pauseanimation_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

void q_pauseanimation_on_finished(void* self, void (*callback)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_state_changed(void* self, int64_t newState, int64_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

void q_pauseanimation_on_state_changed(void* self, void (*callback)(void*, int64_t, int64_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

void q_pauseanimation_on_current_loop_changed(void* self, void (*callback)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_direction_changed(void* self, int64_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

void q_pauseanimation_on_direction_changed(void* self, void (*callback)(void*, int64_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

void q_pauseanimation_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

void q_pauseanimation_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

void q_pauseanimation_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

void q_pauseanimation_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

void q_pauseanimation_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

void q_pauseanimation_start1(void* self, int64_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

const char* q_pauseanimation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pauseanimation_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pauseanimation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pauseanimation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pauseanimation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pauseanimation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pauseanimation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pauseanimation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pauseanimation_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pauseanimation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pauseanimation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pauseanimation_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pauseanimation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pauseanimation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pauseanimation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pauseanimation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pauseanimation_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pauseanimation_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pauseanimation_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pauseanimation_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pauseanimation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pauseanimation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pauseanimation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pauseanimation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pauseanimation_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_pauseanimation_dynamic_property_names");
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

QBindingStorage* q_pauseanimation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pauseanimation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pauseanimation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pauseanimation_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pauseanimation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pauseanimation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pauseanimation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pauseanimation_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pauseanimation_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pauseanimation_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_pauseanimation_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_pauseanimation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pauseanimation_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_pauseanimation_update_state(void* self, int64_t newState, int64_t oldState) {
    QPauseAnimation_UpdateState((QPauseAnimation*)self, newState, oldState);
}

void q_pauseanimation_qbase_update_state(void* self, int64_t newState, int64_t oldState) {
    QPauseAnimation_QBaseUpdateState((QPauseAnimation*)self, newState, oldState);
}

void q_pauseanimation_on_update_state(void* self, void (*callback)(void*, int64_t, int64_t)) {
    QPauseAnimation_OnUpdateState((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_update_direction(void* self, int64_t direction) {
    QPauseAnimation_UpdateDirection((QPauseAnimation*)self, direction);
}

void q_pauseanimation_qbase_update_direction(void* self, int64_t direction) {
    QPauseAnimation_QBaseUpdateDirection((QPauseAnimation*)self, direction);
}

void q_pauseanimation_on_update_direction(void* self, void (*callback)(void*, int64_t)) {
    QPauseAnimation_OnUpdateDirection((QPauseAnimation*)self, (intptr_t)callback);
}

bool q_pauseanimation_event_filter(void* self, void* watched, void* event) {
    return QPauseAnimation_EventFilter((QPauseAnimation*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pauseanimation_qbase_event_filter(void* self, void* watched, void* event) {
    return QPauseAnimation_QBaseEventFilter((QPauseAnimation*)self, (QObject*)watched, (QEvent*)event);
}

void q_pauseanimation_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPauseAnimation_OnEventFilter((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_timer_event(void* self, void* event) {
    QPauseAnimation_TimerEvent((QPauseAnimation*)self, (QTimerEvent*)event);
}

void q_pauseanimation_qbase_timer_event(void* self, void* event) {
    QPauseAnimation_QBaseTimerEvent((QPauseAnimation*)self, (QTimerEvent*)event);
}

void q_pauseanimation_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPauseAnimation_OnTimerEvent((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_child_event(void* self, void* event) {
    QPauseAnimation_ChildEvent((QPauseAnimation*)self, (QChildEvent*)event);
}

void q_pauseanimation_qbase_child_event(void* self, void* event) {
    QPauseAnimation_QBaseChildEvent((QPauseAnimation*)self, (QChildEvent*)event);
}

void q_pauseanimation_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPauseAnimation_OnChildEvent((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_custom_event(void* self, void* event) {
    QPauseAnimation_CustomEvent((QPauseAnimation*)self, (QEvent*)event);
}

void q_pauseanimation_qbase_custom_event(void* self, void* event) {
    QPauseAnimation_QBaseCustomEvent((QPauseAnimation*)self, (QEvent*)event);
}

void q_pauseanimation_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPauseAnimation_OnCustomEvent((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_connect_notify(void* self, void* signal) {
    QPauseAnimation_ConnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

void q_pauseanimation_qbase_connect_notify(void* self, void* signal) {
    QPauseAnimation_QBaseConnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

void q_pauseanimation_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPauseAnimation_OnConnectNotify((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_disconnect_notify(void* self, void* signal) {
    QPauseAnimation_DisconnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

void q_pauseanimation_qbase_disconnect_notify(void* self, void* signal) {
    QPauseAnimation_QBaseDisconnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

void q_pauseanimation_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPauseAnimation_OnDisconnectNotify((QPauseAnimation*)self, (intptr_t)callback);
}

QObject* q_pauseanimation_sender(void* self) {
    return QPauseAnimation_Sender((QPauseAnimation*)self);
}

QObject* q_pauseanimation_qbase_sender(void* self) {
    return QPauseAnimation_QBaseSender((QPauseAnimation*)self);
}

void q_pauseanimation_on_sender(void* self, QObject* (*callback)()) {
    QPauseAnimation_OnSender((QPauseAnimation*)self, (intptr_t)callback);
}

int32_t q_pauseanimation_sender_signal_index(void* self) {
    return QPauseAnimation_SenderSignalIndex((QPauseAnimation*)self);
}

int32_t q_pauseanimation_qbase_sender_signal_index(void* self) {
    return QPauseAnimation_QBaseSenderSignalIndex((QPauseAnimation*)self);
}

void q_pauseanimation_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPauseAnimation_OnSenderSignalIndex((QPauseAnimation*)self, (intptr_t)callback);
}

int32_t q_pauseanimation_receivers(void* self, const char* signal) {
    return QPauseAnimation_Receivers((QPauseAnimation*)self, signal);
}

int32_t q_pauseanimation_qbase_receivers(void* self, const char* signal) {
    return QPauseAnimation_QBaseReceivers((QPauseAnimation*)self, signal);
}

void q_pauseanimation_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPauseAnimation_OnReceivers((QPauseAnimation*)self, (intptr_t)callback);
}

bool q_pauseanimation_is_signal_connected(void* self, void* signal) {
    return QPauseAnimation_IsSignalConnected((QPauseAnimation*)self, (QMetaMethod*)signal);
}

bool q_pauseanimation_qbase_is_signal_connected(void* self, void* signal) {
    return QPauseAnimation_QBaseIsSignalConnected((QPauseAnimation*)self, (QMetaMethod*)signal);
}

void q_pauseanimation_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPauseAnimation_OnIsSignalConnected((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pauseanimation_delete(void* self) {
    QPauseAnimation_Delete((QPauseAnimation*)(self));
}
