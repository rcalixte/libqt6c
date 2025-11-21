#include "libqabstractanimation.hpp"
#include "libqcoreevent.hpp"
#include "libqeasingcurve.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqvariant.hpp"
#include "libqvariantanimation.hpp"
#include "libqvariantanimation.h"

QVariantAnimation* q_variantanimation_new() {
    return QVariantAnimation_new();
}

QVariantAnimation* q_variantanimation_new2(void* parent) {
    return QVariantAnimation_new2((QObject*)parent);
}

const QMetaObject* q_variantanimation_meta_object(void* self) {
    return QVariantAnimation_MetaObject((QVariantAnimation*)self);
}

void* q_variantanimation_metacast(void* self, const char* param1) {
    return QVariantAnimation_Metacast((QVariantAnimation*)self, param1);
}

int32_t q_variantanimation_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVariantAnimation_Metacall((QVariantAnimation*)self, param1, param2, param3);
}

void q_variantanimation_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QVariantAnimation_OnMetacall((QVariantAnimation*)self, (intptr_t)callback);
}

int32_t q_variantanimation_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QVariantAnimation_QBaseMetacall((QVariantAnimation*)self, param1, param2, param3);
}

const char* q_variantanimation_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_variantanimation_start_value(void* self) {
    return QVariantAnimation_StartValue((QVariantAnimation*)self);
}

void q_variantanimation_set_start_value(void* self, void* value) {
    QVariantAnimation_SetStartValue((QVariantAnimation*)self, (QVariant*)value);
}

QVariant* q_variantanimation_end_value(void* self) {
    return QVariantAnimation_EndValue((QVariantAnimation*)self);
}

void q_variantanimation_set_end_value(void* self, void* value) {
    QVariantAnimation_SetEndValue((QVariantAnimation*)self, (QVariant*)value);
}

QVariant* q_variantanimation_key_value_at(void* self, double step) {
    return QVariantAnimation_KeyValueAt((QVariantAnimation*)self, step);
}

void q_variantanimation_set_key_value_at(void* self, double step, void* value) {
    QVariantAnimation_SetKeyValueAt((QVariantAnimation*)self, step, (QVariant*)value);
}

libqt_list /* of libqt_pair  tuple of double and QVariant*  */ q_variantanimation_key_values(void* self) {
    libqt_list _arr = QVariantAnimation_KeyValues((QVariantAnimation*)self);
    return _arr;
}

QVariant* q_variantanimation_current_value(void* self) {
    return QVariantAnimation_CurrentValue((QVariantAnimation*)self);
}

int32_t q_variantanimation_duration(void* self) {
    return QVariantAnimation_Duration((QVariantAnimation*)self);
}

void q_variantanimation_on_duration(void* self, int32_t (*callback)()) {
    QVariantAnimation_OnDuration((QVariantAnimation*)self, (intptr_t)callback);
}

int32_t q_variantanimation_qbase_duration(void* self) {
    return QVariantAnimation_QBaseDuration((QVariantAnimation*)self);
}

void q_variantanimation_set_duration(void* self, int msecs) {
    QVariantAnimation_SetDuration((QVariantAnimation*)self, msecs);
}

QEasingCurve* q_variantanimation_easing_curve(void* self) {
    return QVariantAnimation_EasingCurve((QVariantAnimation*)self);
}

void q_variantanimation_set_easing_curve(void* self, void* easing) {
    QVariantAnimation_SetEasingCurve((QVariantAnimation*)self, (QEasingCurve*)easing);
}

void q_variantanimation_value_changed(void* self, void* value) {
    QVariantAnimation_ValueChanged((QVariantAnimation*)self, (QVariant*)value);
}

void q_variantanimation_on_value_changed(void* self, void (*callback)(void*, void*)) {
    QVariantAnimation_Connect_ValueChanged((QVariantAnimation*)self, (intptr_t)callback);
}

bool q_variantanimation_event(void* self, void* event) {
    return QVariantAnimation_Event((QVariantAnimation*)self, (QEvent*)event);
}

void q_variantanimation_on_event(void* self, bool (*callback)(void*, void*)) {
    QVariantAnimation_OnEvent((QVariantAnimation*)self, (intptr_t)callback);
}

bool q_variantanimation_qbase_event(void* self, void* event) {
    return QVariantAnimation_QBaseEvent((QVariantAnimation*)self, (QEvent*)event);
}

void q_variantanimation_update_current_time(void* self, int param1) {
    QVariantAnimation_UpdateCurrentTime((QVariantAnimation*)self, param1);
}

void q_variantanimation_on_update_current_time(void* self, void (*callback)(void*, int)) {
    QVariantAnimation_OnUpdateCurrentTime((QVariantAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_qbase_update_current_time(void* self, int param1) {
    QVariantAnimation_QBaseUpdateCurrentTime((QVariantAnimation*)self, param1);
}

void q_variantanimation_update_state(void* self, int32_t newState, int32_t oldState) {
    QVariantAnimation_UpdateState((QVariantAnimation*)self, newState, oldState);
}

void q_variantanimation_on_update_state(void* self, void (*callback)(void*, int32_t, int32_t)) {
    QVariantAnimation_OnUpdateState((QVariantAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_qbase_update_state(void* self, int32_t newState, int32_t oldState) {
    QVariantAnimation_QBaseUpdateState((QVariantAnimation*)self, newState, oldState);
}

void q_variantanimation_update_current_value(void* self, void* value) {
    QVariantAnimation_UpdateCurrentValue((QVariantAnimation*)self, (QVariant*)value);
}

void q_variantanimation_on_update_current_value(void* self, void (*callback)(void*, void*)) {
    QVariantAnimation_OnUpdateCurrentValue((QVariantAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_qbase_update_current_value(void* self, void* value) {
    QVariantAnimation_QBaseUpdateCurrentValue((QVariantAnimation*)self, (QVariant*)value);
}

QVariant* q_variantanimation_interpolated(void* self, void* from, void* to, double progress) {
    return QVariantAnimation_Interpolated((QVariantAnimation*)self, (QVariant*)from, (QVariant*)to, progress);
}

void q_variantanimation_on_interpolated(void* self, QVariant* (*callback)(void*, void*, void*, double)) {
    QVariantAnimation_OnInterpolated((QVariantAnimation*)self, (intptr_t)callback);
}

QVariant* q_variantanimation_qbase_interpolated(void* self, void* from, void* to, double progress) {
    return QVariantAnimation_QBaseInterpolated((QVariantAnimation*)self, (QVariant*)from, (QVariant*)to, progress);
}

const char* q_variantanimation_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_variantanimation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_variantanimation_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

QAnimationGroup* q_variantanimation_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

int32_t q_variantanimation_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

void q_variantanimation_set_direction(void* self, int32_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

int32_t q_variantanimation_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

int32_t q_variantanimation_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

int32_t q_variantanimation_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

void q_variantanimation_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

int32_t q_variantanimation_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

int32_t q_variantanimation_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

void q_variantanimation_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

void q_variantanimation_on_finished(void* self, void (*callback)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_state_changed(void* self, int32_t newState, int32_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

void q_variantanimation_on_state_changed(void* self, void (*callback)(void*, int32_t, int32_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

void q_variantanimation_on_current_loop_changed(void* self, void (*callback)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_direction_changed(void* self, int32_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

void q_variantanimation_on_direction_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

void q_variantanimation_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

void q_variantanimation_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

void q_variantanimation_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

void q_variantanimation_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

void q_variantanimation_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

void q_variantanimation_start1(void* self, int32_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

const char* q_variantanimation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_variantanimation_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_variantanimation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_variantanimation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_variantanimation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_variantanimation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_variantanimation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_variantanimation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_variantanimation_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_variantanimation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_variantanimation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_variantanimation_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_variantanimation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_variantanimation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_variantanimation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_variantanimation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_variantanimation_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_variantanimation_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_variantanimation_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_variantanimation_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_variantanimation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_variantanimation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_variantanimation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_variantanimation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_variantanimation_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_variantanimation_dynamic_property_names");
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

QBindingStorage* q_variantanimation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_variantanimation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_variantanimation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_variantanimation_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_variantanimation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_variantanimation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_variantanimation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_variantanimation_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_variantanimation_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_variantanimation_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_variantanimation_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_variantanimation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_variantanimation_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_variantanimation_update_direction(void* self, int32_t direction) {
    QVariantAnimation_UpdateDirection((QVariantAnimation*)self, direction);
}

void q_variantanimation_qbase_update_direction(void* self, int32_t direction) {
    QVariantAnimation_QBaseUpdateDirection((QVariantAnimation*)self, direction);
}

void q_variantanimation_on_update_direction(void* self, void (*callback)(void*, int32_t)) {
    QVariantAnimation_OnUpdateDirection((QVariantAnimation*)self, (intptr_t)callback);
}

bool q_variantanimation_event_filter(void* self, void* watched, void* event) {
    return QVariantAnimation_EventFilter((QVariantAnimation*)self, (QObject*)watched, (QEvent*)event);
}

bool q_variantanimation_qbase_event_filter(void* self, void* watched, void* event) {
    return QVariantAnimation_QBaseEventFilter((QVariantAnimation*)self, (QObject*)watched, (QEvent*)event);
}

void q_variantanimation_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QVariantAnimation_OnEventFilter((QVariantAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_timer_event(void* self, void* event) {
    QVariantAnimation_TimerEvent((QVariantAnimation*)self, (QTimerEvent*)event);
}

void q_variantanimation_qbase_timer_event(void* self, void* event) {
    QVariantAnimation_QBaseTimerEvent((QVariantAnimation*)self, (QTimerEvent*)event);
}

void q_variantanimation_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QVariantAnimation_OnTimerEvent((QVariantAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_child_event(void* self, void* event) {
    QVariantAnimation_ChildEvent((QVariantAnimation*)self, (QChildEvent*)event);
}

void q_variantanimation_qbase_child_event(void* self, void* event) {
    QVariantAnimation_QBaseChildEvent((QVariantAnimation*)self, (QChildEvent*)event);
}

void q_variantanimation_on_child_event(void* self, void (*callback)(void*, void*)) {
    QVariantAnimation_OnChildEvent((QVariantAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_custom_event(void* self, void* event) {
    QVariantAnimation_CustomEvent((QVariantAnimation*)self, (QEvent*)event);
}

void q_variantanimation_qbase_custom_event(void* self, void* event) {
    QVariantAnimation_QBaseCustomEvent((QVariantAnimation*)self, (QEvent*)event);
}

void q_variantanimation_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QVariantAnimation_OnCustomEvent((QVariantAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_connect_notify(void* self, void* signal) {
    QVariantAnimation_ConnectNotify((QVariantAnimation*)self, (QMetaMethod*)signal);
}

void q_variantanimation_qbase_connect_notify(void* self, void* signal) {
    QVariantAnimation_QBaseConnectNotify((QVariantAnimation*)self, (QMetaMethod*)signal);
}

void q_variantanimation_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QVariantAnimation_OnConnectNotify((QVariantAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_disconnect_notify(void* self, void* signal) {
    QVariantAnimation_DisconnectNotify((QVariantAnimation*)self, (QMetaMethod*)signal);
}

void q_variantanimation_qbase_disconnect_notify(void* self, void* signal) {
    QVariantAnimation_QBaseDisconnectNotify((QVariantAnimation*)self, (QMetaMethod*)signal);
}

void q_variantanimation_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QVariantAnimation_OnDisconnectNotify((QVariantAnimation*)self, (intptr_t)callback);
}

QObject* q_variantanimation_sender(void* self) {
    return QVariantAnimation_Sender((QVariantAnimation*)self);
}

QObject* q_variantanimation_qbase_sender(void* self) {
    return QVariantAnimation_QBaseSender((QVariantAnimation*)self);
}

void q_variantanimation_on_sender(void* self, QObject* (*callback)()) {
    QVariantAnimation_OnSender((QVariantAnimation*)self, (intptr_t)callback);
}

int32_t q_variantanimation_sender_signal_index(void* self) {
    return QVariantAnimation_SenderSignalIndex((QVariantAnimation*)self);
}

int32_t q_variantanimation_qbase_sender_signal_index(void* self) {
    return QVariantAnimation_QBaseSenderSignalIndex((QVariantAnimation*)self);
}

void q_variantanimation_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QVariantAnimation_OnSenderSignalIndex((QVariantAnimation*)self, (intptr_t)callback);
}

int32_t q_variantanimation_receivers(void* self, const char* signal) {
    return QVariantAnimation_Receivers((QVariantAnimation*)self, signal);
}

int32_t q_variantanimation_qbase_receivers(void* self, const char* signal) {
    return QVariantAnimation_QBaseReceivers((QVariantAnimation*)self, signal);
}

void q_variantanimation_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QVariantAnimation_OnReceivers((QVariantAnimation*)self, (intptr_t)callback);
}

bool q_variantanimation_is_signal_connected(void* self, void* signal) {
    return QVariantAnimation_IsSignalConnected((QVariantAnimation*)self, (QMetaMethod*)signal);
}

bool q_variantanimation_qbase_is_signal_connected(void* self, void* signal) {
    return QVariantAnimation_QBaseIsSignalConnected((QVariantAnimation*)self, (QMetaMethod*)signal);
}

void q_variantanimation_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QVariantAnimation_OnIsSignalConnected((QVariantAnimation*)self, (intptr_t)callback);
}

void q_variantanimation_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_variantanimation_delete(void* self) {
    QVariantAnimation_Delete((QVariantAnimation*)(self));
}
