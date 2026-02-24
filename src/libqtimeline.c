#include "libqcoreevent.hpp"
#include "libqeasingcurve.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqtimeline.hpp"
#include "libqtimeline.h"

QTimeLine* q_timeline_new() {
    return QTimeLine_new();
}

QTimeLine* q_timeline_new2(int duration) {
    return QTimeLine_new2(duration);
}

QTimeLine* q_timeline_new3(int duration, void* parent) {
    return QTimeLine_new3(duration, (QObject*)parent);
}

const QMetaObject* q_timeline_meta_object(void* self) {
    return QTimeLine_MetaObject((QTimeLine*)self);
}

void q_timeline_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QTimeLine_OnMetaObject((QTimeLine*)self, (intptr_t)callback);
}

const QMetaObject* q_timeline_super_meta_object(void* self) {
    return QTimeLine_SuperMetaObject((QTimeLine*)self);
}

void* q_timeline_metacast(void* self, const char* param1) {
    return QTimeLine_Metacast((QTimeLine*)self, param1);
}

void q_timeline_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QTimeLine_OnMetacast((QTimeLine*)self, (intptr_t)callback);
}

void* q_timeline_super_metacast(void* self, const char* param1) {
    return QTimeLine_SuperMetacast((QTimeLine*)self, param1);
}

int32_t q_timeline_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTimeLine_Metacall((QTimeLine*)self, param1, param2, param3);
}

void q_timeline_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTimeLine_OnMetacall((QTimeLine*)self, (intptr_t)callback);
}

int32_t q_timeline_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTimeLine_SuperMetacall((QTimeLine*)self, param1, param2, param3);
}

const char* q_timeline_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_timeline_state(void* self) {
    return QTimeLine_State((QTimeLine*)self);
}

int32_t q_timeline_loop_count(void* self) {
    return QTimeLine_LoopCount((QTimeLine*)self);
}

void q_timeline_set_loop_count(void* self, int count) {
    QTimeLine_SetLoopCount((QTimeLine*)self, count);
}

int32_t q_timeline_direction(void* self) {
    return QTimeLine_Direction((QTimeLine*)self);
}

void q_timeline_set_direction(void* self, int32_t direction) {
    QTimeLine_SetDirection((QTimeLine*)self, direction);
}

int32_t q_timeline_duration(void* self) {
    return QTimeLine_Duration((QTimeLine*)self);
}

void q_timeline_set_duration(void* self, int duration) {
    QTimeLine_SetDuration((QTimeLine*)self, duration);
}

int32_t q_timeline_start_frame(void* self) {
    return QTimeLine_StartFrame((QTimeLine*)self);
}

void q_timeline_set_start_frame(void* self, int frame) {
    QTimeLine_SetStartFrame((QTimeLine*)self, frame);
}

int32_t q_timeline_end_frame(void* self) {
    return QTimeLine_EndFrame((QTimeLine*)self);
}

void q_timeline_set_end_frame(void* self, int frame) {
    QTimeLine_SetEndFrame((QTimeLine*)self, frame);
}

void q_timeline_set_frame_range(void* self, int startFrame, int endFrame) {
    QTimeLine_SetFrameRange((QTimeLine*)self, startFrame, endFrame);
}

int32_t q_timeline_update_interval(void* self) {
    return QTimeLine_UpdateInterval((QTimeLine*)self);
}

void q_timeline_set_update_interval(void* self, int interval) {
    QTimeLine_SetUpdateInterval((QTimeLine*)self, interval);
}

QEasingCurve* q_timeline_easing_curve(void* self) {
    return QTimeLine_EasingCurve((QTimeLine*)self);
}

void q_timeline_set_easing_curve(void* self, void* curve) {
    QTimeLine_SetEasingCurve((QTimeLine*)self, (QEasingCurve*)curve);
}

int32_t q_timeline_current_time(void* self) {
    return QTimeLine_CurrentTime((QTimeLine*)self);
}

int32_t q_timeline_current_frame(void* self) {
    return QTimeLine_CurrentFrame((QTimeLine*)self);
}

double q_timeline_current_value(void* self) {
    return QTimeLine_CurrentValue((QTimeLine*)self);
}

int32_t q_timeline_frame_for_time(void* self, int msec) {
    return QTimeLine_FrameForTime((QTimeLine*)self, msec);
}

double q_timeline_value_for_time(void* self, int msec) {
    return QTimeLine_ValueForTime((QTimeLine*)self, msec);
}

void q_timeline_on_value_for_time(void* self, double (*callback)(void*, int)) {
    QTimeLine_OnValueForTime((QTimeLine*)self, (intptr_t)callback);
}

double q_timeline_super_value_for_time(void* self, int msec) {
    return QTimeLine_SuperValueForTime((QTimeLine*)self, msec);
}

void q_timeline_start(void* self) {
    QTimeLine_Start((QTimeLine*)self);
}

void q_timeline_resume(void* self) {
    QTimeLine_Resume((QTimeLine*)self);
}

void q_timeline_stop(void* self) {
    QTimeLine_Stop((QTimeLine*)self);
}

void q_timeline_set_paused(void* self, bool paused) {
    QTimeLine_SetPaused((QTimeLine*)self, paused);
}

void q_timeline_set_current_time(void* self, int msec) {
    QTimeLine_SetCurrentTime((QTimeLine*)self, msec);
}

void q_timeline_toggle_direction(void* self) {
    QTimeLine_ToggleDirection((QTimeLine*)self);
}

void q_timeline_timer_event(void* self, void* event) {
    QTimeLine_TimerEvent((QTimeLine*)self, (QTimerEvent*)event);
}

void q_timeline_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTimeLine_OnTimerEvent((QTimeLine*)self, (intptr_t)callback);
}

void q_timeline_super_timer_event(void* self, void* event) {
    QTimeLine_SuperTimerEvent((QTimeLine*)self, (QTimerEvent*)event);
}

const char* q_timeline_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timeline_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_timeline_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_timeline_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_timeline_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_timeline_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_timeline_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_timeline_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_timeline_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_timeline_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_timeline_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_timeline_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_timeline_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_timeline_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_timeline_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_timeline_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_timeline_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_timeline_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_timeline_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_timeline_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_timeline_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_timeline_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_timeline_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_timeline_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_timeline_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_timeline_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_timeline_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_timeline_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_timeline_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_timeline_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_timeline_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_timeline_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_timeline_dynamic_property_names\n");
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

QBindingStorage* q_timeline_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_timeline_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_timeline_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_timeline_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_timeline_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_timeline_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_timeline_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_timeline_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_timeline_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_timeline_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_timeline_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_timeline_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_timeline_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_timeline_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_timeline_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_timeline_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_timeline_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_timeline_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_timeline_event(void* self, void* event) {
    return QTimeLine_Event((QTimeLine*)self, (QEvent*)event);
}

bool q_timeline_super_event(void* self, void* event) {
    return QTimeLine_SuperEvent((QTimeLine*)self, (QEvent*)event);
}

void q_timeline_on_event(void* self, bool (*callback)(void*, void*)) {
    QTimeLine_OnEvent((QTimeLine*)self, (intptr_t)callback);
}

bool q_timeline_event_filter(void* self, void* watched, void* event) {
    return QTimeLine_EventFilter((QTimeLine*)self, (QObject*)watched, (QEvent*)event);
}

bool q_timeline_super_event_filter(void* self, void* watched, void* event) {
    return QTimeLine_SuperEventFilter((QTimeLine*)self, (QObject*)watched, (QEvent*)event);
}

void q_timeline_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTimeLine_OnEventFilter((QTimeLine*)self, (intptr_t)callback);
}

void q_timeline_child_event(void* self, void* event) {
    QTimeLine_ChildEvent((QTimeLine*)self, (QChildEvent*)event);
}

void q_timeline_super_child_event(void* self, void* event) {
    QTimeLine_SuperChildEvent((QTimeLine*)self, (QChildEvent*)event);
}

void q_timeline_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTimeLine_OnChildEvent((QTimeLine*)self, (intptr_t)callback);
}

void q_timeline_custom_event(void* self, void* event) {
    QTimeLine_CustomEvent((QTimeLine*)self, (QEvent*)event);
}

void q_timeline_super_custom_event(void* self, void* event) {
    QTimeLine_SuperCustomEvent((QTimeLine*)self, (QEvent*)event);
}

void q_timeline_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTimeLine_OnCustomEvent((QTimeLine*)self, (intptr_t)callback);
}

void q_timeline_connect_notify(void* self, void* signal) {
    QTimeLine_ConnectNotify((QTimeLine*)self, (QMetaMethod*)signal);
}

void q_timeline_super_connect_notify(void* self, void* signal) {
    QTimeLine_SuperConnectNotify((QTimeLine*)self, (QMetaMethod*)signal);
}

void q_timeline_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTimeLine_OnConnectNotify((QTimeLine*)self, (intptr_t)callback);
}

void q_timeline_disconnect_notify(void* self, void* signal) {
    QTimeLine_DisconnectNotify((QTimeLine*)self, (QMetaMethod*)signal);
}

void q_timeline_super_disconnect_notify(void* self, void* signal) {
    QTimeLine_SuperDisconnectNotify((QTimeLine*)self, (QMetaMethod*)signal);
}

void q_timeline_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTimeLine_OnDisconnectNotify((QTimeLine*)self, (intptr_t)callback);
}

QObject* q_timeline_sender(void* self) {
    return QTimeLine_Sender((QTimeLine*)self);
}

QObject* q_timeline_super_sender(void* self) {
    return QTimeLine_SuperSender((QTimeLine*)self);
}

void q_timeline_on_sender(void* self, QObject* (*callback)()) {
    QTimeLine_OnSender((QTimeLine*)self, (intptr_t)callback);
}

int32_t q_timeline_sender_signal_index(void* self) {
    return QTimeLine_SenderSignalIndex((QTimeLine*)self);
}

int32_t q_timeline_super_sender_signal_index(void* self) {
    return QTimeLine_SuperSenderSignalIndex((QTimeLine*)self);
}

void q_timeline_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTimeLine_OnSenderSignalIndex((QTimeLine*)self, (intptr_t)callback);
}

int32_t q_timeline_receivers(void* self, const char* signal) {
    return QTimeLine_Receivers((QTimeLine*)self, signal);
}

int32_t q_timeline_super_receivers(void* self, const char* signal) {
    return QTimeLine_SuperReceivers((QTimeLine*)self, signal);
}

void q_timeline_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTimeLine_OnReceivers((QTimeLine*)self, (intptr_t)callback);
}

bool q_timeline_is_signal_connected(void* self, void* signal) {
    return QTimeLine_IsSignalConnected((QTimeLine*)self, (QMetaMethod*)signal);
}

bool q_timeline_super_is_signal_connected(void* self, void* signal) {
    return QTimeLine_SuperIsSignalConnected((QTimeLine*)self, (QMetaMethod*)signal);
}

void q_timeline_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTimeLine_OnIsSignalConnected((QTimeLine*)self, (intptr_t)callback);
}

void q_timeline_on_value_changed(void* self, void (*callback)(void*, double)) {
    QTimeLine_Connect_ValueChanged((QTimeLine*)self, (intptr_t)callback);
}

void q_timeline_on_frame_changed(void* self, void (*callback)(void*, int)) {
    QTimeLine_Connect_FrameChanged((QTimeLine*)self, (intptr_t)callback);
}

void q_timeline_on_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QTimeLine_Connect_StateChanged((QTimeLine*)self, (intptr_t)callback);
}

void q_timeline_on_finished(void* self, void (*callback)(void*)) {
    QTimeLine_Connect_Finished((QTimeLine*)self, (intptr_t)callback);
}

void q_timeline_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_timeline_delete(void* self) {
    QTimeLine_Delete((QTimeLine*)(self));
}
