#include "libqabstractanimation.hpp"
#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqvariant.hpp"
#include "libqvariantanimation.hpp"
#include "libqpropertyanimation.hpp"
#include "libqpropertyanimation.h"

QPropertyAnimation* q_propertyanimation_new() {
    return QPropertyAnimation_new();
}

QPropertyAnimation* q_propertyanimation_new2(void* target, char* propertyName) {
    return QPropertyAnimation_new2((QObject*)target, qstring(propertyName));
}

QPropertyAnimation* q_propertyanimation_new3(void* parent) {
    return QPropertyAnimation_new3((QObject*)parent);
}

QPropertyAnimation* q_propertyanimation_new4(void* target, char* propertyName, void* parent) {
    return QPropertyAnimation_new4((QObject*)target, qstring(propertyName), (QObject*)parent);
}

const QMetaObject* q_propertyanimation_meta_object(void* self) {
    return QPropertyAnimation_MetaObject((QPropertyAnimation*)self);
}

void q_propertyanimation_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QPropertyAnimation_OnMetaObject((QPropertyAnimation*)self, (intptr_t)callback);
}

const QMetaObject* q_propertyanimation_super_meta_object(void* self) {
    return QPropertyAnimation_SuperMetaObject((QPropertyAnimation*)self);
}

void* q_propertyanimation_metacast(void* self, const char* param1) {
    return QPropertyAnimation_Metacast((QPropertyAnimation*)self, param1);
}

void q_propertyanimation_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPropertyAnimation_OnMetacast((QPropertyAnimation*)self, (intptr_t)callback);
}

void* q_propertyanimation_super_metacast(void* self, const char* param1) {
    return QPropertyAnimation_SuperMetacast((QPropertyAnimation*)self, param1);
}

int32_t q_propertyanimation_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPropertyAnimation_Metacall((QPropertyAnimation*)self, param1, param2, param3);
}

void q_propertyanimation_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPropertyAnimation_OnMetacall((QPropertyAnimation*)self, (intptr_t)callback);
}

int32_t q_propertyanimation_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPropertyAnimation_SuperMetacall((QPropertyAnimation*)self, param1, param2, param3);
}

const char* q_propertyanimation_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_propertyanimation_target_object(void* self) {
    return QPropertyAnimation_TargetObject((QPropertyAnimation*)self);
}

void q_propertyanimation_set_target_object(void* self, void* target) {
    QPropertyAnimation_SetTargetObject((QPropertyAnimation*)self, (QObject*)target);
}

char* q_propertyanimation_property_name(void* self) {
    libqt_string _str = QPropertyAnimation_PropertyName((QPropertyAnimation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_propertyanimation_set_property_name(void* self, char* propertyName) {
    QPropertyAnimation_SetPropertyName((QPropertyAnimation*)self, qstring(propertyName));
}

bool q_propertyanimation_event(void* self, void* event) {
    return QPropertyAnimation_Event((QPropertyAnimation*)self, (QEvent*)event);
}

void q_propertyanimation_on_event(void* self, bool (*callback)(void*, void*)) {
    QPropertyAnimation_OnEvent((QPropertyAnimation*)self, (intptr_t)callback);
}

bool q_propertyanimation_super_event(void* self, void* event) {
    return QPropertyAnimation_SuperEvent((QPropertyAnimation*)self, (QEvent*)event);
}

void q_propertyanimation_update_current_value(void* self, void* value) {
    QPropertyAnimation_UpdateCurrentValue((QPropertyAnimation*)self, (QVariant*)value);
}

void q_propertyanimation_on_update_current_value(void* self, void (*callback)(void*, void*)) {
    QPropertyAnimation_OnUpdateCurrentValue((QPropertyAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_super_update_current_value(void* self, void* value) {
    QPropertyAnimation_SuperUpdateCurrentValue((QPropertyAnimation*)self, (QVariant*)value);
}

void q_propertyanimation_update_state(void* self, int32_t newState, int32_t oldState) {
    QPropertyAnimation_UpdateState((QPropertyAnimation*)self, newState, oldState);
}

void q_propertyanimation_on_update_state(void* self, void (*callback)(void*, int32_t, int32_t)) {
    QPropertyAnimation_OnUpdateState((QPropertyAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_super_update_state(void* self, int32_t newState, int32_t oldState) {
    QPropertyAnimation_SuperUpdateState((QPropertyAnimation*)self, newState, oldState);
}

const char* q_propertyanimation_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_propertyanimation_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_propertyanimation_start_value(void* self) {
    return QVariantAnimation_StartValue((QVariantAnimation*)self);
}

void q_propertyanimation_set_start_value(void* self, void* value) {
    QVariantAnimation_SetStartValue((QVariantAnimation*)self, (QVariant*)value);
}

QVariant* q_propertyanimation_end_value(void* self) {
    return QVariantAnimation_EndValue((QVariantAnimation*)self);
}

void q_propertyanimation_set_end_value(void* self, void* value) {
    QVariantAnimation_SetEndValue((QVariantAnimation*)self, (QVariant*)value);
}

QVariant* q_propertyanimation_key_value_at(void* self, double step) {
    return QVariantAnimation_KeyValueAt((QVariantAnimation*)self, step);
}

void q_propertyanimation_set_key_value_at(void* self, double step, void* value) {
    QVariantAnimation_SetKeyValueAt((QVariantAnimation*)self, step, (QVariant*)value);
}

libqt_list /* of pair_double_qvariant tuple of double and QVariant* */ q_propertyanimation_key_values(void* self) {
    return QVariantAnimation_KeyValues((QVariantAnimation*)self);
}

void q_propertyanimation_set_key_values(void* self, libqt_list /* of pair_double_qvariant tuple of double and QVariant* */ values) {
    QVariantAnimation_SetKeyValues((QVariantAnimation*)self, values);
}

QVariant* q_propertyanimation_current_value(void* self) {
    return QVariantAnimation_CurrentValue((QVariantAnimation*)self);
}

void q_propertyanimation_set_duration(void* self, int msecs) {
    QVariantAnimation_SetDuration((QVariantAnimation*)self, msecs);
}

QEasingCurve* q_propertyanimation_easing_curve(void* self) {
    return QVariantAnimation_EasingCurve((QVariantAnimation*)self);
}

void q_propertyanimation_set_easing_curve(void* self, void* easing) {
    QVariantAnimation_SetEasingCurve((QVariantAnimation*)self, (QEasingCurve*)easing);
}

void q_propertyanimation_value_changed(void* self, void* value) {
    QVariantAnimation_ValueChanged((QVariantAnimation*)self, (QVariant*)value);
}

void q_propertyanimation_on_value_changed(void* self, void (*callback)(void*, void*)) {
    QVariantAnimation_Connect_ValueChanged((QVariantAnimation*)self, (intptr_t)callback);
}

int32_t q_propertyanimation_state(void* self) {
    return QAbstractAnimation_State((QAbstractAnimation*)self);
}

QAnimationGroup* q_propertyanimation_group(void* self) {
    return QAbstractAnimation_Group((QAbstractAnimation*)self);
}

int32_t q_propertyanimation_direction(void* self) {
    return QAbstractAnimation_Direction((QAbstractAnimation*)self);
}

void q_propertyanimation_set_direction(void* self, int32_t direction) {
    QAbstractAnimation_SetDirection((QAbstractAnimation*)self, direction);
}

int32_t q_propertyanimation_current_time(void* self) {
    return QAbstractAnimation_CurrentTime((QAbstractAnimation*)self);
}

int32_t q_propertyanimation_current_loop_time(void* self) {
    return QAbstractAnimation_CurrentLoopTime((QAbstractAnimation*)self);
}

int32_t q_propertyanimation_loop_count(void* self) {
    return QAbstractAnimation_LoopCount((QAbstractAnimation*)self);
}

void q_propertyanimation_set_loop_count(void* self, int loopCount) {
    QAbstractAnimation_SetLoopCount((QAbstractAnimation*)self, loopCount);
}

int32_t q_propertyanimation_current_loop(void* self) {
    return QAbstractAnimation_CurrentLoop((QAbstractAnimation*)self);
}

int32_t q_propertyanimation_total_duration(void* self) {
    return QAbstractAnimation_TotalDuration((QAbstractAnimation*)self);
}

void q_propertyanimation_finished(void* self) {
    QAbstractAnimation_Finished((QAbstractAnimation*)self);
}

void q_propertyanimation_on_finished(void* self, void (*callback)(void*)) {
    QAbstractAnimation_Connect_Finished((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_state_changed(void* self, int32_t newState, int32_t oldState) {
    QAbstractAnimation_StateChanged((QAbstractAnimation*)self, newState, oldState);
}

void q_propertyanimation_on_state_changed(void* self, void (*callback)(void*, int32_t, int32_t)) {
    QAbstractAnimation_Connect_StateChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_current_loop_changed(void* self, int currentLoop) {
    QAbstractAnimation_CurrentLoopChanged((QAbstractAnimation*)self, currentLoop);
}

void q_propertyanimation_on_current_loop_changed(void* self, void (*callback)(void*, int)) {
    QAbstractAnimation_Connect_CurrentLoopChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_direction_changed(void* self, int32_t param1) {
    QAbstractAnimation_DirectionChanged((QAbstractAnimation*)self, param1);
}

void q_propertyanimation_on_direction_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstractAnimation_Connect_DirectionChanged((QAbstractAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_start(void* self) {
    QAbstractAnimation_Start((QAbstractAnimation*)self);
}

void q_propertyanimation_pause(void* self) {
    QAbstractAnimation_Pause((QAbstractAnimation*)self);
}

void q_propertyanimation_resume(void* self) {
    QAbstractAnimation_Resume((QAbstractAnimation*)self);
}

void q_propertyanimation_set_paused(void* self, bool paused) {
    QAbstractAnimation_SetPaused((QAbstractAnimation*)self, paused);
}

void q_propertyanimation_stop(void* self) {
    QAbstractAnimation_Stop((QAbstractAnimation*)self);
}

void q_propertyanimation_set_current_time(void* self, int msecs) {
    QAbstractAnimation_SetCurrentTime((QAbstractAnimation*)self, msecs);
}

void q_propertyanimation_start1(void* self, int32_t policy) {
    QAbstractAnimation_Start1((QAbstractAnimation*)self, policy);
}

const char* q_propertyanimation_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_propertyanimation_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_propertyanimation_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_propertyanimation_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_propertyanimation_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_propertyanimation_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_propertyanimation_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_propertyanimation_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_propertyanimation_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_propertyanimation_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_propertyanimation_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_propertyanimation_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_propertyanimation_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_propertyanimation_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_propertyanimation_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_propertyanimation_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_propertyanimation_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_propertyanimation_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_propertyanimation_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_propertyanimation_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_propertyanimation_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_propertyanimation_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_propertyanimation_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_propertyanimation_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_propertyanimation_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_propertyanimation_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_propertyanimation_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_propertyanimation_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_propertyanimation_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_propertyanimation_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_propertyanimation_dynamic_property_names\n");
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

QBindingStorage* q_propertyanimation_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_propertyanimation_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_propertyanimation_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_propertyanimation_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_propertyanimation_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_propertyanimation_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_propertyanimation_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_propertyanimation_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_propertyanimation_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_propertyanimation_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_propertyanimation_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_propertyanimation_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_propertyanimation_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_propertyanimation_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_propertyanimation_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_propertyanimation_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_propertyanimation_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_propertyanimation_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

int32_t q_propertyanimation_duration(void* self) {
    return QPropertyAnimation_Duration((QPropertyAnimation*)self);
}

int32_t q_propertyanimation_super_duration(void* self) {
    return QPropertyAnimation_SuperDuration((QPropertyAnimation*)self);
}

void q_propertyanimation_on_duration(void* self, int32_t (*callback)()) {
    QPropertyAnimation_OnDuration((QPropertyAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_update_current_time(void* self, int param1) {
    QPropertyAnimation_UpdateCurrentTime((QPropertyAnimation*)self, param1);
}

void q_propertyanimation_super_update_current_time(void* self, int param1) {
    QPropertyAnimation_SuperUpdateCurrentTime((QPropertyAnimation*)self, param1);
}

void q_propertyanimation_on_update_current_time(void* self, void (*callback)(void*, int)) {
    QPropertyAnimation_OnUpdateCurrentTime((QPropertyAnimation*)self, (intptr_t)callback);
}

QVariant* q_propertyanimation_interpolated(void* self, void* from, void* to, double progress) {
    return QPropertyAnimation_Interpolated((QPropertyAnimation*)self, (QVariant*)from, (QVariant*)to, progress);
}

QVariant* q_propertyanimation_super_interpolated(void* self, void* from, void* to, double progress) {
    return QPropertyAnimation_SuperInterpolated((QPropertyAnimation*)self, (QVariant*)from, (QVariant*)to, progress);
}

void q_propertyanimation_on_interpolated(void* self, QVariant* (*callback)(void*, void*, void*, double)) {
    QPropertyAnimation_OnInterpolated((QPropertyAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_update_direction(void* self, int32_t direction) {
    QPropertyAnimation_UpdateDirection((QPropertyAnimation*)self, direction);
}

void q_propertyanimation_super_update_direction(void* self, int32_t direction) {
    QPropertyAnimation_SuperUpdateDirection((QPropertyAnimation*)self, direction);
}

void q_propertyanimation_on_update_direction(void* self, void (*callback)(void*, int32_t)) {
    QPropertyAnimation_OnUpdateDirection((QPropertyAnimation*)self, (intptr_t)callback);
}

bool q_propertyanimation_event_filter(void* self, void* watched, void* event) {
    return QPropertyAnimation_EventFilter((QPropertyAnimation*)self, (QObject*)watched, (QEvent*)event);
}

bool q_propertyanimation_super_event_filter(void* self, void* watched, void* event) {
    return QPropertyAnimation_SuperEventFilter((QPropertyAnimation*)self, (QObject*)watched, (QEvent*)event);
}

void q_propertyanimation_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPropertyAnimation_OnEventFilter((QPropertyAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_timer_event(void* self, void* event) {
    QPropertyAnimation_TimerEvent((QPropertyAnimation*)self, (QTimerEvent*)event);
}

void q_propertyanimation_super_timer_event(void* self, void* event) {
    QPropertyAnimation_SuperTimerEvent((QPropertyAnimation*)self, (QTimerEvent*)event);
}

void q_propertyanimation_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPropertyAnimation_OnTimerEvent((QPropertyAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_child_event(void* self, void* event) {
    QPropertyAnimation_ChildEvent((QPropertyAnimation*)self, (QChildEvent*)event);
}

void q_propertyanimation_super_child_event(void* self, void* event) {
    QPropertyAnimation_SuperChildEvent((QPropertyAnimation*)self, (QChildEvent*)event);
}

void q_propertyanimation_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPropertyAnimation_OnChildEvent((QPropertyAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_custom_event(void* self, void* event) {
    QPropertyAnimation_CustomEvent((QPropertyAnimation*)self, (QEvent*)event);
}

void q_propertyanimation_super_custom_event(void* self, void* event) {
    QPropertyAnimation_SuperCustomEvent((QPropertyAnimation*)self, (QEvent*)event);
}

void q_propertyanimation_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPropertyAnimation_OnCustomEvent((QPropertyAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_connect_notify(void* self, void* signal) {
    QPropertyAnimation_ConnectNotify((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

void q_propertyanimation_super_connect_notify(void* self, void* signal) {
    QPropertyAnimation_SuperConnectNotify((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

void q_propertyanimation_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPropertyAnimation_OnConnectNotify((QPropertyAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_disconnect_notify(void* self, void* signal) {
    QPropertyAnimation_DisconnectNotify((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

void q_propertyanimation_super_disconnect_notify(void* self, void* signal) {
    QPropertyAnimation_SuperDisconnectNotify((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

void q_propertyanimation_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPropertyAnimation_OnDisconnectNotify((QPropertyAnimation*)self, (intptr_t)callback);
}

QObject* q_propertyanimation_sender(void* self) {
    return QPropertyAnimation_Sender((QPropertyAnimation*)self);
}

QObject* q_propertyanimation_super_sender(void* self) {
    return QPropertyAnimation_SuperSender((QPropertyAnimation*)self);
}

void q_propertyanimation_on_sender(void* self, QObject* (*callback)()) {
    QPropertyAnimation_OnSender((QPropertyAnimation*)self, (intptr_t)callback);
}

int32_t q_propertyanimation_sender_signal_index(void* self) {
    return QPropertyAnimation_SenderSignalIndex((QPropertyAnimation*)self);
}

int32_t q_propertyanimation_super_sender_signal_index(void* self) {
    return QPropertyAnimation_SuperSenderSignalIndex((QPropertyAnimation*)self);
}

void q_propertyanimation_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPropertyAnimation_OnSenderSignalIndex((QPropertyAnimation*)self, (intptr_t)callback);
}

int32_t q_propertyanimation_receivers(void* self, const char* signal) {
    return QPropertyAnimation_Receivers((QPropertyAnimation*)self, signal);
}

int32_t q_propertyanimation_super_receivers(void* self, const char* signal) {
    return QPropertyAnimation_SuperReceivers((QPropertyAnimation*)self, signal);
}

void q_propertyanimation_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPropertyAnimation_OnReceivers((QPropertyAnimation*)self, (intptr_t)callback);
}

bool q_propertyanimation_is_signal_connected(void* self, void* signal) {
    return QPropertyAnimation_IsSignalConnected((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

bool q_propertyanimation_super_is_signal_connected(void* self, void* signal) {
    return QPropertyAnimation_SuperIsSignalConnected((QPropertyAnimation*)self, (QMetaMethod*)signal);
}

void q_propertyanimation_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPropertyAnimation_OnIsSignalConnected((QPropertyAnimation*)self, (intptr_t)callback);
}

void q_propertyanimation_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_propertyanimation_delete(void* self) {
    QPropertyAnimation_Delete((QPropertyAnimation*)(self));
}
