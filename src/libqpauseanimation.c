#include "libqabstractanimation.hpp"
#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpauseanimation.hpp"
#include "libqpauseanimation.h"

QPauseAnimation* q_pauseanimation_new() {
    return QPauseAnimation_New();
}

QPauseAnimation* q_pauseanimation_new2(int msecs) {
    return QPauseAnimation_New2(msecs);
}

QPauseAnimation* q_pauseanimation_new3(void* parent) {
    return QPauseAnimation_New3((QObject*)parent);
}

QPauseAnimation* q_pauseanimation_new4(int msecs, void* parent) {
    return QPauseAnimation_New4(msecs, (QObject*)parent);
}

const QMetaObject* q_pauseanimation_meta_object(const void* self) {
    return QPauseAnimation_MetaObject((QPauseAnimation*)self);
}

void q_pauseanimation_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    QPauseAnimation_OnMetaObject((QPauseAnimation*)self, (intptr_t)callback);
}

const QMetaObject* q_pauseanimation_super_meta_object(const void* self) {
    return QPauseAnimation_SuperMetaObject((QPauseAnimation*)self);
}

void* q_pauseanimation_metacast(void* self, const char* param1) {
    return QPauseAnimation_Metacast((QPauseAnimation*)self, param1);
}

void q_pauseanimation_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPauseAnimation_OnMetacast((QPauseAnimation*)self, (intptr_t)callback);
}

void* q_pauseanimation_super_metacast(void* self, const char* param1) {
    return QPauseAnimation_SuperMetacast((QPauseAnimation*)self, param1);
}

int32_t q_pauseanimation_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPauseAnimation_Metacall((QPauseAnimation*)self, param1, param2, param3);
}

void q_pauseanimation_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPauseAnimation_OnMetacall((QPauseAnimation*)self, (intptr_t)callback);
}

int32_t q_pauseanimation_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPauseAnimation_SuperMetacall((QPauseAnimation*)self, param1, param2, param3);
}

const char* q_pauseanimation_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_pauseanimation_duration(const void* self) {
    return QPauseAnimation_Duration((QPauseAnimation*)self);
}

void q_pauseanimation_on_duration(const void* self, int32_t (*callback)(const void*)) {
    QPauseAnimation_OnDuration((QPauseAnimation*)self, (intptr_t)callback);
}

int32_t q_pauseanimation_super_duration(const void* self) {
    return QPauseAnimation_SuperDuration((QPauseAnimation*)self);
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

bool q_pauseanimation_super_event(void* self, void* e) {
    return QPauseAnimation_SuperEvent((QPauseAnimation*)self, (QEvent*)e);
}

void q_pauseanimation_update_current_time(void* self, int param1) {
    QPauseAnimation_UpdateCurrentTime((QPauseAnimation*)self, param1);
}

void q_pauseanimation_on_update_current_time(void* self, void (*callback)(void*, int)) {
    QPauseAnimation_OnUpdateCurrentTime((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_super_update_current_time(void* self, int param1) {
    QPauseAnimation_SuperUpdateCurrentTime((QPauseAnimation*)self, param1);
}

const char* q_pauseanimation_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pauseanimation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_pauseanimation_state(const void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

QAnimationGroup* q_pauseanimation_group(const void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

int32_t q_pauseanimation_direction(const void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

void q_pauseanimation_set_direction(void* self, int32_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

int32_t q_pauseanimation_current_time(const void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

int32_t q_pauseanimation_current_loop_time(const void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

int32_t q_pauseanimation_loop_count(const void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

void q_pauseanimation_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

int32_t q_pauseanimation_current_loop(const void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

int32_t q_pauseanimation_total_duration(const void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

void q_pauseanimation_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

void q_pauseanimation_on_finished(void* self, void (*callback)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_state_changed(void* self, int32_t newState, int32_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

void q_pauseanimation_on_state_changed(void* self, void (*callback)(void*, int32_t, int32_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

void q_pauseanimation_on_current_loop_changed(void* self, void (*callback)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_direction_changed(void* self, int32_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

void q_pauseanimation_on_direction_changed(void* self, void (*callback)(void*, int32_t)) {
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

void q_pauseanimation_start1(void* self, int32_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

const char* q_pauseanimation_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pauseanimation_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pauseanimation_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pauseanimation_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pauseanimation_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pauseanimation_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pauseanimation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pauseanimation_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pauseanimation_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pauseanimation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_pauseanimation_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_pauseanimation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pauseanimation_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pauseanimation_children(const void* self) {
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

QMetaObject__Connection* q_pauseanimation_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_pauseanimation_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pauseanimation_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pauseanimation_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_pauseanimation_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pauseanimation_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_pauseanimation_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_pauseanimation_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_pauseanimation_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pauseanimation_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pauseanimation_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pauseanimation_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pauseanimation_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pauseanimation_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_pauseanimation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pauseanimation_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pauseanimation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pauseanimation_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pauseanimation_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pauseanimation_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pauseanimation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_pauseanimation_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_pauseanimation_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_pauseanimation_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_pauseanimation_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pauseanimation_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_pauseanimation_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_pauseanimation_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_pauseanimation_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_pauseanimation_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_pauseanimation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pauseanimation_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_pauseanimation_update_state(void* self, int32_t newState, int32_t oldState) {
    QPauseAnimation_UpdateState((QPauseAnimation*)self, newState, oldState);
}

void q_pauseanimation_super_update_state(void* self, int32_t newState, int32_t oldState) {
    QPauseAnimation_SuperUpdateState((QPauseAnimation*)self, newState, oldState);
}

void q_pauseanimation_on_update_state(void* self, void (*callback)(void*, int32_t, int32_t)) {
    QPauseAnimation_OnUpdateState((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_update_direction(void* self, int32_t direction) {
    QPauseAnimation_UpdateDirection((QPauseAnimation*)self, direction);
}

void q_pauseanimation_super_update_direction(void* self, int32_t direction) {
    QPauseAnimation_SuperUpdateDirection((QPauseAnimation*)self, direction);
}

void q_pauseanimation_on_update_direction(void* self, void (*callback)(void*, int32_t)) {
    QPauseAnimation_OnUpdateDirection((QPauseAnimation*)self, (intptr_t)callback);
}

bool q_pauseanimation_event_filter(void* self, void* watched, void* event) {
    return QPauseAnimation_EventFilter((QPauseAnimation*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pauseanimation_super_event_filter(void* self, void* watched, void* event) {
    return QPauseAnimation_SuperEventFilter((QPauseAnimation*)self, (QObject*)watched, (QEvent*)event);
}

void q_pauseanimation_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPauseAnimation_OnEventFilter((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_timer_event(void* self, void* event) {
    QPauseAnimation_TimerEvent((QPauseAnimation*)self, (QTimerEvent*)event);
}

void q_pauseanimation_super_timer_event(void* self, void* event) {
    QPauseAnimation_SuperTimerEvent((QPauseAnimation*)self, (QTimerEvent*)event);
}

void q_pauseanimation_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPauseAnimation_OnTimerEvent((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_child_event(void* self, void* event) {
    QPauseAnimation_ChildEvent((QPauseAnimation*)self, (QChildEvent*)event);
}

void q_pauseanimation_super_child_event(void* self, void* event) {
    QPauseAnimation_SuperChildEvent((QPauseAnimation*)self, (QChildEvent*)event);
}

void q_pauseanimation_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPauseAnimation_OnChildEvent((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_custom_event(void* self, void* event) {
    QPauseAnimation_CustomEvent((QPauseAnimation*)self, (QEvent*)event);
}

void q_pauseanimation_super_custom_event(void* self, void* event) {
    QPauseAnimation_SuperCustomEvent((QPauseAnimation*)self, (QEvent*)event);
}

void q_pauseanimation_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPauseAnimation_OnCustomEvent((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_connect_notify(void* self, const void* signal) {
    QPauseAnimation_ConnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

void q_pauseanimation_super_connect_notify(void* self, const void* signal) {
    QPauseAnimation_SuperConnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

void q_pauseanimation_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QPauseAnimation_OnConnectNotify((QPauseAnimation*)self, (intptr_t)callback);
}

void q_pauseanimation_disconnect_notify(void* self, const void* signal) {
    QPauseAnimation_DisconnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

void q_pauseanimation_super_disconnect_notify(void* self, const void* signal) {
    QPauseAnimation_SuperDisconnectNotify((QPauseAnimation*)self, (QMetaMethod*)signal);
}

void q_pauseanimation_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QPauseAnimation_OnDisconnectNotify((QPauseAnimation*)self, (intptr_t)callback);
}

QObject* q_pauseanimation_sender(const void* self) {
    return QPauseAnimation_Sender((QPauseAnimation*)self);
}

int32_t q_pauseanimation_sender_signal_index(const void* self) {
    return QPauseAnimation_SenderSignalIndex((QPauseAnimation*)self);
}

int32_t q_pauseanimation_receivers(const void* self, const char* signal) {
    return QPauseAnimation_Receivers((QPauseAnimation*)self, signal);
}

bool q_pauseanimation_is_signal_connected(const void* self, const void* signal) {
    return QPauseAnimation_IsSignalConnected((QPauseAnimation*)self, (QMetaMethod*)signal);
}

void q_pauseanimation_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pauseanimation_delete(void* self) {
    QPauseAnimation_Delete((QPauseAnimation*)(self));
}
