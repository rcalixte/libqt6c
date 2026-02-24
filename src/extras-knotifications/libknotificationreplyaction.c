#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libknotificationreplyaction.hpp"
#include "libknotificationreplyaction.h"

KNotificationReplyAction* k_notificationreplyaction_new(const char* label) {
    return KNotificationReplyAction_new(qstring(label));
}

const QMetaObject* k_notificationreplyaction_meta_object(void* self) {
    return KNotificationReplyAction_MetaObject((KNotificationReplyAction*)self);
}

void k_notificationreplyaction_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KNotificationReplyAction_OnMetaObject((KNotificationReplyAction*)self, (intptr_t)callback);
}

const QMetaObject* k_notificationreplyaction_super_meta_object(void* self) {
    return KNotificationReplyAction_SuperMetaObject((KNotificationReplyAction*)self);
}

void* k_notificationreplyaction_metacast(void* self, const char* param1) {
    return KNotificationReplyAction_Metacast((KNotificationReplyAction*)self, param1);
}

void k_notificationreplyaction_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KNotificationReplyAction_OnMetacast((KNotificationReplyAction*)self, (intptr_t)callback);
}

void* k_notificationreplyaction_super_metacast(void* self, const char* param1) {
    return KNotificationReplyAction_SuperMetacast((KNotificationReplyAction*)self, param1);
}

int32_t k_notificationreplyaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNotificationReplyAction_Metacall((KNotificationReplyAction*)self, param1, param2, param3);
}

void k_notificationreplyaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNotificationReplyAction_OnMetacall((KNotificationReplyAction*)self, (intptr_t)callback);
}

int32_t k_notificationreplyaction_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNotificationReplyAction_SuperMetacall((KNotificationReplyAction*)self, param1, param2, param3);
}

const char* k_notificationreplyaction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notificationreplyaction_label(void* self) {
    libqt_string _str = KNotificationReplyAction_Label((KNotificationReplyAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notificationreplyaction_set_label(void* self, const char* label) {
    KNotificationReplyAction_SetLabel((KNotificationReplyAction*)self, qstring(label));
}

const char* k_notificationreplyaction_placeholder_text(void* self) {
    libqt_string _str = KNotificationReplyAction_PlaceholderText((KNotificationReplyAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notificationreplyaction_set_placeholder_text(void* self, const char* placeholderText) {
    KNotificationReplyAction_SetPlaceholderText((KNotificationReplyAction*)self, qstring(placeholderText));
}

const char* k_notificationreplyaction_submit_button_text(void* self) {
    libqt_string _str = KNotificationReplyAction_SubmitButtonText((KNotificationReplyAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notificationreplyaction_set_submit_button_text(void* self, const char* submitButtonText) {
    KNotificationReplyAction_SetSubmitButtonText((KNotificationReplyAction*)self, qstring(submitButtonText));
}

const char* k_notificationreplyaction_submit_button_icon_name(void* self) {
    libqt_string _str = KNotificationReplyAction_SubmitButtonIconName((KNotificationReplyAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notificationreplyaction_set_submit_button_icon_name(void* self, const char* submitButtonIconName) {
    KNotificationReplyAction_SetSubmitButtonIconName((KNotificationReplyAction*)self, qstring(submitButtonIconName));
}

int32_t k_notificationreplyaction_fallback_behavior(void* self) {
    return KNotificationReplyAction_FallbackBehavior((KNotificationReplyAction*)self);
}

void k_notificationreplyaction_set_fallback_behavior(void* self, int32_t fallbackBehavior) {
    KNotificationReplyAction_SetFallbackBehavior((KNotificationReplyAction*)self, fallbackBehavior);
}

void k_notificationreplyaction_replied(void* self, const char* text) {
    KNotificationReplyAction_Replied((KNotificationReplyAction*)self, qstring(text));
}

void k_notificationreplyaction_on_replied(void* self, void (*callback)(void*, const char*)) {
    KNotificationReplyAction_Connect_Replied((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_activated(void* self) {
    KNotificationReplyAction_Activated((KNotificationReplyAction*)self);
}

void k_notificationreplyaction_on_activated(void* self, void (*callback)(void*)) {
    KNotificationReplyAction_Connect_Activated((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_label_changed(void* self) {
    KNotificationReplyAction_LabelChanged((KNotificationReplyAction*)self);
}

void k_notificationreplyaction_on_label_changed(void* self, void (*callback)(void*)) {
    KNotificationReplyAction_Connect_LabelChanged((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_placeholder_text_changed(void* self) {
    KNotificationReplyAction_PlaceholderTextChanged((KNotificationReplyAction*)self);
}

void k_notificationreplyaction_on_placeholder_text_changed(void* self, void (*callback)(void*)) {
    KNotificationReplyAction_Connect_PlaceholderTextChanged((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_submit_button_text_changed(void* self) {
    KNotificationReplyAction_SubmitButtonTextChanged((KNotificationReplyAction*)self);
}

void k_notificationreplyaction_on_submit_button_text_changed(void* self, void (*callback)(void*)) {
    KNotificationReplyAction_Connect_SubmitButtonTextChanged((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_submit_button_icon_name_changed(void* self) {
    KNotificationReplyAction_SubmitButtonIconNameChanged((KNotificationReplyAction*)self);
}

void k_notificationreplyaction_on_submit_button_icon_name_changed(void* self, void (*callback)(void*)) {
    KNotificationReplyAction_Connect_SubmitButtonIconNameChanged((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_fallback_behavior_changed(void* self) {
    KNotificationReplyAction_FallbackBehaviorChanged((KNotificationReplyAction*)self);
}

void k_notificationreplyaction_on_fallback_behavior_changed(void* self, void (*callback)(void*)) {
    KNotificationReplyAction_Connect_FallbackBehaviorChanged((KNotificationReplyAction*)self, (intptr_t)callback);
}

const char* k_notificationreplyaction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notificationreplyaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notificationreplyaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notificationreplyaction_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_notificationreplyaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_notificationreplyaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_notificationreplyaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_notificationreplyaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_notificationreplyaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_notificationreplyaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_notificationreplyaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_notificationreplyaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_notificationreplyaction_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_notificationreplyaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_notificationreplyaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_notificationreplyaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_notificationreplyaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_notificationreplyaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_notificationreplyaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_notificationreplyaction_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_notificationreplyaction_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_notificationreplyaction_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_notificationreplyaction_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_notificationreplyaction_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_notificationreplyaction_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_notificationreplyaction_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_notificationreplyaction_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_notificationreplyaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_notificationreplyaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_notificationreplyaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_notificationreplyaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_notificationreplyaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_notificationreplyaction_dynamic_property_names\n");
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

QBindingStorage* k_notificationreplyaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_notificationreplyaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_notificationreplyaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_notificationreplyaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_notificationreplyaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_notificationreplyaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_notificationreplyaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_notificationreplyaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_notificationreplyaction_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_notificationreplyaction_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_notificationreplyaction_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_notificationreplyaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_notificationreplyaction_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_notificationreplyaction_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_notificationreplyaction_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_notificationreplyaction_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_notificationreplyaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_notificationreplyaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_notificationreplyaction_event(void* self, void* event) {
    return KNotificationReplyAction_Event((KNotificationReplyAction*)self, (QEvent*)event);
}

bool k_notificationreplyaction_super_event(void* self, void* event) {
    return KNotificationReplyAction_SuperEvent((KNotificationReplyAction*)self, (QEvent*)event);
}

void k_notificationreplyaction_on_event(void* self, bool (*callback)(void*, void*)) {
    KNotificationReplyAction_OnEvent((KNotificationReplyAction*)self, (intptr_t)callback);
}

bool k_notificationreplyaction_event_filter(void* self, void* watched, void* event) {
    return KNotificationReplyAction_EventFilter((KNotificationReplyAction*)self, (QObject*)watched, (QEvent*)event);
}

bool k_notificationreplyaction_super_event_filter(void* self, void* watched, void* event) {
    return KNotificationReplyAction_SuperEventFilter((KNotificationReplyAction*)self, (QObject*)watched, (QEvent*)event);
}

void k_notificationreplyaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNotificationReplyAction_OnEventFilter((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_timer_event(void* self, void* event) {
    KNotificationReplyAction_TimerEvent((KNotificationReplyAction*)self, (QTimerEvent*)event);
}

void k_notificationreplyaction_super_timer_event(void* self, void* event) {
    KNotificationReplyAction_SuperTimerEvent((KNotificationReplyAction*)self, (QTimerEvent*)event);
}

void k_notificationreplyaction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNotificationReplyAction_OnTimerEvent((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_child_event(void* self, void* event) {
    KNotificationReplyAction_ChildEvent((KNotificationReplyAction*)self, (QChildEvent*)event);
}

void k_notificationreplyaction_super_child_event(void* self, void* event) {
    KNotificationReplyAction_SuperChildEvent((KNotificationReplyAction*)self, (QChildEvent*)event);
}

void k_notificationreplyaction_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNotificationReplyAction_OnChildEvent((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_custom_event(void* self, void* event) {
    KNotificationReplyAction_CustomEvent((KNotificationReplyAction*)self, (QEvent*)event);
}

void k_notificationreplyaction_super_custom_event(void* self, void* event) {
    KNotificationReplyAction_SuperCustomEvent((KNotificationReplyAction*)self, (QEvent*)event);
}

void k_notificationreplyaction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNotificationReplyAction_OnCustomEvent((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_connect_notify(void* self, void* signal) {
    KNotificationReplyAction_ConnectNotify((KNotificationReplyAction*)self, (QMetaMethod*)signal);
}

void k_notificationreplyaction_super_connect_notify(void* self, void* signal) {
    KNotificationReplyAction_SuperConnectNotify((KNotificationReplyAction*)self, (QMetaMethod*)signal);
}

void k_notificationreplyaction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNotificationReplyAction_OnConnectNotify((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_disconnect_notify(void* self, void* signal) {
    KNotificationReplyAction_DisconnectNotify((KNotificationReplyAction*)self, (QMetaMethod*)signal);
}

void k_notificationreplyaction_super_disconnect_notify(void* self, void* signal) {
    KNotificationReplyAction_SuperDisconnectNotify((KNotificationReplyAction*)self, (QMetaMethod*)signal);
}

void k_notificationreplyaction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNotificationReplyAction_OnDisconnectNotify((KNotificationReplyAction*)self, (intptr_t)callback);
}

QObject* k_notificationreplyaction_sender(void* self) {
    return KNotificationReplyAction_Sender((KNotificationReplyAction*)self);
}

QObject* k_notificationreplyaction_super_sender(void* self) {
    return KNotificationReplyAction_SuperSender((KNotificationReplyAction*)self);
}

void k_notificationreplyaction_on_sender(void* self, QObject* (*callback)()) {
    KNotificationReplyAction_OnSender((KNotificationReplyAction*)self, (intptr_t)callback);
}

int32_t k_notificationreplyaction_sender_signal_index(void* self) {
    return KNotificationReplyAction_SenderSignalIndex((KNotificationReplyAction*)self);
}

int32_t k_notificationreplyaction_super_sender_signal_index(void* self) {
    return KNotificationReplyAction_SuperSenderSignalIndex((KNotificationReplyAction*)self);
}

void k_notificationreplyaction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNotificationReplyAction_OnSenderSignalIndex((KNotificationReplyAction*)self, (intptr_t)callback);
}

int32_t k_notificationreplyaction_receivers(void* self, const char* signal) {
    return KNotificationReplyAction_Receivers((KNotificationReplyAction*)self, signal);
}

int32_t k_notificationreplyaction_super_receivers(void* self, const char* signal) {
    return KNotificationReplyAction_SuperReceivers((KNotificationReplyAction*)self, signal);
}

void k_notificationreplyaction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNotificationReplyAction_OnReceivers((KNotificationReplyAction*)self, (intptr_t)callback);
}

bool k_notificationreplyaction_is_signal_connected(void* self, void* signal) {
    return KNotificationReplyAction_IsSignalConnected((KNotificationReplyAction*)self, (QMetaMethod*)signal);
}

bool k_notificationreplyaction_super_is_signal_connected(void* self, void* signal) {
    return KNotificationReplyAction_SuperIsSignalConnected((KNotificationReplyAction*)self, (QMetaMethod*)signal);
}

void k_notificationreplyaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNotificationReplyAction_OnIsSignalConnected((KNotificationReplyAction*)self, (intptr_t)callback);
}

void k_notificationreplyaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_notificationreplyaction_delete(void* self) {
    KNotificationReplyAction_Delete((KNotificationReplyAction*)(self));
}
