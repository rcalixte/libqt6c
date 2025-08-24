#include "../libqcoreevent.hpp"
#include "../libqgesture.hpp"
#include "../libqgesturerecognizer.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "libktwofingertap.hpp"
#include "libktwofingertap.h"

KTwoFingerTap* k_twofingertap_new() {
    return KTwoFingerTap_new();
}

KTwoFingerTap* k_twofingertap_new2(void* parent) {
    return KTwoFingerTap_new2((QObject*)parent);
}

const QMetaObject* k_twofingertap_meta_object(void* self) {
    return KTwoFingerTap_MetaObject((KTwoFingerTap*)self);
}

void* k_twofingertap_metacast(void* self, const char* param1) {
    return KTwoFingerTap_Metacast((KTwoFingerTap*)self, param1);
}

int32_t k_twofingertap_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTwoFingerTap_Metacall((KTwoFingerTap*)self, param1, param2, param3);
}

void k_twofingertap_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KTwoFingerTap_OnMetacall((KTwoFingerTap*)self, (intptr_t)callback);
}

int32_t k_twofingertap_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KTwoFingerTap_QBaseMetacall((KTwoFingerTap*)self, param1, param2, param3);
}

const char* k_twofingertap_tr(const char* s) {
    libqt_string _str = KTwoFingerTap_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPointF* k_twofingertap_pos(void* self) {
    return KTwoFingerTap_Pos((KTwoFingerTap*)self);
}

void k_twofingertap_set_pos(void* self, void* pos) {
    KTwoFingerTap_SetPos((KTwoFingerTap*)self, (QPointF*)pos);
}

QPointF* k_twofingertap_screen_pos(void* self) {
    return KTwoFingerTap_ScreenPos((KTwoFingerTap*)self);
}

void k_twofingertap_set_screen_pos(void* self, void* screenPos) {
    KTwoFingerTap_SetScreenPos((KTwoFingerTap*)self, (QPointF*)screenPos);
}

QPointF* k_twofingertap_scene_pos(void* self) {
    return KTwoFingerTap_ScenePos((KTwoFingerTap*)self);
}

void k_twofingertap_set_scene_pos(void* self, void* scenePos) {
    KTwoFingerTap_SetScenePos((KTwoFingerTap*)self, (QPointF*)scenePos);
}

const char* k_twofingertap_tr2(const char* s, const char* c) {
    libqt_string _str = KTwoFingerTap_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_twofingertap_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KTwoFingerTap_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t k_twofingertap_gesture_type(void* self) {
    return QGesture_GestureType((QGesture*)self);
}

int32_t k_twofingertap_state(void* self) {
    return QGesture_State((QGesture*)self);
}

QPointF* k_twofingertap_hot_spot(void* self) {
    return QGesture_HotSpot((QGesture*)self);
}

void k_twofingertap_set_hot_spot(void* self, void* value) {
    QGesture_SetHotSpot((QGesture*)self, (QPointF*)value);
}

bool k_twofingertap_has_hot_spot(void* self) {
    return QGesture_HasHotSpot((QGesture*)self);
}

void k_twofingertap_unset_hot_spot(void* self) {
    QGesture_UnsetHotSpot((QGesture*)self);
}

void k_twofingertap_set_gesture_cancel_policy(void* self, int32_t policy) {
    QGesture_SetGestureCancelPolicy((QGesture*)self, policy);
}

int32_t k_twofingertap_gesture_cancel_policy(void* self) {
    return QGesture_GestureCancelPolicy((QGesture*)self);
}

const char* k_twofingertap_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_twofingertap_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_twofingertap_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_twofingertap_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_twofingertap_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_twofingertap_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_twofingertap_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_twofingertap_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_twofingertap_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_twofingertap_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_twofingertap_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_twofingertap_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_twofingertap_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_twofingertap_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_twofingertap_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_twofingertap_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_twofingertap_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_twofingertap_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_twofingertap_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_twofingertap_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_twofingertap_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_twofingertap_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_twofingertap_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_twofingertap_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_twofingertap_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_twofingertap_dynamic_property_names");
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

QBindingStorage* k_twofingertap_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_twofingertap_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_twofingertap_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_twofingertap_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_twofingertap_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_twofingertap_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_twofingertap_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_twofingertap_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_twofingertap_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_twofingertap_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_twofingertap_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_twofingertap_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_twofingertap_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_twofingertap_event(void* self, void* event) {
    return KTwoFingerTap_Event((KTwoFingerTap*)self, (QEvent*)event);
}

bool k_twofingertap_qbase_event(void* self, void* event) {
    return KTwoFingerTap_QBaseEvent((KTwoFingerTap*)self, (QEvent*)event);
}

void k_twofingertap_on_event(void* self, bool (*callback)(void*, void*)) {
    KTwoFingerTap_OnEvent((KTwoFingerTap*)self, (intptr_t)callback);
}

bool k_twofingertap_event_filter(void* self, void* watched, void* event) {
    return KTwoFingerTap_EventFilter((KTwoFingerTap*)self, (QObject*)watched, (QEvent*)event);
}

bool k_twofingertap_qbase_event_filter(void* self, void* watched, void* event) {
    return KTwoFingerTap_QBaseEventFilter((KTwoFingerTap*)self, (QObject*)watched, (QEvent*)event);
}

void k_twofingertap_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KTwoFingerTap_OnEventFilter((KTwoFingerTap*)self, (intptr_t)callback);
}

void k_twofingertap_timer_event(void* self, void* event) {
    KTwoFingerTap_TimerEvent((KTwoFingerTap*)self, (QTimerEvent*)event);
}

void k_twofingertap_qbase_timer_event(void* self, void* event) {
    KTwoFingerTap_QBaseTimerEvent((KTwoFingerTap*)self, (QTimerEvent*)event);
}

void k_twofingertap_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KTwoFingerTap_OnTimerEvent((KTwoFingerTap*)self, (intptr_t)callback);
}

void k_twofingertap_child_event(void* self, void* event) {
    KTwoFingerTap_ChildEvent((KTwoFingerTap*)self, (QChildEvent*)event);
}

void k_twofingertap_qbase_child_event(void* self, void* event) {
    KTwoFingerTap_QBaseChildEvent((KTwoFingerTap*)self, (QChildEvent*)event);
}

void k_twofingertap_on_child_event(void* self, void (*callback)(void*, void*)) {
    KTwoFingerTap_OnChildEvent((KTwoFingerTap*)self, (intptr_t)callback);
}

void k_twofingertap_custom_event(void* self, void* event) {
    KTwoFingerTap_CustomEvent((KTwoFingerTap*)self, (QEvent*)event);
}

void k_twofingertap_qbase_custom_event(void* self, void* event) {
    KTwoFingerTap_QBaseCustomEvent((KTwoFingerTap*)self, (QEvent*)event);
}

void k_twofingertap_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KTwoFingerTap_OnCustomEvent((KTwoFingerTap*)self, (intptr_t)callback);
}

void k_twofingertap_connect_notify(void* self, void* signal) {
    KTwoFingerTap_ConnectNotify((KTwoFingerTap*)self, (QMetaMethod*)signal);
}

void k_twofingertap_qbase_connect_notify(void* self, void* signal) {
    KTwoFingerTap_QBaseConnectNotify((KTwoFingerTap*)self, (QMetaMethod*)signal);
}

void k_twofingertap_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KTwoFingerTap_OnConnectNotify((KTwoFingerTap*)self, (intptr_t)callback);
}

void k_twofingertap_disconnect_notify(void* self, void* signal) {
    KTwoFingerTap_DisconnectNotify((KTwoFingerTap*)self, (QMetaMethod*)signal);
}

void k_twofingertap_qbase_disconnect_notify(void* self, void* signal) {
    KTwoFingerTap_QBaseDisconnectNotify((KTwoFingerTap*)self, (QMetaMethod*)signal);
}

void k_twofingertap_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KTwoFingerTap_OnDisconnectNotify((KTwoFingerTap*)self, (intptr_t)callback);
}

QObject* k_twofingertap_sender(void* self) {
    return KTwoFingerTap_Sender((KTwoFingerTap*)self);
}

QObject* k_twofingertap_qbase_sender(void* self) {
    return KTwoFingerTap_QBaseSender((KTwoFingerTap*)self);
}

void k_twofingertap_on_sender(void* self, QObject* (*callback)()) {
    KTwoFingerTap_OnSender((KTwoFingerTap*)self, (intptr_t)callback);
}

int32_t k_twofingertap_sender_signal_index(void* self) {
    return KTwoFingerTap_SenderSignalIndex((KTwoFingerTap*)self);
}

int32_t k_twofingertap_qbase_sender_signal_index(void* self) {
    return KTwoFingerTap_QBaseSenderSignalIndex((KTwoFingerTap*)self);
}

void k_twofingertap_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KTwoFingerTap_OnSenderSignalIndex((KTwoFingerTap*)self, (intptr_t)callback);
}

int32_t k_twofingertap_receivers(void* self, const char* signal) {
    return KTwoFingerTap_Receivers((KTwoFingerTap*)self, signal);
}

int32_t k_twofingertap_qbase_receivers(void* self, const char* signal) {
    return KTwoFingerTap_QBaseReceivers((KTwoFingerTap*)self, signal);
}

void k_twofingertap_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KTwoFingerTap_OnReceivers((KTwoFingerTap*)self, (intptr_t)callback);
}

bool k_twofingertap_is_signal_connected(void* self, void* signal) {
    return KTwoFingerTap_IsSignalConnected((KTwoFingerTap*)self, (QMetaMethod*)signal);
}

bool k_twofingertap_qbase_is_signal_connected(void* self, void* signal) {
    return KTwoFingerTap_QBaseIsSignalConnected((KTwoFingerTap*)self, (QMetaMethod*)signal);
}

void k_twofingertap_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KTwoFingerTap_OnIsSignalConnected((KTwoFingerTap*)self, (intptr_t)callback);
}

void k_twofingertap_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_twofingertap_delete(void* self) {
    KTwoFingerTap_Delete((KTwoFingerTap*)(self));
}

KTwoFingerTapRecognizer* k_twofingertaprecognizer_new() {
    return KTwoFingerTapRecognizer_new();
}

QGesture* k_twofingertaprecognizer_create(void* self, void* target) {
    return KTwoFingerTapRecognizer_Create((KTwoFingerTapRecognizer*)self, (QObject*)target);
}

void k_twofingertaprecognizer_on_create(void* self, QGesture* (*callback)(void*, void*)) {
    KTwoFingerTapRecognizer_OnCreate((KTwoFingerTapRecognizer*)self, (intptr_t)callback);
}

QGesture* k_twofingertaprecognizer_qbase_create(void* self, void* target) {
    return KTwoFingerTapRecognizer_QBaseCreate((KTwoFingerTapRecognizer*)self, (QObject*)target);
}

int64_t k_twofingertaprecognizer_recognize(void* self, void* gesture, void* watched, void* event) {
    return KTwoFingerTapRecognizer_Recognize((KTwoFingerTapRecognizer*)self, (QGesture*)gesture, (QObject*)watched, (QEvent*)event);
}

void k_twofingertaprecognizer_on_recognize(void* self, int64_t (*callback)(void*, void*, void*, void*)) {
    KTwoFingerTapRecognizer_OnRecognize((KTwoFingerTapRecognizer*)self, (intptr_t)callback);
}

int64_t k_twofingertaprecognizer_qbase_recognize(void* self, void* gesture, void* watched, void* event) {
    return KTwoFingerTapRecognizer_QBaseRecognize((KTwoFingerTapRecognizer*)self, (QGesture*)gesture, (QObject*)watched, (QEvent*)event);
}

int32_t k_twofingertaprecognizer_tap_radius(void* self) {
    return KTwoFingerTapRecognizer_TapRadius((KTwoFingerTapRecognizer*)self);
}

void k_twofingertaprecognizer_set_tap_radius(void* self, int i) {
    KTwoFingerTapRecognizer_SetTapRadius((KTwoFingerTapRecognizer*)self, i);
}

int64_t k_twofingertaprecognizer_register_recognizer(void* recognizer) {
    return QGestureRecognizer_RegisterRecognizer((QGestureRecognizer*)recognizer);
}

void k_twofingertaprecognizer_unregister_recognizer(int64_t typeVal) {
    QGestureRecognizer_UnregisterRecognizer(typeVal);
}

void k_twofingertaprecognizer_operator_assign(void* self, void* param1) {
    QGestureRecognizer_OperatorAssign((QGestureRecognizer*)self, (QGestureRecognizer*)param1);
}

void k_twofingertaprecognizer_reset(void* self, void* state) {
    KTwoFingerTapRecognizer_Reset((KTwoFingerTapRecognizer*)self, (QGesture*)state);
}

void k_twofingertaprecognizer_qbase_reset(void* self, void* state) {
    KTwoFingerTapRecognizer_QBaseReset((KTwoFingerTapRecognizer*)self, (QGesture*)state);
}

void k_twofingertaprecognizer_on_reset(void* self, void (*callback)(void*, void*)) {
    KTwoFingerTapRecognizer_OnReset((KTwoFingerTapRecognizer*)self, (intptr_t)callback);
}

void k_twofingertaprecognizer_delete(void* self) {
    KTwoFingerTapRecognizer_Delete((KTwoFingerTapRecognizer*)(self));
}
