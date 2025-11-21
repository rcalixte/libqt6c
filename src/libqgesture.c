#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpoint.hpp"
#include "libqwidget.hpp"
#include "libqgesture.hpp"
#include "libqgesture.h"

QGesture* q_gesture_new() {
    return QGesture_new();
}

QGesture* q_gesture_new2(void* parent) {
    return QGesture_new2((QObject*)parent);
}

const QMetaObject* q_gesture_meta_object(void* self) {
    return QGesture_MetaObject((QGesture*)self);
}

void* q_gesture_metacast(void* self, const char* param1) {
    return QGesture_Metacast((QGesture*)self, param1);
}

int32_t q_gesture_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGesture_Metacall((QGesture*)self, param1, param2, param3);
}

void q_gesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QGesture_OnMetacall((QGesture*)self, (intptr_t)callback);
}

int32_t q_gesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QGesture_QBaseMetacall((QGesture*)self, param1, param2, param3);
}

const char* q_gesture_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_gesture_gesture_type(void* self) {
    return QGesture_GestureType((QGesture*)self);
}

int32_t q_gesture_state(void* self) {
    return QGesture_State((QGesture*)self);
}

QPointF* q_gesture_hot_spot(void* self) {
    return QGesture_HotSpot((QGesture*)self);
}

void q_gesture_set_hot_spot(void* self, void* value) {
    QGesture_SetHotSpot((QGesture*)self, (QPointF*)value);
}

bool q_gesture_has_hot_spot(void* self) {
    return QGesture_HasHotSpot((QGesture*)self);
}

void q_gesture_unset_hot_spot(void* self) {
    QGesture_UnsetHotSpot((QGesture*)self);
}

void q_gesture_set_gesture_cancel_policy(void* self, int32_t policy) {
    QGesture_SetGestureCancelPolicy((QGesture*)self, policy);
}

int32_t q_gesture_gesture_cancel_policy(void* self) {
    return QGesture_GestureCancelPolicy((QGesture*)self);
}

const char* q_gesture_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_gesture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_gesture_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_gesture_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_gesture_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_gesture_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_gesture_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_gesture_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_gesture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_gesture_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_gesture_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_gesture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_gesture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_gesture_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_gesture_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_gesture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_gesture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_gesture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_gesture_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_gesture_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_gesture_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_gesture_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_gesture_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_gesture_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_gesture_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_gesture_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_gesture_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_gesture_dynamic_property_names");
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

QBindingStorage* q_gesture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_gesture_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_gesture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_gesture_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_gesture_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_gesture_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_gesture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_gesture_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_gesture_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_gesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_gesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_gesture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_gesture_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_gesture_event(void* self, void* event) {
    return QGesture_Event((QGesture*)self, (QEvent*)event);
}

bool q_gesture_qbase_event(void* self, void* event) {
    return QGesture_QBaseEvent((QGesture*)self, (QEvent*)event);
}

void q_gesture_on_event(void* self, bool (*callback)(void*, void*)) {
    QGesture_OnEvent((QGesture*)self, (intptr_t)callback);
}

bool q_gesture_event_filter(void* self, void* watched, void* event) {
    return QGesture_EventFilter((QGesture*)self, (QObject*)watched, (QEvent*)event);
}

bool q_gesture_qbase_event_filter(void* self, void* watched, void* event) {
    return QGesture_QBaseEventFilter((QGesture*)self, (QObject*)watched, (QEvent*)event);
}

void q_gesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QGesture_OnEventFilter((QGesture*)self, (intptr_t)callback);
}

void q_gesture_timer_event(void* self, void* event) {
    QGesture_TimerEvent((QGesture*)self, (QTimerEvent*)event);
}

void q_gesture_qbase_timer_event(void* self, void* event) {
    QGesture_QBaseTimerEvent((QGesture*)self, (QTimerEvent*)event);
}

void q_gesture_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QGesture_OnTimerEvent((QGesture*)self, (intptr_t)callback);
}

void q_gesture_child_event(void* self, void* event) {
    QGesture_ChildEvent((QGesture*)self, (QChildEvent*)event);
}

void q_gesture_qbase_child_event(void* self, void* event) {
    QGesture_QBaseChildEvent((QGesture*)self, (QChildEvent*)event);
}

void q_gesture_on_child_event(void* self, void (*callback)(void*, void*)) {
    QGesture_OnChildEvent((QGesture*)self, (intptr_t)callback);
}

void q_gesture_custom_event(void* self, void* event) {
    QGesture_CustomEvent((QGesture*)self, (QEvent*)event);
}

void q_gesture_qbase_custom_event(void* self, void* event) {
    QGesture_QBaseCustomEvent((QGesture*)self, (QEvent*)event);
}

void q_gesture_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QGesture_OnCustomEvent((QGesture*)self, (intptr_t)callback);
}

void q_gesture_connect_notify(void* self, void* signal) {
    QGesture_ConnectNotify((QGesture*)self, (QMetaMethod*)signal);
}

void q_gesture_qbase_connect_notify(void* self, void* signal) {
    QGesture_QBaseConnectNotify((QGesture*)self, (QMetaMethod*)signal);
}

void q_gesture_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QGesture_OnConnectNotify((QGesture*)self, (intptr_t)callback);
}

void q_gesture_disconnect_notify(void* self, void* signal) {
    QGesture_DisconnectNotify((QGesture*)self, (QMetaMethod*)signal);
}

void q_gesture_qbase_disconnect_notify(void* self, void* signal) {
    QGesture_QBaseDisconnectNotify((QGesture*)self, (QMetaMethod*)signal);
}

void q_gesture_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QGesture_OnDisconnectNotify((QGesture*)self, (intptr_t)callback);
}

QObject* q_gesture_sender(void* self) {
    return QGesture_Sender((QGesture*)self);
}

QObject* q_gesture_qbase_sender(void* self) {
    return QGesture_QBaseSender((QGesture*)self);
}

void q_gesture_on_sender(void* self, QObject* (*callback)()) {
    QGesture_OnSender((QGesture*)self, (intptr_t)callback);
}

int32_t q_gesture_sender_signal_index(void* self) {
    return QGesture_SenderSignalIndex((QGesture*)self);
}

int32_t q_gesture_qbase_sender_signal_index(void* self) {
    return QGesture_QBaseSenderSignalIndex((QGesture*)self);
}

void q_gesture_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QGesture_OnSenderSignalIndex((QGesture*)self, (intptr_t)callback);
}

int32_t q_gesture_receivers(void* self, const char* signal) {
    return QGesture_Receivers((QGesture*)self, signal);
}

int32_t q_gesture_qbase_receivers(void* self, const char* signal) {
    return QGesture_QBaseReceivers((QGesture*)self, signal);
}

void q_gesture_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QGesture_OnReceivers((QGesture*)self, (intptr_t)callback);
}

bool q_gesture_is_signal_connected(void* self, void* signal) {
    return QGesture_IsSignalConnected((QGesture*)self, (QMetaMethod*)signal);
}

bool q_gesture_qbase_is_signal_connected(void* self, void* signal) {
    return QGesture_QBaseIsSignalConnected((QGesture*)self, (QMetaMethod*)signal);
}

void q_gesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QGesture_OnIsSignalConnected((QGesture*)self, (intptr_t)callback);
}

void q_gesture_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_gesture_delete(void* self) {
    QGesture_Delete((QGesture*)(self));
}

QPanGesture* q_pangesture_new() {
    return QPanGesture_new();
}

QPanGesture* q_pangesture_new2(void* parent) {
    return QPanGesture_new2((QObject*)parent);
}

const QMetaObject* q_pangesture_meta_object(void* self) {
    return QPanGesture_MetaObject((QPanGesture*)self);
}

void* q_pangesture_metacast(void* self, const char* param1) {
    return QPanGesture_Metacast((QPanGesture*)self, param1);
}

int32_t q_pangesture_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPanGesture_Metacall((QPanGesture*)self, param1, param2, param3);
}

void q_pangesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPanGesture_OnMetacall((QPanGesture*)self, (intptr_t)callback);
}

int32_t q_pangesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPanGesture_QBaseMetacall((QPanGesture*)self, param1, param2, param3);
}

const char* q_pangesture_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPointF* q_pangesture_last_offset(void* self) {
    return QPanGesture_LastOffset((QPanGesture*)self);
}

QPointF* q_pangesture_offset(void* self) {
    return QPanGesture_Offset((QPanGesture*)self);
}

QPointF* q_pangesture_delta(void* self) {
    return QPanGesture_Delta((QPanGesture*)self);
}

double q_pangesture_acceleration(void* self) {
    return QPanGesture_Acceleration((QPanGesture*)self);
}

void q_pangesture_set_last_offset(void* self, void* value) {
    QPanGesture_SetLastOffset((QPanGesture*)self, (QPointF*)value);
}

void q_pangesture_set_offset(void* self, void* value) {
    QPanGesture_SetOffset((QPanGesture*)self, (QPointF*)value);
}

void q_pangesture_set_acceleration(void* self, double value) {
    QPanGesture_SetAcceleration((QPanGesture*)self, value);
}

const char* q_pangesture_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pangesture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_pangesture_gesture_type(void* self) {
    return QGesture_GestureType((QGesture*)self);
}

int32_t q_pangesture_state(void* self) {
    return QGesture_State((QGesture*)self);
}

QPointF* q_pangesture_hot_spot(void* self) {
    return QGesture_HotSpot((QGesture*)self);
}

void q_pangesture_set_hot_spot(void* self, void* value) {
    QGesture_SetHotSpot((QGesture*)self, (QPointF*)value);
}

bool q_pangesture_has_hot_spot(void* self) {
    return QGesture_HasHotSpot((QGesture*)self);
}

void q_pangesture_unset_hot_spot(void* self) {
    QGesture_UnsetHotSpot((QGesture*)self);
}

void q_pangesture_set_gesture_cancel_policy(void* self, int32_t policy) {
    QGesture_SetGestureCancelPolicy((QGesture*)self, policy);
}

int32_t q_pangesture_gesture_cancel_policy(void* self) {
    return QGesture_GestureCancelPolicy((QGesture*)self);
}

const char* q_pangesture_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pangesture_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pangesture_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pangesture_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pangesture_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pangesture_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pangesture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pangesture_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pangesture_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pangesture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pangesture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pangesture_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pangesture_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pangesture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pangesture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pangesture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pangesture_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pangesture_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pangesture_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pangesture_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pangesture_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pangesture_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pangesture_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pangesture_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pangesture_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_pangesture_dynamic_property_names");
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

QBindingStorage* q_pangesture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pangesture_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pangesture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pangesture_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pangesture_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pangesture_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pangesture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pangesture_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pangesture_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pangesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pangesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_pangesture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pangesture_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_pangesture_event(void* self, void* event) {
    return QPanGesture_Event((QPanGesture*)self, (QEvent*)event);
}

bool q_pangesture_qbase_event(void* self, void* event) {
    return QPanGesture_QBaseEvent((QPanGesture*)self, (QEvent*)event);
}

void q_pangesture_on_event(void* self, bool (*callback)(void*, void*)) {
    QPanGesture_OnEvent((QPanGesture*)self, (intptr_t)callback);
}

bool q_pangesture_event_filter(void* self, void* watched, void* event) {
    return QPanGesture_EventFilter((QPanGesture*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pangesture_qbase_event_filter(void* self, void* watched, void* event) {
    return QPanGesture_QBaseEventFilter((QPanGesture*)self, (QObject*)watched, (QEvent*)event);
}

void q_pangesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPanGesture_OnEventFilter((QPanGesture*)self, (intptr_t)callback);
}

void q_pangesture_timer_event(void* self, void* event) {
    QPanGesture_TimerEvent((QPanGesture*)self, (QTimerEvent*)event);
}

void q_pangesture_qbase_timer_event(void* self, void* event) {
    QPanGesture_QBaseTimerEvent((QPanGesture*)self, (QTimerEvent*)event);
}

void q_pangesture_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPanGesture_OnTimerEvent((QPanGesture*)self, (intptr_t)callback);
}

void q_pangesture_child_event(void* self, void* event) {
    QPanGesture_ChildEvent((QPanGesture*)self, (QChildEvent*)event);
}

void q_pangesture_qbase_child_event(void* self, void* event) {
    QPanGesture_QBaseChildEvent((QPanGesture*)self, (QChildEvent*)event);
}

void q_pangesture_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPanGesture_OnChildEvent((QPanGesture*)self, (intptr_t)callback);
}

void q_pangesture_custom_event(void* self, void* event) {
    QPanGesture_CustomEvent((QPanGesture*)self, (QEvent*)event);
}

void q_pangesture_qbase_custom_event(void* self, void* event) {
    QPanGesture_QBaseCustomEvent((QPanGesture*)self, (QEvent*)event);
}

void q_pangesture_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPanGesture_OnCustomEvent((QPanGesture*)self, (intptr_t)callback);
}

void q_pangesture_connect_notify(void* self, void* signal) {
    QPanGesture_ConnectNotify((QPanGesture*)self, (QMetaMethod*)signal);
}

void q_pangesture_qbase_connect_notify(void* self, void* signal) {
    QPanGesture_QBaseConnectNotify((QPanGesture*)self, (QMetaMethod*)signal);
}

void q_pangesture_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPanGesture_OnConnectNotify((QPanGesture*)self, (intptr_t)callback);
}

void q_pangesture_disconnect_notify(void* self, void* signal) {
    QPanGesture_DisconnectNotify((QPanGesture*)self, (QMetaMethod*)signal);
}

void q_pangesture_qbase_disconnect_notify(void* self, void* signal) {
    QPanGesture_QBaseDisconnectNotify((QPanGesture*)self, (QMetaMethod*)signal);
}

void q_pangesture_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPanGesture_OnDisconnectNotify((QPanGesture*)self, (intptr_t)callback);
}

QObject* q_pangesture_sender(void* self) {
    return QPanGesture_Sender((QPanGesture*)self);
}

QObject* q_pangesture_qbase_sender(void* self) {
    return QPanGesture_QBaseSender((QPanGesture*)self);
}

void q_pangesture_on_sender(void* self, QObject* (*callback)()) {
    QPanGesture_OnSender((QPanGesture*)self, (intptr_t)callback);
}

int32_t q_pangesture_sender_signal_index(void* self) {
    return QPanGesture_SenderSignalIndex((QPanGesture*)self);
}

int32_t q_pangesture_qbase_sender_signal_index(void* self) {
    return QPanGesture_QBaseSenderSignalIndex((QPanGesture*)self);
}

void q_pangesture_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPanGesture_OnSenderSignalIndex((QPanGesture*)self, (intptr_t)callback);
}

int32_t q_pangesture_receivers(void* self, const char* signal) {
    return QPanGesture_Receivers((QPanGesture*)self, signal);
}

int32_t q_pangesture_qbase_receivers(void* self, const char* signal) {
    return QPanGesture_QBaseReceivers((QPanGesture*)self, signal);
}

void q_pangesture_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPanGesture_OnReceivers((QPanGesture*)self, (intptr_t)callback);
}

bool q_pangesture_is_signal_connected(void* self, void* signal) {
    return QPanGesture_IsSignalConnected((QPanGesture*)self, (QMetaMethod*)signal);
}

bool q_pangesture_qbase_is_signal_connected(void* self, void* signal) {
    return QPanGesture_QBaseIsSignalConnected((QPanGesture*)self, (QMetaMethod*)signal);
}

void q_pangesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPanGesture_OnIsSignalConnected((QPanGesture*)self, (intptr_t)callback);
}

void q_pangesture_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pangesture_delete(void* self) {
    QPanGesture_Delete((QPanGesture*)(self));
}

QPinchGesture* q_pinchgesture_new() {
    return QPinchGesture_new();
}

QPinchGesture* q_pinchgesture_new2(void* parent) {
    return QPinchGesture_new2((QObject*)parent);
}

const QMetaObject* q_pinchgesture_meta_object(void* self) {
    return QPinchGesture_MetaObject((QPinchGesture*)self);
}

void* q_pinchgesture_metacast(void* self, const char* param1) {
    return QPinchGesture_Metacast((QPinchGesture*)self, param1);
}

int32_t q_pinchgesture_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPinchGesture_Metacall((QPinchGesture*)self, param1, param2, param3);
}

void q_pinchgesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPinchGesture_OnMetacall((QPinchGesture*)self, (intptr_t)callback);
}

int32_t q_pinchgesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPinchGesture_QBaseMetacall((QPinchGesture*)self, param1, param2, param3);
}

const char* q_pinchgesture_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_pinchgesture_total_change_flags(void* self) {
    return QPinchGesture_TotalChangeFlags((QPinchGesture*)self);
}

void q_pinchgesture_set_total_change_flags(void* self, int32_t value) {
    QPinchGesture_SetTotalChangeFlags((QPinchGesture*)self, value);
}

int32_t q_pinchgesture_change_flags(void* self) {
    return QPinchGesture_ChangeFlags((QPinchGesture*)self);
}

void q_pinchgesture_set_change_flags(void* self, int32_t value) {
    QPinchGesture_SetChangeFlags((QPinchGesture*)self, value);
}

QPointF* q_pinchgesture_start_center_point(void* self) {
    return QPinchGesture_StartCenterPoint((QPinchGesture*)self);
}

QPointF* q_pinchgesture_last_center_point(void* self) {
    return QPinchGesture_LastCenterPoint((QPinchGesture*)self);
}

QPointF* q_pinchgesture_center_point(void* self) {
    return QPinchGesture_CenterPoint((QPinchGesture*)self);
}

void q_pinchgesture_set_start_center_point(void* self, void* value) {
    QPinchGesture_SetStartCenterPoint((QPinchGesture*)self, (QPointF*)value);
}

void q_pinchgesture_set_last_center_point(void* self, void* value) {
    QPinchGesture_SetLastCenterPoint((QPinchGesture*)self, (QPointF*)value);
}

void q_pinchgesture_set_center_point(void* self, void* value) {
    QPinchGesture_SetCenterPoint((QPinchGesture*)self, (QPointF*)value);
}

double q_pinchgesture_total_scale_factor(void* self) {
    return QPinchGesture_TotalScaleFactor((QPinchGesture*)self);
}

double q_pinchgesture_last_scale_factor(void* self) {
    return QPinchGesture_LastScaleFactor((QPinchGesture*)self);
}

double q_pinchgesture_scale_factor(void* self) {
    return QPinchGesture_ScaleFactor((QPinchGesture*)self);
}

void q_pinchgesture_set_total_scale_factor(void* self, double value) {
    QPinchGesture_SetTotalScaleFactor((QPinchGesture*)self, value);
}

void q_pinchgesture_set_last_scale_factor(void* self, double value) {
    QPinchGesture_SetLastScaleFactor((QPinchGesture*)self, value);
}

void q_pinchgesture_set_scale_factor(void* self, double value) {
    QPinchGesture_SetScaleFactor((QPinchGesture*)self, value);
}

double q_pinchgesture_total_rotation_angle(void* self) {
    return QPinchGesture_TotalRotationAngle((QPinchGesture*)self);
}

double q_pinchgesture_last_rotation_angle(void* self) {
    return QPinchGesture_LastRotationAngle((QPinchGesture*)self);
}

double q_pinchgesture_rotation_angle(void* self) {
    return QPinchGesture_RotationAngle((QPinchGesture*)self);
}

void q_pinchgesture_set_total_rotation_angle(void* self, double value) {
    QPinchGesture_SetTotalRotationAngle((QPinchGesture*)self, value);
}

void q_pinchgesture_set_last_rotation_angle(void* self, double value) {
    QPinchGesture_SetLastRotationAngle((QPinchGesture*)self, value);
}

void q_pinchgesture_set_rotation_angle(void* self, double value) {
    QPinchGesture_SetRotationAngle((QPinchGesture*)self, value);
}

const char* q_pinchgesture_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pinchgesture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_pinchgesture_gesture_type(void* self) {
    return QGesture_GestureType((QGesture*)self);
}

int32_t q_pinchgesture_state(void* self) {
    return QGesture_State((QGesture*)self);
}

QPointF* q_pinchgesture_hot_spot(void* self) {
    return QGesture_HotSpot((QGesture*)self);
}

void q_pinchgesture_set_hot_spot(void* self, void* value) {
    QGesture_SetHotSpot((QGesture*)self, (QPointF*)value);
}

bool q_pinchgesture_has_hot_spot(void* self) {
    return QGesture_HasHotSpot((QGesture*)self);
}

void q_pinchgesture_unset_hot_spot(void* self) {
    QGesture_UnsetHotSpot((QGesture*)self);
}

void q_pinchgesture_set_gesture_cancel_policy(void* self, int32_t policy) {
    QGesture_SetGestureCancelPolicy((QGesture*)self, policy);
}

int32_t q_pinchgesture_gesture_cancel_policy(void* self) {
    return QGesture_GestureCancelPolicy((QGesture*)self);
}

const char* q_pinchgesture_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pinchgesture_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pinchgesture_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pinchgesture_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pinchgesture_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pinchgesture_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pinchgesture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pinchgesture_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pinchgesture_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pinchgesture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pinchgesture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pinchgesture_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pinchgesture_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pinchgesture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pinchgesture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pinchgesture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pinchgesture_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pinchgesture_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pinchgesture_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pinchgesture_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pinchgesture_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pinchgesture_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pinchgesture_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pinchgesture_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pinchgesture_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_pinchgesture_dynamic_property_names");
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

QBindingStorage* q_pinchgesture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pinchgesture_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pinchgesture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pinchgesture_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pinchgesture_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pinchgesture_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pinchgesture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pinchgesture_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pinchgesture_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pinchgesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pinchgesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_pinchgesture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pinchgesture_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_pinchgesture_event(void* self, void* event) {
    return QPinchGesture_Event((QPinchGesture*)self, (QEvent*)event);
}

bool q_pinchgesture_qbase_event(void* self, void* event) {
    return QPinchGesture_QBaseEvent((QPinchGesture*)self, (QEvent*)event);
}

void q_pinchgesture_on_event(void* self, bool (*callback)(void*, void*)) {
    QPinchGesture_OnEvent((QPinchGesture*)self, (intptr_t)callback);
}

bool q_pinchgesture_event_filter(void* self, void* watched, void* event) {
    return QPinchGesture_EventFilter((QPinchGesture*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pinchgesture_qbase_event_filter(void* self, void* watched, void* event) {
    return QPinchGesture_QBaseEventFilter((QPinchGesture*)self, (QObject*)watched, (QEvent*)event);
}

void q_pinchgesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPinchGesture_OnEventFilter((QPinchGesture*)self, (intptr_t)callback);
}

void q_pinchgesture_timer_event(void* self, void* event) {
    QPinchGesture_TimerEvent((QPinchGesture*)self, (QTimerEvent*)event);
}

void q_pinchgesture_qbase_timer_event(void* self, void* event) {
    QPinchGesture_QBaseTimerEvent((QPinchGesture*)self, (QTimerEvent*)event);
}

void q_pinchgesture_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPinchGesture_OnTimerEvent((QPinchGesture*)self, (intptr_t)callback);
}

void q_pinchgesture_child_event(void* self, void* event) {
    QPinchGesture_ChildEvent((QPinchGesture*)self, (QChildEvent*)event);
}

void q_pinchgesture_qbase_child_event(void* self, void* event) {
    QPinchGesture_QBaseChildEvent((QPinchGesture*)self, (QChildEvent*)event);
}

void q_pinchgesture_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPinchGesture_OnChildEvent((QPinchGesture*)self, (intptr_t)callback);
}

void q_pinchgesture_custom_event(void* self, void* event) {
    QPinchGesture_CustomEvent((QPinchGesture*)self, (QEvent*)event);
}

void q_pinchgesture_qbase_custom_event(void* self, void* event) {
    QPinchGesture_QBaseCustomEvent((QPinchGesture*)self, (QEvent*)event);
}

void q_pinchgesture_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPinchGesture_OnCustomEvent((QPinchGesture*)self, (intptr_t)callback);
}

void q_pinchgesture_connect_notify(void* self, void* signal) {
    QPinchGesture_ConnectNotify((QPinchGesture*)self, (QMetaMethod*)signal);
}

void q_pinchgesture_qbase_connect_notify(void* self, void* signal) {
    QPinchGesture_QBaseConnectNotify((QPinchGesture*)self, (QMetaMethod*)signal);
}

void q_pinchgesture_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPinchGesture_OnConnectNotify((QPinchGesture*)self, (intptr_t)callback);
}

void q_pinchgesture_disconnect_notify(void* self, void* signal) {
    QPinchGesture_DisconnectNotify((QPinchGesture*)self, (QMetaMethod*)signal);
}

void q_pinchgesture_qbase_disconnect_notify(void* self, void* signal) {
    QPinchGesture_QBaseDisconnectNotify((QPinchGesture*)self, (QMetaMethod*)signal);
}

void q_pinchgesture_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPinchGesture_OnDisconnectNotify((QPinchGesture*)self, (intptr_t)callback);
}

QObject* q_pinchgesture_sender(void* self) {
    return QPinchGesture_Sender((QPinchGesture*)self);
}

QObject* q_pinchgesture_qbase_sender(void* self) {
    return QPinchGesture_QBaseSender((QPinchGesture*)self);
}

void q_pinchgesture_on_sender(void* self, QObject* (*callback)()) {
    QPinchGesture_OnSender((QPinchGesture*)self, (intptr_t)callback);
}

int32_t q_pinchgesture_sender_signal_index(void* self) {
    return QPinchGesture_SenderSignalIndex((QPinchGesture*)self);
}

int32_t q_pinchgesture_qbase_sender_signal_index(void* self) {
    return QPinchGesture_QBaseSenderSignalIndex((QPinchGesture*)self);
}

void q_pinchgesture_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPinchGesture_OnSenderSignalIndex((QPinchGesture*)self, (intptr_t)callback);
}

int32_t q_pinchgesture_receivers(void* self, const char* signal) {
    return QPinchGesture_Receivers((QPinchGesture*)self, signal);
}

int32_t q_pinchgesture_qbase_receivers(void* self, const char* signal) {
    return QPinchGesture_QBaseReceivers((QPinchGesture*)self, signal);
}

void q_pinchgesture_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPinchGesture_OnReceivers((QPinchGesture*)self, (intptr_t)callback);
}

bool q_pinchgesture_is_signal_connected(void* self, void* signal) {
    return QPinchGesture_IsSignalConnected((QPinchGesture*)self, (QMetaMethod*)signal);
}

bool q_pinchgesture_qbase_is_signal_connected(void* self, void* signal) {
    return QPinchGesture_QBaseIsSignalConnected((QPinchGesture*)self, (QMetaMethod*)signal);
}

void q_pinchgesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPinchGesture_OnIsSignalConnected((QPinchGesture*)self, (intptr_t)callback);
}

void q_pinchgesture_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pinchgesture_delete(void* self) {
    QPinchGesture_Delete((QPinchGesture*)(self));
}

QSwipeGesture* q_swipegesture_new() {
    return QSwipeGesture_new();
}

QSwipeGesture* q_swipegesture_new2(void* parent) {
    return QSwipeGesture_new2((QObject*)parent);
}

const QMetaObject* q_swipegesture_meta_object(void* self) {
    return QSwipeGesture_MetaObject((QSwipeGesture*)self);
}

void* q_swipegesture_metacast(void* self, const char* param1) {
    return QSwipeGesture_Metacast((QSwipeGesture*)self, param1);
}

int32_t q_swipegesture_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSwipeGesture_Metacall((QSwipeGesture*)self, param1, param2, param3);
}

void q_swipegesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSwipeGesture_OnMetacall((QSwipeGesture*)self, (intptr_t)callback);
}

int32_t q_swipegesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSwipeGesture_QBaseMetacall((QSwipeGesture*)self, param1, param2, param3);
}

const char* q_swipegesture_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_swipegesture_horizontal_direction(void* self) {
    return QSwipeGesture_HorizontalDirection((QSwipeGesture*)self);
}

int32_t q_swipegesture_vertical_direction(void* self) {
    return QSwipeGesture_VerticalDirection((QSwipeGesture*)self);
}

double q_swipegesture_swipe_angle(void* self) {
    return QSwipeGesture_SwipeAngle((QSwipeGesture*)self);
}

void q_swipegesture_set_swipe_angle(void* self, double value) {
    QSwipeGesture_SetSwipeAngle((QSwipeGesture*)self, value);
}

const char* q_swipegesture_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_swipegesture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_swipegesture_gesture_type(void* self) {
    return QGesture_GestureType((QGesture*)self);
}

int32_t q_swipegesture_state(void* self) {
    return QGesture_State((QGesture*)self);
}

QPointF* q_swipegesture_hot_spot(void* self) {
    return QGesture_HotSpot((QGesture*)self);
}

void q_swipegesture_set_hot_spot(void* self, void* value) {
    QGesture_SetHotSpot((QGesture*)self, (QPointF*)value);
}

bool q_swipegesture_has_hot_spot(void* self) {
    return QGesture_HasHotSpot((QGesture*)self);
}

void q_swipegesture_unset_hot_spot(void* self) {
    QGesture_UnsetHotSpot((QGesture*)self);
}

void q_swipegesture_set_gesture_cancel_policy(void* self, int32_t policy) {
    QGesture_SetGestureCancelPolicy((QGesture*)self, policy);
}

int32_t q_swipegesture_gesture_cancel_policy(void* self) {
    return QGesture_GestureCancelPolicy((QGesture*)self);
}

const char* q_swipegesture_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_swipegesture_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_swipegesture_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_swipegesture_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_swipegesture_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_swipegesture_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_swipegesture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_swipegesture_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_swipegesture_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_swipegesture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_swipegesture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_swipegesture_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_swipegesture_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_swipegesture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_swipegesture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_swipegesture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_swipegesture_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_swipegesture_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_swipegesture_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_swipegesture_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_swipegesture_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_swipegesture_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_swipegesture_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_swipegesture_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_swipegesture_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_swipegesture_dynamic_property_names");
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

QBindingStorage* q_swipegesture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_swipegesture_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_swipegesture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_swipegesture_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_swipegesture_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_swipegesture_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_swipegesture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_swipegesture_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_swipegesture_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_swipegesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_swipegesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_swipegesture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_swipegesture_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_swipegesture_event(void* self, void* event) {
    return QSwipeGesture_Event((QSwipeGesture*)self, (QEvent*)event);
}

bool q_swipegesture_qbase_event(void* self, void* event) {
    return QSwipeGesture_QBaseEvent((QSwipeGesture*)self, (QEvent*)event);
}

void q_swipegesture_on_event(void* self, bool (*callback)(void*, void*)) {
    QSwipeGesture_OnEvent((QSwipeGesture*)self, (intptr_t)callback);
}

bool q_swipegesture_event_filter(void* self, void* watched, void* event) {
    return QSwipeGesture_EventFilter((QSwipeGesture*)self, (QObject*)watched, (QEvent*)event);
}

bool q_swipegesture_qbase_event_filter(void* self, void* watched, void* event) {
    return QSwipeGesture_QBaseEventFilter((QSwipeGesture*)self, (QObject*)watched, (QEvent*)event);
}

void q_swipegesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSwipeGesture_OnEventFilter((QSwipeGesture*)self, (intptr_t)callback);
}

void q_swipegesture_timer_event(void* self, void* event) {
    QSwipeGesture_TimerEvent((QSwipeGesture*)self, (QTimerEvent*)event);
}

void q_swipegesture_qbase_timer_event(void* self, void* event) {
    QSwipeGesture_QBaseTimerEvent((QSwipeGesture*)self, (QTimerEvent*)event);
}

void q_swipegesture_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSwipeGesture_OnTimerEvent((QSwipeGesture*)self, (intptr_t)callback);
}

void q_swipegesture_child_event(void* self, void* event) {
    QSwipeGesture_ChildEvent((QSwipeGesture*)self, (QChildEvent*)event);
}

void q_swipegesture_qbase_child_event(void* self, void* event) {
    QSwipeGesture_QBaseChildEvent((QSwipeGesture*)self, (QChildEvent*)event);
}

void q_swipegesture_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSwipeGesture_OnChildEvent((QSwipeGesture*)self, (intptr_t)callback);
}

void q_swipegesture_custom_event(void* self, void* event) {
    QSwipeGesture_CustomEvent((QSwipeGesture*)self, (QEvent*)event);
}

void q_swipegesture_qbase_custom_event(void* self, void* event) {
    QSwipeGesture_QBaseCustomEvent((QSwipeGesture*)self, (QEvent*)event);
}

void q_swipegesture_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSwipeGesture_OnCustomEvent((QSwipeGesture*)self, (intptr_t)callback);
}

void q_swipegesture_connect_notify(void* self, void* signal) {
    QSwipeGesture_ConnectNotify((QSwipeGesture*)self, (QMetaMethod*)signal);
}

void q_swipegesture_qbase_connect_notify(void* self, void* signal) {
    QSwipeGesture_QBaseConnectNotify((QSwipeGesture*)self, (QMetaMethod*)signal);
}

void q_swipegesture_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSwipeGesture_OnConnectNotify((QSwipeGesture*)self, (intptr_t)callback);
}

void q_swipegesture_disconnect_notify(void* self, void* signal) {
    QSwipeGesture_DisconnectNotify((QSwipeGesture*)self, (QMetaMethod*)signal);
}

void q_swipegesture_qbase_disconnect_notify(void* self, void* signal) {
    QSwipeGesture_QBaseDisconnectNotify((QSwipeGesture*)self, (QMetaMethod*)signal);
}

void q_swipegesture_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSwipeGesture_OnDisconnectNotify((QSwipeGesture*)self, (intptr_t)callback);
}

QObject* q_swipegesture_sender(void* self) {
    return QSwipeGesture_Sender((QSwipeGesture*)self);
}

QObject* q_swipegesture_qbase_sender(void* self) {
    return QSwipeGesture_QBaseSender((QSwipeGesture*)self);
}

void q_swipegesture_on_sender(void* self, QObject* (*callback)()) {
    QSwipeGesture_OnSender((QSwipeGesture*)self, (intptr_t)callback);
}

int32_t q_swipegesture_sender_signal_index(void* self) {
    return QSwipeGesture_SenderSignalIndex((QSwipeGesture*)self);
}

int32_t q_swipegesture_qbase_sender_signal_index(void* self) {
    return QSwipeGesture_QBaseSenderSignalIndex((QSwipeGesture*)self);
}

void q_swipegesture_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSwipeGesture_OnSenderSignalIndex((QSwipeGesture*)self, (intptr_t)callback);
}

int32_t q_swipegesture_receivers(void* self, const char* signal) {
    return QSwipeGesture_Receivers((QSwipeGesture*)self, signal);
}

int32_t q_swipegesture_qbase_receivers(void* self, const char* signal) {
    return QSwipeGesture_QBaseReceivers((QSwipeGesture*)self, signal);
}

void q_swipegesture_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSwipeGesture_OnReceivers((QSwipeGesture*)self, (intptr_t)callback);
}

bool q_swipegesture_is_signal_connected(void* self, void* signal) {
    return QSwipeGesture_IsSignalConnected((QSwipeGesture*)self, (QMetaMethod*)signal);
}

bool q_swipegesture_qbase_is_signal_connected(void* self, void* signal) {
    return QSwipeGesture_QBaseIsSignalConnected((QSwipeGesture*)self, (QMetaMethod*)signal);
}

void q_swipegesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSwipeGesture_OnIsSignalConnected((QSwipeGesture*)self, (intptr_t)callback);
}

void q_swipegesture_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_swipegesture_delete(void* self) {
    QSwipeGesture_Delete((QSwipeGesture*)(self));
}

QTapGesture* q_tapgesture_new() {
    return QTapGesture_new();
}

QTapGesture* q_tapgesture_new2(void* parent) {
    return QTapGesture_new2((QObject*)parent);
}

const QMetaObject* q_tapgesture_meta_object(void* self) {
    return QTapGesture_MetaObject((QTapGesture*)self);
}

void* q_tapgesture_metacast(void* self, const char* param1) {
    return QTapGesture_Metacast((QTapGesture*)self, param1);
}

int32_t q_tapgesture_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTapGesture_Metacall((QTapGesture*)self, param1, param2, param3);
}

void q_tapgesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTapGesture_OnMetacall((QTapGesture*)self, (intptr_t)callback);
}

int32_t q_tapgesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTapGesture_QBaseMetacall((QTapGesture*)self, param1, param2, param3);
}

const char* q_tapgesture_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPointF* q_tapgesture_position(void* self) {
    return QTapGesture_Position((QTapGesture*)self);
}

void q_tapgesture_set_position(void* self, void* pos) {
    QTapGesture_SetPosition((QTapGesture*)self, (QPointF*)pos);
}

const char* q_tapgesture_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tapgesture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_tapgesture_gesture_type(void* self) {
    return QGesture_GestureType((QGesture*)self);
}

int32_t q_tapgesture_state(void* self) {
    return QGesture_State((QGesture*)self);
}

QPointF* q_tapgesture_hot_spot(void* self) {
    return QGesture_HotSpot((QGesture*)self);
}

void q_tapgesture_set_hot_spot(void* self, void* value) {
    QGesture_SetHotSpot((QGesture*)self, (QPointF*)value);
}

bool q_tapgesture_has_hot_spot(void* self) {
    return QGesture_HasHotSpot((QGesture*)self);
}

void q_tapgesture_unset_hot_spot(void* self) {
    QGesture_UnsetHotSpot((QGesture*)self);
}

void q_tapgesture_set_gesture_cancel_policy(void* self, int32_t policy) {
    QGesture_SetGestureCancelPolicy((QGesture*)self, policy);
}

int32_t q_tapgesture_gesture_cancel_policy(void* self) {
    return QGesture_GestureCancelPolicy((QGesture*)self);
}

const char* q_tapgesture_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tapgesture_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_tapgesture_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_tapgesture_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_tapgesture_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_tapgesture_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_tapgesture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_tapgesture_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_tapgesture_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_tapgesture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_tapgesture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_tapgesture_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_tapgesture_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_tapgesture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_tapgesture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_tapgesture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_tapgesture_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_tapgesture_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_tapgesture_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_tapgesture_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_tapgesture_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_tapgesture_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_tapgesture_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_tapgesture_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_tapgesture_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_tapgesture_dynamic_property_names");
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

QBindingStorage* q_tapgesture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_tapgesture_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_tapgesture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_tapgesture_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_tapgesture_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_tapgesture_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_tapgesture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_tapgesture_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_tapgesture_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_tapgesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_tapgesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_tapgesture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_tapgesture_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_tapgesture_event(void* self, void* event) {
    return QTapGesture_Event((QTapGesture*)self, (QEvent*)event);
}

bool q_tapgesture_qbase_event(void* self, void* event) {
    return QTapGesture_QBaseEvent((QTapGesture*)self, (QEvent*)event);
}

void q_tapgesture_on_event(void* self, bool (*callback)(void*, void*)) {
    QTapGesture_OnEvent((QTapGesture*)self, (intptr_t)callback);
}

bool q_tapgesture_event_filter(void* self, void* watched, void* event) {
    return QTapGesture_EventFilter((QTapGesture*)self, (QObject*)watched, (QEvent*)event);
}

bool q_tapgesture_qbase_event_filter(void* self, void* watched, void* event) {
    return QTapGesture_QBaseEventFilter((QTapGesture*)self, (QObject*)watched, (QEvent*)event);
}

void q_tapgesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTapGesture_OnEventFilter((QTapGesture*)self, (intptr_t)callback);
}

void q_tapgesture_timer_event(void* self, void* event) {
    QTapGesture_TimerEvent((QTapGesture*)self, (QTimerEvent*)event);
}

void q_tapgesture_qbase_timer_event(void* self, void* event) {
    QTapGesture_QBaseTimerEvent((QTapGesture*)self, (QTimerEvent*)event);
}

void q_tapgesture_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTapGesture_OnTimerEvent((QTapGesture*)self, (intptr_t)callback);
}

void q_tapgesture_child_event(void* self, void* event) {
    QTapGesture_ChildEvent((QTapGesture*)self, (QChildEvent*)event);
}

void q_tapgesture_qbase_child_event(void* self, void* event) {
    QTapGesture_QBaseChildEvent((QTapGesture*)self, (QChildEvent*)event);
}

void q_tapgesture_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTapGesture_OnChildEvent((QTapGesture*)self, (intptr_t)callback);
}

void q_tapgesture_custom_event(void* self, void* event) {
    QTapGesture_CustomEvent((QTapGesture*)self, (QEvent*)event);
}

void q_tapgesture_qbase_custom_event(void* self, void* event) {
    QTapGesture_QBaseCustomEvent((QTapGesture*)self, (QEvent*)event);
}

void q_tapgesture_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTapGesture_OnCustomEvent((QTapGesture*)self, (intptr_t)callback);
}

void q_tapgesture_connect_notify(void* self, void* signal) {
    QTapGesture_ConnectNotify((QTapGesture*)self, (QMetaMethod*)signal);
}

void q_tapgesture_qbase_connect_notify(void* self, void* signal) {
    QTapGesture_QBaseConnectNotify((QTapGesture*)self, (QMetaMethod*)signal);
}

void q_tapgesture_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTapGesture_OnConnectNotify((QTapGesture*)self, (intptr_t)callback);
}

void q_tapgesture_disconnect_notify(void* self, void* signal) {
    QTapGesture_DisconnectNotify((QTapGesture*)self, (QMetaMethod*)signal);
}

void q_tapgesture_qbase_disconnect_notify(void* self, void* signal) {
    QTapGesture_QBaseDisconnectNotify((QTapGesture*)self, (QMetaMethod*)signal);
}

void q_tapgesture_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTapGesture_OnDisconnectNotify((QTapGesture*)self, (intptr_t)callback);
}

QObject* q_tapgesture_sender(void* self) {
    return QTapGesture_Sender((QTapGesture*)self);
}

QObject* q_tapgesture_qbase_sender(void* self) {
    return QTapGesture_QBaseSender((QTapGesture*)self);
}

void q_tapgesture_on_sender(void* self, QObject* (*callback)()) {
    QTapGesture_OnSender((QTapGesture*)self, (intptr_t)callback);
}

int32_t q_tapgesture_sender_signal_index(void* self) {
    return QTapGesture_SenderSignalIndex((QTapGesture*)self);
}

int32_t q_tapgesture_qbase_sender_signal_index(void* self) {
    return QTapGesture_QBaseSenderSignalIndex((QTapGesture*)self);
}

void q_tapgesture_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTapGesture_OnSenderSignalIndex((QTapGesture*)self, (intptr_t)callback);
}

int32_t q_tapgesture_receivers(void* self, const char* signal) {
    return QTapGesture_Receivers((QTapGesture*)self, signal);
}

int32_t q_tapgesture_qbase_receivers(void* self, const char* signal) {
    return QTapGesture_QBaseReceivers((QTapGesture*)self, signal);
}

void q_tapgesture_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTapGesture_OnReceivers((QTapGesture*)self, (intptr_t)callback);
}

bool q_tapgesture_is_signal_connected(void* self, void* signal) {
    return QTapGesture_IsSignalConnected((QTapGesture*)self, (QMetaMethod*)signal);
}

bool q_tapgesture_qbase_is_signal_connected(void* self, void* signal) {
    return QTapGesture_QBaseIsSignalConnected((QTapGesture*)self, (QMetaMethod*)signal);
}

void q_tapgesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTapGesture_OnIsSignalConnected((QTapGesture*)self, (intptr_t)callback);
}

void q_tapgesture_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_tapgesture_delete(void* self) {
    QTapGesture_Delete((QTapGesture*)(self));
}

QTapAndHoldGesture* q_tapandholdgesture_new() {
    return QTapAndHoldGesture_new();
}

QTapAndHoldGesture* q_tapandholdgesture_new2(void* parent) {
    return QTapAndHoldGesture_new2((QObject*)parent);
}

const QMetaObject* q_tapandholdgesture_meta_object(void* self) {
    return QTapAndHoldGesture_MetaObject((QTapAndHoldGesture*)self);
}

void* q_tapandholdgesture_metacast(void* self, const char* param1) {
    return QTapAndHoldGesture_Metacast((QTapAndHoldGesture*)self, param1);
}

int32_t q_tapandholdgesture_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTapAndHoldGesture_Metacall((QTapAndHoldGesture*)self, param1, param2, param3);
}

void q_tapandholdgesture_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QTapAndHoldGesture_OnMetacall((QTapAndHoldGesture*)self, (intptr_t)callback);
}

int32_t q_tapandholdgesture_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QTapAndHoldGesture_QBaseMetacall((QTapAndHoldGesture*)self, param1, param2, param3);
}

const char* q_tapandholdgesture_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPointF* q_tapandholdgesture_position(void* self) {
    return QTapAndHoldGesture_Position((QTapAndHoldGesture*)self);
}

void q_tapandholdgesture_set_position(void* self, void* pos) {
    QTapAndHoldGesture_SetPosition((QTapAndHoldGesture*)self, (QPointF*)pos);
}

void q_tapandholdgesture_set_timeout(int msecs) {
    QTapAndHoldGesture_SetTimeout(msecs);
}

int32_t q_tapandholdgesture_timeout() {
    return QTapAndHoldGesture_Timeout();
}

const char* q_tapandholdgesture_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tapandholdgesture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_tapandholdgesture_gesture_type(void* self) {
    return QGesture_GestureType((QGesture*)self);
}

int32_t q_tapandholdgesture_state(void* self) {
    return QGesture_State((QGesture*)self);
}

QPointF* q_tapandholdgesture_hot_spot(void* self) {
    return QGesture_HotSpot((QGesture*)self);
}

void q_tapandholdgesture_set_hot_spot(void* self, void* value) {
    QGesture_SetHotSpot((QGesture*)self, (QPointF*)value);
}

bool q_tapandholdgesture_has_hot_spot(void* self) {
    return QGesture_HasHotSpot((QGesture*)self);
}

void q_tapandholdgesture_unset_hot_spot(void* self) {
    QGesture_UnsetHotSpot((QGesture*)self);
}

void q_tapandholdgesture_set_gesture_cancel_policy(void* self, int32_t policy) {
    QGesture_SetGestureCancelPolicy((QGesture*)self, policy);
}

int32_t q_tapandholdgesture_gesture_cancel_policy(void* self) {
    return QGesture_GestureCancelPolicy((QGesture*)self);
}

const char* q_tapandholdgesture_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tapandholdgesture_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_tapandholdgesture_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_tapandholdgesture_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_tapandholdgesture_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_tapandholdgesture_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_tapandholdgesture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_tapandholdgesture_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_tapandholdgesture_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_tapandholdgesture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_tapandholdgesture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_tapandholdgesture_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_tapandholdgesture_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_tapandholdgesture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_tapandholdgesture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_tapandholdgesture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_tapandholdgesture_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_tapandholdgesture_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_tapandholdgesture_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_tapandholdgesture_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_tapandholdgesture_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_tapandholdgesture_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_tapandholdgesture_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_tapandholdgesture_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_tapandholdgesture_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_tapandholdgesture_dynamic_property_names");
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

QBindingStorage* q_tapandholdgesture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_tapandholdgesture_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_tapandholdgesture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_tapandholdgesture_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_tapandholdgesture_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_tapandholdgesture_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_tapandholdgesture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_tapandholdgesture_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_tapandholdgesture_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_tapandholdgesture_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_tapandholdgesture_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_tapandholdgesture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_tapandholdgesture_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_tapandholdgesture_event(void* self, void* event) {
    return QTapAndHoldGesture_Event((QTapAndHoldGesture*)self, (QEvent*)event);
}

bool q_tapandholdgesture_qbase_event(void* self, void* event) {
    return QTapAndHoldGesture_QBaseEvent((QTapAndHoldGesture*)self, (QEvent*)event);
}

void q_tapandholdgesture_on_event(void* self, bool (*callback)(void*, void*)) {
    QTapAndHoldGesture_OnEvent((QTapAndHoldGesture*)self, (intptr_t)callback);
}

bool q_tapandholdgesture_event_filter(void* self, void* watched, void* event) {
    return QTapAndHoldGesture_EventFilter((QTapAndHoldGesture*)self, (QObject*)watched, (QEvent*)event);
}

bool q_tapandholdgesture_qbase_event_filter(void* self, void* watched, void* event) {
    return QTapAndHoldGesture_QBaseEventFilter((QTapAndHoldGesture*)self, (QObject*)watched, (QEvent*)event);
}

void q_tapandholdgesture_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QTapAndHoldGesture_OnEventFilter((QTapAndHoldGesture*)self, (intptr_t)callback);
}

void q_tapandholdgesture_timer_event(void* self, void* event) {
    QTapAndHoldGesture_TimerEvent((QTapAndHoldGesture*)self, (QTimerEvent*)event);
}

void q_tapandholdgesture_qbase_timer_event(void* self, void* event) {
    QTapAndHoldGesture_QBaseTimerEvent((QTapAndHoldGesture*)self, (QTimerEvent*)event);
}

void q_tapandholdgesture_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QTapAndHoldGesture_OnTimerEvent((QTapAndHoldGesture*)self, (intptr_t)callback);
}

void q_tapandholdgesture_child_event(void* self, void* event) {
    QTapAndHoldGesture_ChildEvent((QTapAndHoldGesture*)self, (QChildEvent*)event);
}

void q_tapandholdgesture_qbase_child_event(void* self, void* event) {
    QTapAndHoldGesture_QBaseChildEvent((QTapAndHoldGesture*)self, (QChildEvent*)event);
}

void q_tapandholdgesture_on_child_event(void* self, void (*callback)(void*, void*)) {
    QTapAndHoldGesture_OnChildEvent((QTapAndHoldGesture*)self, (intptr_t)callback);
}

void q_tapandholdgesture_custom_event(void* self, void* event) {
    QTapAndHoldGesture_CustomEvent((QTapAndHoldGesture*)self, (QEvent*)event);
}

void q_tapandholdgesture_qbase_custom_event(void* self, void* event) {
    QTapAndHoldGesture_QBaseCustomEvent((QTapAndHoldGesture*)self, (QEvent*)event);
}

void q_tapandholdgesture_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QTapAndHoldGesture_OnCustomEvent((QTapAndHoldGesture*)self, (intptr_t)callback);
}

void q_tapandholdgesture_connect_notify(void* self, void* signal) {
    QTapAndHoldGesture_ConnectNotify((QTapAndHoldGesture*)self, (QMetaMethod*)signal);
}

void q_tapandholdgesture_qbase_connect_notify(void* self, void* signal) {
    QTapAndHoldGesture_QBaseConnectNotify((QTapAndHoldGesture*)self, (QMetaMethod*)signal);
}

void q_tapandholdgesture_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QTapAndHoldGesture_OnConnectNotify((QTapAndHoldGesture*)self, (intptr_t)callback);
}

void q_tapandholdgesture_disconnect_notify(void* self, void* signal) {
    QTapAndHoldGesture_DisconnectNotify((QTapAndHoldGesture*)self, (QMetaMethod*)signal);
}

void q_tapandholdgesture_qbase_disconnect_notify(void* self, void* signal) {
    QTapAndHoldGesture_QBaseDisconnectNotify((QTapAndHoldGesture*)self, (QMetaMethod*)signal);
}

void q_tapandholdgesture_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QTapAndHoldGesture_OnDisconnectNotify((QTapAndHoldGesture*)self, (intptr_t)callback);
}

QObject* q_tapandholdgesture_sender(void* self) {
    return QTapAndHoldGesture_Sender((QTapAndHoldGesture*)self);
}

QObject* q_tapandholdgesture_qbase_sender(void* self) {
    return QTapAndHoldGesture_QBaseSender((QTapAndHoldGesture*)self);
}

void q_tapandholdgesture_on_sender(void* self, QObject* (*callback)()) {
    QTapAndHoldGesture_OnSender((QTapAndHoldGesture*)self, (intptr_t)callback);
}

int32_t q_tapandholdgesture_sender_signal_index(void* self) {
    return QTapAndHoldGesture_SenderSignalIndex((QTapAndHoldGesture*)self);
}

int32_t q_tapandholdgesture_qbase_sender_signal_index(void* self) {
    return QTapAndHoldGesture_QBaseSenderSignalIndex((QTapAndHoldGesture*)self);
}

void q_tapandholdgesture_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QTapAndHoldGesture_OnSenderSignalIndex((QTapAndHoldGesture*)self, (intptr_t)callback);
}

int32_t q_tapandholdgesture_receivers(void* self, const char* signal) {
    return QTapAndHoldGesture_Receivers((QTapAndHoldGesture*)self, signal);
}

int32_t q_tapandholdgesture_qbase_receivers(void* self, const char* signal) {
    return QTapAndHoldGesture_QBaseReceivers((QTapAndHoldGesture*)self, signal);
}

void q_tapandholdgesture_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QTapAndHoldGesture_OnReceivers((QTapAndHoldGesture*)self, (intptr_t)callback);
}

bool q_tapandholdgesture_is_signal_connected(void* self, void* signal) {
    return QTapAndHoldGesture_IsSignalConnected((QTapAndHoldGesture*)self, (QMetaMethod*)signal);
}

bool q_tapandholdgesture_qbase_is_signal_connected(void* self, void* signal) {
    return QTapAndHoldGesture_QBaseIsSignalConnected((QTapAndHoldGesture*)self, (QMetaMethod*)signal);
}

void q_tapandholdgesture_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QTapAndHoldGesture_OnIsSignalConnected((QTapAndHoldGesture*)self, (intptr_t)callback);
}

void q_tapandholdgesture_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_tapandholdgesture_delete(void* self) {
    QTapAndHoldGesture_Delete((QTapAndHoldGesture*)(self));
}

QGestureEvent* q_gestureevent_new(libqt_list gestures) {
    return QGestureEvent_new(gestures);
}

QGestureEvent* q_gestureevent_new2(void* param1) {
    return QGestureEvent_new2((QGestureEvent*)param1);
}

libqt_list /* of QGesture* */ q_gestureevent_gestures(void* self) {
    libqt_list _arr = QGestureEvent_Gestures((QGestureEvent*)self);
    return _arr;
}

QGesture* q_gestureevent_gesture(void* self, int64_t type) {
    return QGestureEvent_Gesture((QGestureEvent*)self, type);
}

libqt_list /* of QGesture* */ q_gestureevent_active_gestures(void* self) {
    libqt_list _arr = QGestureEvent_ActiveGestures((QGestureEvent*)self);
    return _arr;
}

libqt_list /* of QGesture* */ q_gestureevent_canceled_gestures(void* self) {
    libqt_list _arr = QGestureEvent_CanceledGestures((QGestureEvent*)self);
    return _arr;
}

void q_gestureevent_set_accepted(void* self, void* param1, bool param2) {
    QGestureEvent_SetAccepted((QGestureEvent*)self, (QGesture*)param1, param2);
}

void q_gestureevent_accept(void* self, void* param1) {
    QGestureEvent_Accept((QGestureEvent*)self, (QGesture*)param1);
}

void q_gestureevent_ignore(void* self, void* param1) {
    QGestureEvent_Ignore((QGestureEvent*)self, (QGesture*)param1);
}

bool q_gestureevent_is_accepted(void* self, void* param1) {
    return QGestureEvent_IsAccepted((QGestureEvent*)self, (QGesture*)param1);
}

void q_gestureevent_set_accepted2(void* self, int64_t param1, bool param2) {
    QGestureEvent_SetAccepted2((QGestureEvent*)self, param1, param2);
}

void q_gestureevent_accept2(void* self, int64_t param1) {
    QGestureEvent_Accept2((QGestureEvent*)self, param1);
}

void q_gestureevent_ignore2(void* self, int64_t param1) {
    QGestureEvent_Ignore2((QGestureEvent*)self, param1);
}

bool q_gestureevent_is_accepted2(void* self, int64_t param1) {
    return QGestureEvent_IsAccepted2((QGestureEvent*)self, param1);
}

void q_gestureevent_set_widget(void* self, void* widget) {
    QGestureEvent_SetWidget((QGestureEvent*)self, (QWidget*)widget);
}

QWidget* q_gestureevent_widget(void* self) {
    return QGestureEvent_Widget((QGestureEvent*)self);
}

QPointF* q_gestureevent_map_to_graphics_scene(void* self, void* gesturePoint) {
    return QGestureEvent_MapToGraphicsScene((QGestureEvent*)self, (QPointF*)gesturePoint);
}

int32_t q_gestureevent_type(void* self) {
    return QEvent_Type((QEvent*)self);
}

bool q_gestureevent_spontaneous(void* self) {
    return QEvent_Spontaneous((QEvent*)self);
}

bool q_gestureevent_is_input_event(void* self) {
    return QEvent_IsInputEvent((QEvent*)self);
}

bool q_gestureevent_is_pointer_event(void* self) {
    return QEvent_IsPointerEvent((QEvent*)self);
}

bool q_gestureevent_is_single_point_event(void* self) {
    return QEvent_IsSinglePointEvent((QEvent*)self);
}

int32_t q_gestureevent_register_event_type() {
    return QEvent_RegisterEventType();
}

int32_t q_gestureevent_register_event_type1(int hint) {
    return QEvent_RegisterEventType1(hint);
}

QEvent* q_gestureevent_clone(void* self) {
    return QGestureEvent_Clone((QGestureEvent*)self);
}

QEvent* q_gestureevent_qbase_clone(void* self) {
    return QGestureEvent_QBaseClone((QGestureEvent*)self);
}

void q_gestureevent_on_clone(void* self, QEvent* (*callback)()) {
    QGestureEvent_OnClone((QGestureEvent*)self, (intptr_t)callback);
}

void q_gestureevent_delete(void* self) {
    QGestureEvent_Delete((QGestureEvent*)(self));
}
