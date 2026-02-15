#include "libqcapturablewindow.hpp"
#include "../libqcoreevent.hpp"
#include "libqmediacapturesession.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqwindowcapture.hpp"
#include "libqwindowcapture.h"

QWindowCapture* q_windowcapture_new() {
    return QWindowCapture_new();
}

QWindowCapture* q_windowcapture_new2(void* parent) {
    return QWindowCapture_new2((QObject*)parent);
}

const QMetaObject* q_windowcapture_meta_object(void* self) {
    return QWindowCapture_MetaObject((QWindowCapture*)self);
}

void q_windowcapture_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QWindowCapture_OnMetaObject((QWindowCapture*)self, (intptr_t)callback);
}

const QMetaObject* q_windowcapture_qbase_meta_object(void* self) {
    return QWindowCapture_QBaseMetaObject((QWindowCapture*)self);
}

void* q_windowcapture_metacast(void* self, const char* param1) {
    return QWindowCapture_Metacast((QWindowCapture*)self, param1);
}

void q_windowcapture_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QWindowCapture_OnMetacast((QWindowCapture*)self, (intptr_t)callback);
}

void* q_windowcapture_qbase_metacast(void* self, const char* param1) {
    return QWindowCapture_QBaseMetacast((QWindowCapture*)self, param1);
}

int32_t q_windowcapture_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWindowCapture_Metacall((QWindowCapture*)self, param1, param2, param3);
}

void q_windowcapture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QWindowCapture_OnMetacall((QWindowCapture*)self, (intptr_t)callback);
}

int32_t q_windowcapture_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QWindowCapture_QBaseMetacall((QWindowCapture*)self, param1, param2, param3);
}

const char* q_windowcapture_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of QCapturableWindow* */ q_windowcapture_capturable_windows() {
    libqt_list _arr = QWindowCapture_CapturableWindows();
    return _arr;
}

QMediaCaptureSession* q_windowcapture_capture_session(void* self) {
    return QWindowCapture_CaptureSession((QWindowCapture*)self);
}

void q_windowcapture_set_window(void* self, void* window) {
    QWindowCapture_SetWindow((QWindowCapture*)self, (QCapturableWindow*)window);
}

QCapturableWindow* q_windowcapture_window(void* self) {
    return QWindowCapture_Window((QWindowCapture*)self);
}

bool q_windowcapture_is_active(void* self) {
    return QWindowCapture_IsActive((QWindowCapture*)self);
}

int32_t q_windowcapture_error(void* self) {
    return QWindowCapture_Error((QWindowCapture*)self);
}

const char* q_windowcapture_error_string(void* self) {
    libqt_string _str = QWindowCapture_ErrorString((QWindowCapture*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_windowcapture_set_active(void* self, bool active) {
    QWindowCapture_SetActive((QWindowCapture*)self, active);
}

void q_windowcapture_start(void* self) {
    QWindowCapture_Start((QWindowCapture*)self);
}

void q_windowcapture_stop(void* self) {
    QWindowCapture_Stop((QWindowCapture*)self);
}

void q_windowcapture_active_changed(void* self, bool param1) {
    QWindowCapture_ActiveChanged((QWindowCapture*)self, param1);
}

void q_windowcapture_on_active_changed(void* self, void (*callback)(void*, bool)) {
    QWindowCapture_Connect_ActiveChanged((QWindowCapture*)self, (intptr_t)callback);
}

void q_windowcapture_window_changed(void* self, void* window) {
    QWindowCapture_WindowChanged((QWindowCapture*)self, (QCapturableWindow*)window);
}

void q_windowcapture_on_window_changed(void* self, void (*callback)(void*, void*)) {
    QWindowCapture_Connect_WindowChanged((QWindowCapture*)self, (intptr_t)callback);
}

void q_windowcapture_error_changed(void* self) {
    QWindowCapture_ErrorChanged((QWindowCapture*)self);
}

void q_windowcapture_on_error_changed(void* self, void (*callback)(void*)) {
    QWindowCapture_Connect_ErrorChanged((QWindowCapture*)self, (intptr_t)callback);
}

void q_windowcapture_error_occurred(void* self, int32_t error, const char* errorString) {
    QWindowCapture_ErrorOccurred((QWindowCapture*)self, error, qstring(errorString));
}

void q_windowcapture_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*)) {
    QWindowCapture_Connect_ErrorOccurred((QWindowCapture*)self, (intptr_t)callback);
}

const char* q_windowcapture_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_windowcapture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_windowcapture_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_windowcapture_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_windowcapture_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_windowcapture_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_windowcapture_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_windowcapture_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_windowcapture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_windowcapture_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_windowcapture_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_windowcapture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_windowcapture_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_windowcapture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_windowcapture_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_windowcapture_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_windowcapture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_windowcapture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_windowcapture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_windowcapture_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_windowcapture_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_windowcapture_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_windowcapture_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_windowcapture_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_windowcapture_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_windowcapture_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_windowcapture_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_windowcapture_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_windowcapture_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_windowcapture_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_windowcapture_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_windowcapture_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_windowcapture_dynamic_property_names\n");
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

QBindingStorage* q_windowcapture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_windowcapture_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_windowcapture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_windowcapture_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_windowcapture_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_windowcapture_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_windowcapture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_windowcapture_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_windowcapture_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_windowcapture_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_windowcapture_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_windowcapture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_windowcapture_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_windowcapture_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_windowcapture_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_windowcapture_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_windowcapture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_windowcapture_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_windowcapture_event(void* self, void* event) {
    return QWindowCapture_Event((QWindowCapture*)self, (QEvent*)event);
}

bool q_windowcapture_qbase_event(void* self, void* event) {
    return QWindowCapture_QBaseEvent((QWindowCapture*)self, (QEvent*)event);
}

void q_windowcapture_on_event(void* self, bool (*callback)(void*, void*)) {
    QWindowCapture_OnEvent((QWindowCapture*)self, (intptr_t)callback);
}

bool q_windowcapture_event_filter(void* self, void* watched, void* event) {
    return QWindowCapture_EventFilter((QWindowCapture*)self, (QObject*)watched, (QEvent*)event);
}

bool q_windowcapture_qbase_event_filter(void* self, void* watched, void* event) {
    return QWindowCapture_QBaseEventFilter((QWindowCapture*)self, (QObject*)watched, (QEvent*)event);
}

void q_windowcapture_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QWindowCapture_OnEventFilter((QWindowCapture*)self, (intptr_t)callback);
}

void q_windowcapture_timer_event(void* self, void* event) {
    QWindowCapture_TimerEvent((QWindowCapture*)self, (QTimerEvent*)event);
}

void q_windowcapture_qbase_timer_event(void* self, void* event) {
    QWindowCapture_QBaseTimerEvent((QWindowCapture*)self, (QTimerEvent*)event);
}

void q_windowcapture_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QWindowCapture_OnTimerEvent((QWindowCapture*)self, (intptr_t)callback);
}

void q_windowcapture_child_event(void* self, void* event) {
    QWindowCapture_ChildEvent((QWindowCapture*)self, (QChildEvent*)event);
}

void q_windowcapture_qbase_child_event(void* self, void* event) {
    QWindowCapture_QBaseChildEvent((QWindowCapture*)self, (QChildEvent*)event);
}

void q_windowcapture_on_child_event(void* self, void (*callback)(void*, void*)) {
    QWindowCapture_OnChildEvent((QWindowCapture*)self, (intptr_t)callback);
}

void q_windowcapture_custom_event(void* self, void* event) {
    QWindowCapture_CustomEvent((QWindowCapture*)self, (QEvent*)event);
}

void q_windowcapture_qbase_custom_event(void* self, void* event) {
    QWindowCapture_QBaseCustomEvent((QWindowCapture*)self, (QEvent*)event);
}

void q_windowcapture_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QWindowCapture_OnCustomEvent((QWindowCapture*)self, (intptr_t)callback);
}

void q_windowcapture_connect_notify(void* self, void* signal) {
    QWindowCapture_ConnectNotify((QWindowCapture*)self, (QMetaMethod*)signal);
}

void q_windowcapture_qbase_connect_notify(void* self, void* signal) {
    QWindowCapture_QBaseConnectNotify((QWindowCapture*)self, (QMetaMethod*)signal);
}

void q_windowcapture_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QWindowCapture_OnConnectNotify((QWindowCapture*)self, (intptr_t)callback);
}

void q_windowcapture_disconnect_notify(void* self, void* signal) {
    QWindowCapture_DisconnectNotify((QWindowCapture*)self, (QMetaMethod*)signal);
}

void q_windowcapture_qbase_disconnect_notify(void* self, void* signal) {
    QWindowCapture_QBaseDisconnectNotify((QWindowCapture*)self, (QMetaMethod*)signal);
}

void q_windowcapture_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QWindowCapture_OnDisconnectNotify((QWindowCapture*)self, (intptr_t)callback);
}

QObject* q_windowcapture_sender(void* self) {
    return QWindowCapture_Sender((QWindowCapture*)self);
}

QObject* q_windowcapture_qbase_sender(void* self) {
    return QWindowCapture_QBaseSender((QWindowCapture*)self);
}

void q_windowcapture_on_sender(void* self, QObject* (*callback)()) {
    QWindowCapture_OnSender((QWindowCapture*)self, (intptr_t)callback);
}

int32_t q_windowcapture_sender_signal_index(void* self) {
    return QWindowCapture_SenderSignalIndex((QWindowCapture*)self);
}

int32_t q_windowcapture_qbase_sender_signal_index(void* self) {
    return QWindowCapture_QBaseSenderSignalIndex((QWindowCapture*)self);
}

void q_windowcapture_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QWindowCapture_OnSenderSignalIndex((QWindowCapture*)self, (intptr_t)callback);
}

int32_t q_windowcapture_receivers(void* self, const char* signal) {
    return QWindowCapture_Receivers((QWindowCapture*)self, signal);
}

int32_t q_windowcapture_qbase_receivers(void* self, const char* signal) {
    return QWindowCapture_QBaseReceivers((QWindowCapture*)self, signal);
}

void q_windowcapture_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QWindowCapture_OnReceivers((QWindowCapture*)self, (intptr_t)callback);
}

bool q_windowcapture_is_signal_connected(void* self, void* signal) {
    return QWindowCapture_IsSignalConnected((QWindowCapture*)self, (QMetaMethod*)signal);
}

bool q_windowcapture_qbase_is_signal_connected(void* self, void* signal) {
    return QWindowCapture_QBaseIsSignalConnected((QWindowCapture*)self, (QMetaMethod*)signal);
}

void q_windowcapture_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QWindowCapture_OnIsSignalConnected((QWindowCapture*)self, (intptr_t)callback);
}

void q_windowcapture_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_windowcapture_delete(void* self) {
    QWindowCapture_Delete((QWindowCapture*)(self));
}
