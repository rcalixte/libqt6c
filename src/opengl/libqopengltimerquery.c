#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqopengltimerquery.hpp"
#include "libqopengltimerquery.h"

QOpenGLTimerQuery* q_opengltimerquery_new() {
    return QOpenGLTimerQuery_new();
}

QOpenGLTimerQuery* q_opengltimerquery_new2(void* parent) {
    return QOpenGLTimerQuery_new2((QObject*)parent);
}

const QMetaObject* q_opengltimerquery_meta_object(void* self) {
    return QOpenGLTimerQuery_MetaObject((QOpenGLTimerQuery*)self);
}

void q_opengltimerquery_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QOpenGLTimerQuery_OnMetaObject((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

const QMetaObject* q_opengltimerquery_qbase_meta_object(void* self) {
    return QOpenGLTimerQuery_QBaseMetaObject((QOpenGLTimerQuery*)self);
}

void* q_opengltimerquery_metacast(void* self, const char* param1) {
    return QOpenGLTimerQuery_Metacast((QOpenGLTimerQuery*)self, param1);
}

void q_opengltimerquery_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QOpenGLTimerQuery_OnMetacast((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

void* q_opengltimerquery_qbase_metacast(void* self, const char* param1) {
    return QOpenGLTimerQuery_QBaseMetacast((QOpenGLTimerQuery*)self, param1);
}

int32_t q_opengltimerquery_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLTimerQuery_Metacall((QOpenGLTimerQuery*)self, param1, param2, param3);
}

void q_opengltimerquery_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QOpenGLTimerQuery_OnMetacall((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

int32_t q_opengltimerquery_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLTimerQuery_QBaseMetacall((QOpenGLTimerQuery*)self, param1, param2, param3);
}

const char* q_opengltimerquery_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_opengltimerquery_create(void* self) {
    return QOpenGLTimerQuery_Create((QOpenGLTimerQuery*)self);
}

void q_opengltimerquery_destroy(void* self) {
    QOpenGLTimerQuery_Destroy((QOpenGLTimerQuery*)self);
}

bool q_opengltimerquery_is_created(void* self) {
    return QOpenGLTimerQuery_IsCreated((QOpenGLTimerQuery*)self);
}

uint32_t q_opengltimerquery_object_id(void* self) {
    return QOpenGLTimerQuery_ObjectId((QOpenGLTimerQuery*)self);
}

void q_opengltimerquery_begin(void* self) {
    QOpenGLTimerQuery_Begin((QOpenGLTimerQuery*)self);
}

void q_opengltimerquery_end(void* self) {
    QOpenGLTimerQuery_End((QOpenGLTimerQuery*)self);
}

uint64_t q_opengltimerquery_wait_for_timestamp(void* self) {
    return QOpenGLTimerQuery_WaitForTimestamp((QOpenGLTimerQuery*)self);
}

void q_opengltimerquery_record_timestamp(void* self) {
    QOpenGLTimerQuery_RecordTimestamp((QOpenGLTimerQuery*)self);
}

bool q_opengltimerquery_is_result_available(void* self) {
    return QOpenGLTimerQuery_IsResultAvailable((QOpenGLTimerQuery*)self);
}

uint64_t q_opengltimerquery_wait_for_result(void* self) {
    return QOpenGLTimerQuery_WaitForResult((QOpenGLTimerQuery*)self);
}

const char* q_opengltimerquery_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_opengltimerquery_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_opengltimerquery_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_opengltimerquery_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_opengltimerquery_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_opengltimerquery_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_opengltimerquery_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_opengltimerquery_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_opengltimerquery_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_opengltimerquery_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_opengltimerquery_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_opengltimerquery_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_opengltimerquery_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_opengltimerquery_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_opengltimerquery_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_opengltimerquery_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_opengltimerquery_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_opengltimerquery_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_opengltimerquery_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_opengltimerquery_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_opengltimerquery_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_opengltimerquery_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_opengltimerquery_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_opengltimerquery_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_opengltimerquery_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_opengltimerquery_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_opengltimerquery_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_opengltimerquery_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_opengltimerquery_dynamic_property_names\n");
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

QBindingStorage* q_opengltimerquery_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_opengltimerquery_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_opengltimerquery_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_opengltimerquery_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_opengltimerquery_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_opengltimerquery_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_opengltimerquery_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_opengltimerquery_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_opengltimerquery_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_opengltimerquery_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_opengltimerquery_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_opengltimerquery_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_opengltimerquery_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_opengltimerquery_event(void* self, void* event) {
    return QOpenGLTimerQuery_Event((QOpenGLTimerQuery*)self, (QEvent*)event);
}

bool q_opengltimerquery_qbase_event(void* self, void* event) {
    return QOpenGLTimerQuery_QBaseEvent((QOpenGLTimerQuery*)self, (QEvent*)event);
}

void q_opengltimerquery_on_event(void* self, bool (*callback)(void*, void*)) {
    QOpenGLTimerQuery_OnEvent((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

bool q_opengltimerquery_event_filter(void* self, void* watched, void* event) {
    return QOpenGLTimerQuery_EventFilter((QOpenGLTimerQuery*)self, (QObject*)watched, (QEvent*)event);
}

bool q_opengltimerquery_qbase_event_filter(void* self, void* watched, void* event) {
    return QOpenGLTimerQuery_QBaseEventFilter((QOpenGLTimerQuery*)self, (QObject*)watched, (QEvent*)event);
}

void q_opengltimerquery_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QOpenGLTimerQuery_OnEventFilter((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

void q_opengltimerquery_timer_event(void* self, void* event) {
    QOpenGLTimerQuery_TimerEvent((QOpenGLTimerQuery*)self, (QTimerEvent*)event);
}

void q_opengltimerquery_qbase_timer_event(void* self, void* event) {
    QOpenGLTimerQuery_QBaseTimerEvent((QOpenGLTimerQuery*)self, (QTimerEvent*)event);
}

void q_opengltimerquery_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLTimerQuery_OnTimerEvent((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

void q_opengltimerquery_child_event(void* self, void* event) {
    QOpenGLTimerQuery_ChildEvent((QOpenGLTimerQuery*)self, (QChildEvent*)event);
}

void q_opengltimerquery_qbase_child_event(void* self, void* event) {
    QOpenGLTimerQuery_QBaseChildEvent((QOpenGLTimerQuery*)self, (QChildEvent*)event);
}

void q_opengltimerquery_on_child_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLTimerQuery_OnChildEvent((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

void q_opengltimerquery_custom_event(void* self, void* event) {
    QOpenGLTimerQuery_CustomEvent((QOpenGLTimerQuery*)self, (QEvent*)event);
}

void q_opengltimerquery_qbase_custom_event(void* self, void* event) {
    QOpenGLTimerQuery_QBaseCustomEvent((QOpenGLTimerQuery*)self, (QEvent*)event);
}

void q_opengltimerquery_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLTimerQuery_OnCustomEvent((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

void q_opengltimerquery_connect_notify(void* self, void* signal) {
    QOpenGLTimerQuery_ConnectNotify((QOpenGLTimerQuery*)self, (QMetaMethod*)signal);
}

void q_opengltimerquery_qbase_connect_notify(void* self, void* signal) {
    QOpenGLTimerQuery_QBaseConnectNotify((QOpenGLTimerQuery*)self, (QMetaMethod*)signal);
}

void q_opengltimerquery_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLTimerQuery_OnConnectNotify((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

void q_opengltimerquery_disconnect_notify(void* self, void* signal) {
    QOpenGLTimerQuery_DisconnectNotify((QOpenGLTimerQuery*)self, (QMetaMethod*)signal);
}

void q_opengltimerquery_qbase_disconnect_notify(void* self, void* signal) {
    QOpenGLTimerQuery_QBaseDisconnectNotify((QOpenGLTimerQuery*)self, (QMetaMethod*)signal);
}

void q_opengltimerquery_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLTimerQuery_OnDisconnectNotify((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

QObject* q_opengltimerquery_sender(void* self) {
    return QOpenGLTimerQuery_Sender((QOpenGLTimerQuery*)self);
}

QObject* q_opengltimerquery_qbase_sender(void* self) {
    return QOpenGLTimerQuery_QBaseSender((QOpenGLTimerQuery*)self);
}

void q_opengltimerquery_on_sender(void* self, QObject* (*callback)()) {
    QOpenGLTimerQuery_OnSender((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

int32_t q_opengltimerquery_sender_signal_index(void* self) {
    return QOpenGLTimerQuery_SenderSignalIndex((QOpenGLTimerQuery*)self);
}

int32_t q_opengltimerquery_qbase_sender_signal_index(void* self) {
    return QOpenGLTimerQuery_QBaseSenderSignalIndex((QOpenGLTimerQuery*)self);
}

void q_opengltimerquery_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QOpenGLTimerQuery_OnSenderSignalIndex((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

int32_t q_opengltimerquery_receivers(void* self, const char* signal) {
    return QOpenGLTimerQuery_Receivers((QOpenGLTimerQuery*)self, signal);
}

int32_t q_opengltimerquery_qbase_receivers(void* self, const char* signal) {
    return QOpenGLTimerQuery_QBaseReceivers((QOpenGLTimerQuery*)self, signal);
}

void q_opengltimerquery_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QOpenGLTimerQuery_OnReceivers((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

bool q_opengltimerquery_is_signal_connected(void* self, void* signal) {
    return QOpenGLTimerQuery_IsSignalConnected((QOpenGLTimerQuery*)self, (QMetaMethod*)signal);
}

bool q_opengltimerquery_qbase_is_signal_connected(void* self, void* signal) {
    return QOpenGLTimerQuery_QBaseIsSignalConnected((QOpenGLTimerQuery*)self, (QMetaMethod*)signal);
}

void q_opengltimerquery_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QOpenGLTimerQuery_OnIsSignalConnected((QOpenGLTimerQuery*)self, (intptr_t)callback);
}

void q_opengltimerquery_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_opengltimerquery_delete(void* self) {
    QOpenGLTimerQuery_Delete((QOpenGLTimerQuery*)(self));
}

QOpenGLTimeMonitor* q_opengltimemonitor_new() {
    return QOpenGLTimeMonitor_new();
}

QOpenGLTimeMonitor* q_opengltimemonitor_new2(void* parent) {
    return QOpenGLTimeMonitor_new2((QObject*)parent);
}

const QMetaObject* q_opengltimemonitor_meta_object(void* self) {
    return QOpenGLTimeMonitor_MetaObject((QOpenGLTimeMonitor*)self);
}

void q_opengltimemonitor_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QOpenGLTimeMonitor_OnMetaObject((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

const QMetaObject* q_opengltimemonitor_qbase_meta_object(void* self) {
    return QOpenGLTimeMonitor_QBaseMetaObject((QOpenGLTimeMonitor*)self);
}

void* q_opengltimemonitor_metacast(void* self, const char* param1) {
    return QOpenGLTimeMonitor_Metacast((QOpenGLTimeMonitor*)self, param1);
}

void q_opengltimemonitor_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QOpenGLTimeMonitor_OnMetacast((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

void* q_opengltimemonitor_qbase_metacast(void* self, const char* param1) {
    return QOpenGLTimeMonitor_QBaseMetacast((QOpenGLTimeMonitor*)self, param1);
}

int32_t q_opengltimemonitor_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLTimeMonitor_Metacall((QOpenGLTimeMonitor*)self, param1, param2, param3);
}

void q_opengltimemonitor_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QOpenGLTimeMonitor_OnMetacall((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

int32_t q_opengltimemonitor_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QOpenGLTimeMonitor_QBaseMetacall((QOpenGLTimeMonitor*)self, param1, param2, param3);
}

const char* q_opengltimemonitor_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_opengltimemonitor_set_sample_count(void* self, int sampleCount) {
    QOpenGLTimeMonitor_SetSampleCount((QOpenGLTimeMonitor*)self, sampleCount);
}

int32_t q_opengltimemonitor_sample_count(void* self) {
    return QOpenGLTimeMonitor_SampleCount((QOpenGLTimeMonitor*)self);
}

bool q_opengltimemonitor_create(void* self) {
    return QOpenGLTimeMonitor_Create((QOpenGLTimeMonitor*)self);
}

void q_opengltimemonitor_destroy(void* self) {
    QOpenGLTimeMonitor_Destroy((QOpenGLTimeMonitor*)self);
}

bool q_opengltimemonitor_is_created(void* self) {
    return QOpenGLTimeMonitor_IsCreated((QOpenGLTimeMonitor*)self);
}

libqt_list /* of uint32_t */ q_opengltimemonitor_object_ids(void* self) {
    libqt_list _arr = QOpenGLTimeMonitor_ObjectIds((QOpenGLTimeMonitor*)self);
    return _arr;
}

int32_t q_opengltimemonitor_record_sample(void* self) {
    return QOpenGLTimeMonitor_RecordSample((QOpenGLTimeMonitor*)self);
}

bool q_opengltimemonitor_is_result_available(void* self) {
    return QOpenGLTimeMonitor_IsResultAvailable((QOpenGLTimeMonitor*)self);
}

libqt_list /* of uint64_t */ q_opengltimemonitor_wait_for_samples(void* self) {
    libqt_list _arr = QOpenGLTimeMonitor_WaitForSamples((QOpenGLTimeMonitor*)self);
    return _arr;
}

libqt_list /* of uint64_t */ q_opengltimemonitor_wait_for_intervals(void* self) {
    libqt_list _arr = QOpenGLTimeMonitor_WaitForIntervals((QOpenGLTimeMonitor*)self);
    return _arr;
}

void q_opengltimemonitor_reset(void* self) {
    QOpenGLTimeMonitor_Reset((QOpenGLTimeMonitor*)self);
}

const char* q_opengltimemonitor_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_opengltimemonitor_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_opengltimemonitor_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_opengltimemonitor_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_opengltimemonitor_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_opengltimemonitor_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_opengltimemonitor_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_opengltimemonitor_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_opengltimemonitor_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_opengltimemonitor_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_opengltimemonitor_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_opengltimemonitor_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_opengltimemonitor_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_opengltimemonitor_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_opengltimemonitor_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_opengltimemonitor_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_opengltimemonitor_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_opengltimemonitor_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_opengltimemonitor_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_opengltimemonitor_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_opengltimemonitor_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_opengltimemonitor_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_opengltimemonitor_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_opengltimemonitor_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_opengltimemonitor_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_opengltimemonitor_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_opengltimemonitor_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_opengltimemonitor_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_opengltimemonitor_dynamic_property_names\n");
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

QBindingStorage* q_opengltimemonitor_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_opengltimemonitor_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_opengltimemonitor_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_opengltimemonitor_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_opengltimemonitor_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_opengltimemonitor_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_opengltimemonitor_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_opengltimemonitor_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_opengltimemonitor_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_opengltimemonitor_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_opengltimemonitor_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_opengltimemonitor_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_opengltimemonitor_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_opengltimemonitor_event(void* self, void* event) {
    return QOpenGLTimeMonitor_Event((QOpenGLTimeMonitor*)self, (QEvent*)event);
}

bool q_opengltimemonitor_qbase_event(void* self, void* event) {
    return QOpenGLTimeMonitor_QBaseEvent((QOpenGLTimeMonitor*)self, (QEvent*)event);
}

void q_opengltimemonitor_on_event(void* self, bool (*callback)(void*, void*)) {
    QOpenGLTimeMonitor_OnEvent((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

bool q_opengltimemonitor_event_filter(void* self, void* watched, void* event) {
    return QOpenGLTimeMonitor_EventFilter((QOpenGLTimeMonitor*)self, (QObject*)watched, (QEvent*)event);
}

bool q_opengltimemonitor_qbase_event_filter(void* self, void* watched, void* event) {
    return QOpenGLTimeMonitor_QBaseEventFilter((QOpenGLTimeMonitor*)self, (QObject*)watched, (QEvent*)event);
}

void q_opengltimemonitor_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QOpenGLTimeMonitor_OnEventFilter((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

void q_opengltimemonitor_timer_event(void* self, void* event) {
    QOpenGLTimeMonitor_TimerEvent((QOpenGLTimeMonitor*)self, (QTimerEvent*)event);
}

void q_opengltimemonitor_qbase_timer_event(void* self, void* event) {
    QOpenGLTimeMonitor_QBaseTimerEvent((QOpenGLTimeMonitor*)self, (QTimerEvent*)event);
}

void q_opengltimemonitor_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLTimeMonitor_OnTimerEvent((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

void q_opengltimemonitor_child_event(void* self, void* event) {
    QOpenGLTimeMonitor_ChildEvent((QOpenGLTimeMonitor*)self, (QChildEvent*)event);
}

void q_opengltimemonitor_qbase_child_event(void* self, void* event) {
    QOpenGLTimeMonitor_QBaseChildEvent((QOpenGLTimeMonitor*)self, (QChildEvent*)event);
}

void q_opengltimemonitor_on_child_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLTimeMonitor_OnChildEvent((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

void q_opengltimemonitor_custom_event(void* self, void* event) {
    QOpenGLTimeMonitor_CustomEvent((QOpenGLTimeMonitor*)self, (QEvent*)event);
}

void q_opengltimemonitor_qbase_custom_event(void* self, void* event) {
    QOpenGLTimeMonitor_QBaseCustomEvent((QOpenGLTimeMonitor*)self, (QEvent*)event);
}

void q_opengltimemonitor_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QOpenGLTimeMonitor_OnCustomEvent((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

void q_opengltimemonitor_connect_notify(void* self, void* signal) {
    QOpenGLTimeMonitor_ConnectNotify((QOpenGLTimeMonitor*)self, (QMetaMethod*)signal);
}

void q_opengltimemonitor_qbase_connect_notify(void* self, void* signal) {
    QOpenGLTimeMonitor_QBaseConnectNotify((QOpenGLTimeMonitor*)self, (QMetaMethod*)signal);
}

void q_opengltimemonitor_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLTimeMonitor_OnConnectNotify((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

void q_opengltimemonitor_disconnect_notify(void* self, void* signal) {
    QOpenGLTimeMonitor_DisconnectNotify((QOpenGLTimeMonitor*)self, (QMetaMethod*)signal);
}

void q_opengltimemonitor_qbase_disconnect_notify(void* self, void* signal) {
    QOpenGLTimeMonitor_QBaseDisconnectNotify((QOpenGLTimeMonitor*)self, (QMetaMethod*)signal);
}

void q_opengltimemonitor_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QOpenGLTimeMonitor_OnDisconnectNotify((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

QObject* q_opengltimemonitor_sender(void* self) {
    return QOpenGLTimeMonitor_Sender((QOpenGLTimeMonitor*)self);
}

QObject* q_opengltimemonitor_qbase_sender(void* self) {
    return QOpenGLTimeMonitor_QBaseSender((QOpenGLTimeMonitor*)self);
}

void q_opengltimemonitor_on_sender(void* self, QObject* (*callback)()) {
    QOpenGLTimeMonitor_OnSender((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

int32_t q_opengltimemonitor_sender_signal_index(void* self) {
    return QOpenGLTimeMonitor_SenderSignalIndex((QOpenGLTimeMonitor*)self);
}

int32_t q_opengltimemonitor_qbase_sender_signal_index(void* self) {
    return QOpenGLTimeMonitor_QBaseSenderSignalIndex((QOpenGLTimeMonitor*)self);
}

void q_opengltimemonitor_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QOpenGLTimeMonitor_OnSenderSignalIndex((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

int32_t q_opengltimemonitor_receivers(void* self, const char* signal) {
    return QOpenGLTimeMonitor_Receivers((QOpenGLTimeMonitor*)self, signal);
}

int32_t q_opengltimemonitor_qbase_receivers(void* self, const char* signal) {
    return QOpenGLTimeMonitor_QBaseReceivers((QOpenGLTimeMonitor*)self, signal);
}

void q_opengltimemonitor_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QOpenGLTimeMonitor_OnReceivers((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

bool q_opengltimemonitor_is_signal_connected(void* self, void* signal) {
    return QOpenGLTimeMonitor_IsSignalConnected((QOpenGLTimeMonitor*)self, (QMetaMethod*)signal);
}

bool q_opengltimemonitor_qbase_is_signal_connected(void* self, void* signal) {
    return QOpenGLTimeMonitor_QBaseIsSignalConnected((QOpenGLTimeMonitor*)self, (QMetaMethod*)signal);
}

void q_opengltimemonitor_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QOpenGLTimeMonitor_OnIsSignalConnected((QOpenGLTimeMonitor*)self, (intptr_t)callback);
}

void q_opengltimemonitor_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_opengltimemonitor_delete(void* self) {
    QOpenGLTimeMonitor_Delete((QOpenGLTimeMonitor*)(self));
}
