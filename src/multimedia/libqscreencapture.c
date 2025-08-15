#include "../libqcoreevent.hpp"
#include "libqmediacapturesession.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqscreen.hpp"
#include "libqscreencapture.hpp"
#include "libqscreencapture.h"

QScreenCapture* q_screencapture_new() {
    return QScreenCapture_new();
}

QScreenCapture* q_screencapture_new2(void* parent) {
    return QScreenCapture_new2((QObject*)parent);
}

const QMetaObject* q_screencapture_meta_object(void* self) {
    return QScreenCapture_MetaObject((QScreenCapture*)self);
}

void* q_screencapture_metacast(void* self, const char* param1) {
    return QScreenCapture_Metacast((QScreenCapture*)self, param1);
}

int32_t q_screencapture_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScreenCapture_Metacall((QScreenCapture*)self, param1, param2, param3);
}

void q_screencapture_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QScreenCapture_OnMetacall((QScreenCapture*)self, (intptr_t)callback);
}

int32_t q_screencapture_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScreenCapture_QBaseMetacall((QScreenCapture*)self, param1, param2, param3);
}

const char* q_screencapture_tr(const char* s) {
    libqt_string _str = QScreenCapture_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QMediaCaptureSession* q_screencapture_capture_session(void* self) {
    return QScreenCapture_CaptureSession((QScreenCapture*)self);
}

void q_screencapture_set_screen(void* self, void* screen) {
    QScreenCapture_SetScreen((QScreenCapture*)self, (QScreen*)screen);
}

QScreen* q_screencapture_screen(void* self) {
    return QScreenCapture_Screen((QScreenCapture*)self);
}

bool q_screencapture_is_active(void* self) {
    return QScreenCapture_IsActive((QScreenCapture*)self);
}

int64_t q_screencapture_error(void* self) {
    return QScreenCapture_Error((QScreenCapture*)self);
}

const char* q_screencapture_error_string(void* self) {
    libqt_string _str = QScreenCapture_ErrorString((QScreenCapture*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_screencapture_set_active(void* self, bool active) {
    QScreenCapture_SetActive((QScreenCapture*)self, active);
}

void q_screencapture_start(void* self) {
    QScreenCapture_Start((QScreenCapture*)self);
}

void q_screencapture_stop(void* self) {
    QScreenCapture_Stop((QScreenCapture*)self);
}

void q_screencapture_active_changed(void* self, bool param1) {
    QScreenCapture_ActiveChanged((QScreenCapture*)self, param1);
}

void q_screencapture_on_active_changed(void* self, void (*callback)(void*, bool)) {
    QScreenCapture_Connect_ActiveChanged((QScreenCapture*)self, (intptr_t)callback);
}

void q_screencapture_error_changed(void* self) {
    QScreenCapture_ErrorChanged((QScreenCapture*)self);
}

void q_screencapture_on_error_changed(void* self, void (*callback)(void*)) {
    QScreenCapture_Connect_ErrorChanged((QScreenCapture*)self, (intptr_t)callback);
}

void q_screencapture_screen_changed(void* self, void* param1) {
    QScreenCapture_ScreenChanged((QScreenCapture*)self, (QScreen*)param1);
}

void q_screencapture_on_screen_changed(void* self, void (*callback)(void*, void*)) {
    QScreenCapture_Connect_ScreenChanged((QScreenCapture*)self, (intptr_t)callback);
}

void q_screencapture_error_occurred(void* self, int64_t errorVal, const char* errorString) {
    QScreenCapture_ErrorOccurred((QScreenCapture*)self, errorVal, qstring(errorString));
}

void q_screencapture_on_error_occurred(void* self, void (*callback)(void*, int64_t, const char*)) {
    QScreenCapture_Connect_ErrorOccurred((QScreenCapture*)self, (intptr_t)callback);
}

const char* q_screencapture_tr2(const char* s, const char* c) {
    libqt_string _str = QScreenCapture_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_screencapture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QScreenCapture_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_screencapture_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_screencapture_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_screencapture_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_screencapture_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_screencapture_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_screencapture_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_screencapture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_screencapture_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_screencapture_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_screencapture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_screencapture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_screencapture_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_screencapture_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_screencapture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_screencapture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_screencapture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_screencapture_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_screencapture_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_screencapture_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_screencapture_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_screencapture_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_screencapture_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_screencapture_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_screencapture_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_screencapture_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_screencapture_dynamic_property_names");
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

QBindingStorage* q_screencapture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_screencapture_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_screencapture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_screencapture_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_screencapture_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_screencapture_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_screencapture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_screencapture_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_screencapture_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_screencapture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_screencapture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_screencapture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_screencapture_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_screencapture_event(void* self, void* event) {
    return QScreenCapture_Event((QScreenCapture*)self, (QEvent*)event);
}

bool q_screencapture_qbase_event(void* self, void* event) {
    return QScreenCapture_QBaseEvent((QScreenCapture*)self, (QEvent*)event);
}

void q_screencapture_on_event(void* self, bool (*callback)(void*, void*)) {
    QScreenCapture_OnEvent((QScreenCapture*)self, (intptr_t)callback);
}

bool q_screencapture_event_filter(void* self, void* watched, void* event) {
    return QScreenCapture_EventFilter((QScreenCapture*)self, (QObject*)watched, (QEvent*)event);
}

bool q_screencapture_qbase_event_filter(void* self, void* watched, void* event) {
    return QScreenCapture_QBaseEventFilter((QScreenCapture*)self, (QObject*)watched, (QEvent*)event);
}

void q_screencapture_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QScreenCapture_OnEventFilter((QScreenCapture*)self, (intptr_t)callback);
}

void q_screencapture_timer_event(void* self, void* event) {
    QScreenCapture_TimerEvent((QScreenCapture*)self, (QTimerEvent*)event);
}

void q_screencapture_qbase_timer_event(void* self, void* event) {
    QScreenCapture_QBaseTimerEvent((QScreenCapture*)self, (QTimerEvent*)event);
}

void q_screencapture_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QScreenCapture_OnTimerEvent((QScreenCapture*)self, (intptr_t)callback);
}

void q_screencapture_child_event(void* self, void* event) {
    QScreenCapture_ChildEvent((QScreenCapture*)self, (QChildEvent*)event);
}

void q_screencapture_qbase_child_event(void* self, void* event) {
    QScreenCapture_QBaseChildEvent((QScreenCapture*)self, (QChildEvent*)event);
}

void q_screencapture_on_child_event(void* self, void (*callback)(void*, void*)) {
    QScreenCapture_OnChildEvent((QScreenCapture*)self, (intptr_t)callback);
}

void q_screencapture_custom_event(void* self, void* event) {
    QScreenCapture_CustomEvent((QScreenCapture*)self, (QEvent*)event);
}

void q_screencapture_qbase_custom_event(void* self, void* event) {
    QScreenCapture_QBaseCustomEvent((QScreenCapture*)self, (QEvent*)event);
}

void q_screencapture_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QScreenCapture_OnCustomEvent((QScreenCapture*)self, (intptr_t)callback);
}

void q_screencapture_connect_notify(void* self, void* signal) {
    QScreenCapture_ConnectNotify((QScreenCapture*)self, (QMetaMethod*)signal);
}

void q_screencapture_qbase_connect_notify(void* self, void* signal) {
    QScreenCapture_QBaseConnectNotify((QScreenCapture*)self, (QMetaMethod*)signal);
}

void q_screencapture_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QScreenCapture_OnConnectNotify((QScreenCapture*)self, (intptr_t)callback);
}

void q_screencapture_disconnect_notify(void* self, void* signal) {
    QScreenCapture_DisconnectNotify((QScreenCapture*)self, (QMetaMethod*)signal);
}

void q_screencapture_qbase_disconnect_notify(void* self, void* signal) {
    QScreenCapture_QBaseDisconnectNotify((QScreenCapture*)self, (QMetaMethod*)signal);
}

void q_screencapture_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QScreenCapture_OnDisconnectNotify((QScreenCapture*)self, (intptr_t)callback);
}

QObject* q_screencapture_sender(void* self) {
    return QScreenCapture_Sender((QScreenCapture*)self);
}

QObject* q_screencapture_qbase_sender(void* self) {
    return QScreenCapture_QBaseSender((QScreenCapture*)self);
}

void q_screencapture_on_sender(void* self, QObject* (*callback)()) {
    QScreenCapture_OnSender((QScreenCapture*)self, (intptr_t)callback);
}

int32_t q_screencapture_sender_signal_index(void* self) {
    return QScreenCapture_SenderSignalIndex((QScreenCapture*)self);
}

int32_t q_screencapture_qbase_sender_signal_index(void* self) {
    return QScreenCapture_QBaseSenderSignalIndex((QScreenCapture*)self);
}

void q_screencapture_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QScreenCapture_OnSenderSignalIndex((QScreenCapture*)self, (intptr_t)callback);
}

int32_t q_screencapture_receivers(void* self, const char* signal) {
    return QScreenCapture_Receivers((QScreenCapture*)self, signal);
}

int32_t q_screencapture_qbase_receivers(void* self, const char* signal) {
    return QScreenCapture_QBaseReceivers((QScreenCapture*)self, signal);
}

void q_screencapture_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QScreenCapture_OnReceivers((QScreenCapture*)self, (intptr_t)callback);
}

bool q_screencapture_is_signal_connected(void* self, void* signal) {
    return QScreenCapture_IsSignalConnected((QScreenCapture*)self, (QMetaMethod*)signal);
}

bool q_screencapture_qbase_is_signal_connected(void* self, void* signal) {
    return QScreenCapture_QBaseIsSignalConnected((QScreenCapture*)self, (QMetaMethod*)signal);
}

void q_screencapture_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QScreenCapture_OnIsSignalConnected((QScreenCapture*)self, (intptr_t)callback);
}

void q_screencapture_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_screencapture_delete(void* self) {
    QScreenCapture_Delete((QScreenCapture*)(self));
}
