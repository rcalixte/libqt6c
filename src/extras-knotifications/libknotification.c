#include "libknotificationreplyaction.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpixmap.hpp"
#include "../libqurl.hpp"
#include "../libqvariant.hpp"
#include "../libqwindow.hpp"
#include "libknotification.hpp"
#include "libknotification.h"

KNotificationAction* k_notificationaction_new() {
    return KNotificationAction_new();
}

KNotificationAction* k_notificationaction_new2(const char* label) {
    return KNotificationAction_new2(qstring(label));
}

KNotificationAction* k_notificationaction_new3(void* parent) {
    return KNotificationAction_new3((QObject*)parent);
}

const QMetaObject* k_notificationaction_meta_object(void* self) {
    return KNotificationAction_MetaObject((KNotificationAction*)self);
}

void* k_notificationaction_metacast(void* self, const char* param1) {
    return KNotificationAction_Metacast((KNotificationAction*)self, param1);
}

int32_t k_notificationaction_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNotificationAction_Metacall((KNotificationAction*)self, param1, param2, param3);
}

void k_notificationaction_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNotificationAction_OnMetacall((KNotificationAction*)self, (intptr_t)callback);
}

int32_t k_notificationaction_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNotificationAction_QBaseMetacall((KNotificationAction*)self, param1, param2, param3);
}

const char* k_notificationaction_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notificationaction_label(void* self) {
    libqt_string _str = KNotificationAction_Label((KNotificationAction*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notificationaction_set_label(void* self, const char* label) {
    KNotificationAction_SetLabel((KNotificationAction*)self, qstring(label));
}

void k_notificationaction_activated(void* self) {
    KNotificationAction_Activated((KNotificationAction*)self);
}

void k_notificationaction_on_activated(void* self, void (*callback)(void*)) {
    KNotificationAction_Connect_Activated((KNotificationAction*)self, (intptr_t)callback);
}

void k_notificationaction_label_changed(void* self, const char* label) {
    KNotificationAction_LabelChanged((KNotificationAction*)self, qstring(label));
}

void k_notificationaction_on_label_changed(void* self, void (*callback)(void*, const char*)) {
    KNotificationAction_Connect_LabelChanged((KNotificationAction*)self, (intptr_t)callback);
}

const char* k_notificationaction_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notificationaction_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notificationaction_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notificationaction_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_notificationaction_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_notificationaction_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_notificationaction_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_notificationaction_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_notificationaction_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_notificationaction_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_notificationaction_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_notificationaction_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_notificationaction_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_notificationaction_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_notificationaction_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_notificationaction_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_notificationaction_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_notificationaction_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_notificationaction_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_notificationaction_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_notificationaction_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_notificationaction_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_notificationaction_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_notificationaction_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_notificationaction_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_notificationaction_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_notificationaction_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_notificationaction_dynamic_property_names");
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

QBindingStorage* k_notificationaction_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_notificationaction_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_notificationaction_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_notificationaction_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_notificationaction_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_notificationaction_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_notificationaction_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_notificationaction_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_notificationaction_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_notificationaction_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_notificationaction_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_notificationaction_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_notificationaction_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_notificationaction_event(void* self, void* event) {
    return KNotificationAction_Event((KNotificationAction*)self, (QEvent*)event);
}

bool k_notificationaction_qbase_event(void* self, void* event) {
    return KNotificationAction_QBaseEvent((KNotificationAction*)self, (QEvent*)event);
}

void k_notificationaction_on_event(void* self, bool (*callback)(void*, void*)) {
    KNotificationAction_OnEvent((KNotificationAction*)self, (intptr_t)callback);
}

bool k_notificationaction_event_filter(void* self, void* watched, void* event) {
    return KNotificationAction_EventFilter((KNotificationAction*)self, (QObject*)watched, (QEvent*)event);
}

bool k_notificationaction_qbase_event_filter(void* self, void* watched, void* event) {
    return KNotificationAction_QBaseEventFilter((KNotificationAction*)self, (QObject*)watched, (QEvent*)event);
}

void k_notificationaction_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNotificationAction_OnEventFilter((KNotificationAction*)self, (intptr_t)callback);
}

void k_notificationaction_timer_event(void* self, void* event) {
    KNotificationAction_TimerEvent((KNotificationAction*)self, (QTimerEvent*)event);
}

void k_notificationaction_qbase_timer_event(void* self, void* event) {
    KNotificationAction_QBaseTimerEvent((KNotificationAction*)self, (QTimerEvent*)event);
}

void k_notificationaction_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNotificationAction_OnTimerEvent((KNotificationAction*)self, (intptr_t)callback);
}

void k_notificationaction_child_event(void* self, void* event) {
    KNotificationAction_ChildEvent((KNotificationAction*)self, (QChildEvent*)event);
}

void k_notificationaction_qbase_child_event(void* self, void* event) {
    KNotificationAction_QBaseChildEvent((KNotificationAction*)self, (QChildEvent*)event);
}

void k_notificationaction_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNotificationAction_OnChildEvent((KNotificationAction*)self, (intptr_t)callback);
}

void k_notificationaction_custom_event(void* self, void* event) {
    KNotificationAction_CustomEvent((KNotificationAction*)self, (QEvent*)event);
}

void k_notificationaction_qbase_custom_event(void* self, void* event) {
    KNotificationAction_QBaseCustomEvent((KNotificationAction*)self, (QEvent*)event);
}

void k_notificationaction_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNotificationAction_OnCustomEvent((KNotificationAction*)self, (intptr_t)callback);
}

void k_notificationaction_connect_notify(void* self, void* signal) {
    KNotificationAction_ConnectNotify((KNotificationAction*)self, (QMetaMethod*)signal);
}

void k_notificationaction_qbase_connect_notify(void* self, void* signal) {
    KNotificationAction_QBaseConnectNotify((KNotificationAction*)self, (QMetaMethod*)signal);
}

void k_notificationaction_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNotificationAction_OnConnectNotify((KNotificationAction*)self, (intptr_t)callback);
}

void k_notificationaction_disconnect_notify(void* self, void* signal) {
    KNotificationAction_DisconnectNotify((KNotificationAction*)self, (QMetaMethod*)signal);
}

void k_notificationaction_qbase_disconnect_notify(void* self, void* signal) {
    KNotificationAction_QBaseDisconnectNotify((KNotificationAction*)self, (QMetaMethod*)signal);
}

void k_notificationaction_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNotificationAction_OnDisconnectNotify((KNotificationAction*)self, (intptr_t)callback);
}

QObject* k_notificationaction_sender(void* self) {
    return KNotificationAction_Sender((KNotificationAction*)self);
}

QObject* k_notificationaction_qbase_sender(void* self) {
    return KNotificationAction_QBaseSender((KNotificationAction*)self);
}

void k_notificationaction_on_sender(void* self, QObject* (*callback)()) {
    KNotificationAction_OnSender((KNotificationAction*)self, (intptr_t)callback);
}

int32_t k_notificationaction_sender_signal_index(void* self) {
    return KNotificationAction_SenderSignalIndex((KNotificationAction*)self);
}

int32_t k_notificationaction_qbase_sender_signal_index(void* self) {
    return KNotificationAction_QBaseSenderSignalIndex((KNotificationAction*)self);
}

void k_notificationaction_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNotificationAction_OnSenderSignalIndex((KNotificationAction*)self, (intptr_t)callback);
}

int32_t k_notificationaction_receivers(void* self, const char* signal) {
    return KNotificationAction_Receivers((KNotificationAction*)self, signal);
}

int32_t k_notificationaction_qbase_receivers(void* self, const char* signal) {
    return KNotificationAction_QBaseReceivers((KNotificationAction*)self, signal);
}

void k_notificationaction_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNotificationAction_OnReceivers((KNotificationAction*)self, (intptr_t)callback);
}

bool k_notificationaction_is_signal_connected(void* self, void* signal) {
    return KNotificationAction_IsSignalConnected((KNotificationAction*)self, (QMetaMethod*)signal);
}

bool k_notificationaction_qbase_is_signal_connected(void* self, void* signal) {
    return KNotificationAction_QBaseIsSignalConnected((KNotificationAction*)self, (QMetaMethod*)signal);
}

void k_notificationaction_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNotificationAction_OnIsSignalConnected((KNotificationAction*)self, (intptr_t)callback);
}

void k_notificationaction_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_notificationaction_delete(void* self) {
    KNotificationAction_Delete((KNotificationAction*)(self));
}

KNotification* k_notification_new(const char* eventId) {
    return KNotification_new(qstring(eventId));
}

KNotification* k_notification_new2(const char* eventId, int32_t flags) {
    return KNotification_new2(qstring(eventId), flags);
}

KNotification* k_notification_new3(const char* eventId, int32_t flags, void* parent) {
    return KNotification_new3(qstring(eventId), flags, (QObject*)parent);
}

const QMetaObject* k_notification_meta_object(void* self) {
    return KNotification_MetaObject((KNotification*)self);
}

void* k_notification_metacast(void* self, const char* param1) {
    return KNotification_Metacast((KNotification*)self, param1);
}

int32_t k_notification_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNotification_Metacall((KNotification*)self, param1, param2, param3);
}

void k_notification_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KNotification_OnMetacall((KNotification*)self, (intptr_t)callback);
}

int32_t k_notification_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KNotification_QBaseMetacall((KNotification*)self, param1, param2, param3);
}

const char* k_notification_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notification_event_id(void* self) {
    libqt_string _str = KNotification_EventId((KNotification*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notification_set_event_id(void* self, const char* eventId) {
    KNotification_SetEventId((KNotification*)self, qstring(eventId));
}

const char* k_notification_title(void* self) {
    libqt_string _str = KNotification_Title((KNotification*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notification_set_title(void* self, const char* title) {
    KNotification_SetTitle((KNotification*)self, qstring(title));
}

const char* k_notification_text(void* self) {
    libqt_string _str = KNotification_Text((KNotification*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notification_set_text(void* self, const char* text) {
    KNotification_SetText((KNotification*)self, qstring(text));
}

const char* k_notification_icon_name(void* self) {
    libqt_string _str = KNotification_IconName((KNotification*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notification_set_icon_name(void* self, const char* icon) {
    KNotification_SetIconName((KNotification*)self, qstring(icon));
}

QPixmap* k_notification_pixmap(void* self) {
    return KNotification_Pixmap((KNotification*)self);
}

void k_notification_set_pixmap(void* self, void* pix) {
    KNotification_SetPixmap((KNotification*)self, (QPixmap*)pix);
}

KNotificationAction* k_notification_default_action(void* self) {
    return KNotification_DefaultAction((KNotification*)self);
}

KNotificationAction* k_notification_add_default_action(void* self, const char* label) {
    return KNotification_AddDefaultAction((KNotification*)self, qstring(label));
}

KNotificationAction* k_notification_add_action(void* self, const char* label) {
    return KNotification_AddAction((KNotification*)self, qstring(label));
}

void k_notification_clear_actions(void* self) {
    KNotification_ClearActions((KNotification*)self);
}

KNotificationReplyAction* k_notification_reply_action(void* self) {
    return KNotification_ReplyAction((KNotification*)self);
}

int32_t k_notification_flags(void* self) {
    return KNotification_Flags((KNotification*)self);
}

void k_notification_set_flags(void* self, const int32_t* flags) {
    KNotification_SetFlags((KNotification*)self, flags);
}

const char* k_notification_component_name(void* self) {
    libqt_string _str = KNotification_ComponentName((KNotification*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notification_set_component_name(void* self, const char* componentName) {
    KNotification_SetComponentName((KNotification*)self, qstring(componentName));
}

libqt_list /* of QUrl* */ k_notification_urls(void* self) {
    libqt_list _arr = KNotification_Urls((KNotification*)self);
    return _arr;
}

void k_notification_set_urls(void* self, libqt_list urls) {
    KNotification_SetUrls((KNotification*)self, urls);
}

int32_t k_notification_urgency(void* self) {
    return KNotification_Urgency((KNotification*)self);
}

void k_notification_set_urgency(void* self, int32_t urgency) {
    KNotification_SetUrgency((KNotification*)self, urgency);
}

void k_notification_set_window(void* self, void* window) {
    KNotification_SetWindow((KNotification*)self, (QWindow*)window);
}

QWindow* k_notification_window(void* self) {
    return KNotification_Window((KNotification*)self);
}

const char* k_notification_app_name(void* self) {
    libqt_string _str = KNotification_AppName((KNotification*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_notification_is_auto_delete(void* self) {
    return KNotification_IsAutoDelete((KNotification*)self);
}

void k_notification_set_auto_delete(void* self, bool autoDelete) {
    KNotification_SetAutoDelete((KNotification*)self, autoDelete);
}

const char* k_notification_xdg_activation_token(void* self) {
    libqt_string _str = KNotification_XdgActivationToken((KNotification*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notification_closed(void* self) {
    KNotification_Closed((KNotification*)self);
}

void k_notification_on_closed(void* self, void (*callback)(void*)) {
    KNotification_Connect_Closed((KNotification*)self, (intptr_t)callback);
}

void k_notification_ignored(void* self) {
    KNotification_Ignored((KNotification*)self);
}

void k_notification_on_ignored(void* self, void (*callback)(void*)) {
    KNotification_Connect_Ignored((KNotification*)self, (intptr_t)callback);
}

void k_notification_event_id_changed(void* self) {
    KNotification_EventIdChanged((KNotification*)self);
}

void k_notification_on_event_id_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_EventIdChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_title_changed(void* self) {
    KNotification_TitleChanged((KNotification*)self);
}

void k_notification_on_title_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_TitleChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_text_changed(void* self) {
    KNotification_TextChanged((KNotification*)self);
}

void k_notification_on_text_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_TextChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_icon_name_changed(void* self) {
    KNotification_IconNameChanged((KNotification*)self);
}

void k_notification_on_icon_name_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_IconNameChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_default_action_changed(void* self) {
    KNotification_DefaultActionChanged((KNotification*)self);
}

void k_notification_on_default_action_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_DefaultActionChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_actions_changed(void* self) {
    KNotification_ActionsChanged((KNotification*)self);
}

void k_notification_on_actions_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_ActionsChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_flags_changed(void* self) {
    KNotification_FlagsChanged((KNotification*)self);
}

void k_notification_on_flags_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_FlagsChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_component_name_changed(void* self) {
    KNotification_ComponentNameChanged((KNotification*)self);
}

void k_notification_on_component_name_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_ComponentNameChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_urls_changed(void* self) {
    KNotification_UrlsChanged((KNotification*)self);
}

void k_notification_on_urls_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_UrlsChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_urgency_changed(void* self) {
    KNotification_UrgencyChanged((KNotification*)self);
}

void k_notification_on_urgency_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_UrgencyChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_auto_delete_changed(void* self) {
    KNotification_AutoDeleteChanged((KNotification*)self);
}

void k_notification_on_auto_delete_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_AutoDeleteChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_xdg_activation_token_changed(void* self) {
    KNotification_XdgActivationTokenChanged((KNotification*)self);
}

void k_notification_on_xdg_activation_token_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_XdgActivationTokenChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_hints_changed(void* self) {
    KNotification_HintsChanged((KNotification*)self);
}

void k_notification_on_hints_changed(void* self, void (*callback)(void*)) {
    KNotification_Connect_HintsChanged((KNotification*)self, (intptr_t)callback);
}

void k_notification_close(void* self) {
    KNotification_Close((KNotification*)self);
}

void k_notification_send_event(void* self) {
    KNotification_SendEvent((KNotification*)self);
}

void k_notification_set_hint(void* self, const char* hint, void* value) {
    KNotification_SetHint((KNotification*)self, qstring(hint), (QVariant*)value);
}

libqt_map /* of const char* to QVariant* */ k_notification_hints(void* self) {
    return KNotification_Hints((KNotification*)self);
}

void k_notification_set_hints(void* self, libqt_map /* of const char* to QVariant* */ hints) {
    KNotification_SetHints((KNotification*)self, hints);
}

KNotification* k_notification_event(const char* eventId, const char* title, const char* text) {
    return KNotification_Event(qstring(eventId), qstring(title), qstring(text));
}

KNotification* k_notification_event2(const char* eventId) {
    return KNotification_Event2(qstring(eventId));
}

KNotification* k_notification_event3(int32_t eventId) {
    return KNotification_Event3(eventId);
}

KNotification* k_notification_event4(int32_t eventId, const char* title, const char* text, void* pixmap) {
    return KNotification_Event4(eventId, qstring(title), qstring(text), (QPixmap*)pixmap);
}

KNotification* k_notification_event5(const char* eventId, const char* title, const char* text, const char* iconName) {
    return KNotification_Event5(qstring(eventId), qstring(title), qstring(text), qstring(iconName));
}

KNotification* k_notification_event6(int32_t eventId, const char* title, const char* text, const char* iconName) {
    return KNotification_Event6(eventId, qstring(title), qstring(text), qstring(iconName));
}

KNotification* k_notification_event7(int32_t eventId, const char* title, const char* text) {
    return KNotification_Event7(eventId, qstring(title), qstring(text));
}

void k_notification_beep() {
    KNotification_Beep();
}

const char* k_notification_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_notification_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KNotification* k_notification_event42(const char* eventId, const char* title, const char* text, void* pixmap) {
    return KNotification_Event42(qstring(eventId), qstring(title), qstring(text), (QPixmap*)pixmap);
}

KNotification* k_notification_event52(const char* eventId, const char* title, const char* text, void* pixmap, const int32_t* flags) {
    return KNotification_Event52(qstring(eventId), qstring(title), qstring(text), (QPixmap*)pixmap, flags);
}

KNotification* k_notification_event62(const char* eventId, const char* title, const char* text, void* pixmap, const int32_t* flags, const char* componentName) {
    return KNotification_Event62(qstring(eventId), qstring(title), qstring(text), (QPixmap*)pixmap, flags, qstring(componentName));
}

KNotification* k_notification_event22(const char* eventId, const char* text) {
    return KNotification_Event22(qstring(eventId), qstring(text));
}

KNotification* k_notification_event32(const char* eventId, const char* text, void* pixmap) {
    return KNotification_Event32(qstring(eventId), qstring(text), (QPixmap*)pixmap);
}

KNotification* k_notification_event43(const char* eventId, const char* text, void* pixmap, const int32_t* flags) {
    return KNotification_Event43(qstring(eventId), qstring(text), (QPixmap*)pixmap, flags);
}

KNotification* k_notification_event53(const char* eventId, const char* text, void* pixmap, const int32_t* flags, const char* componentName) {
    return KNotification_Event53(qstring(eventId), qstring(text), (QPixmap*)pixmap, flags, qstring(componentName));
}

KNotification* k_notification_event23(int32_t eventId, const char* text) {
    return KNotification_Event23(eventId, qstring(text));
}

KNotification* k_notification_event33(int32_t eventId, const char* text, void* pixmap) {
    return KNotification_Event33(eventId, qstring(text), (QPixmap*)pixmap);
}

KNotification* k_notification_event44(int32_t eventId, const char* text, void* pixmap, const int32_t* flags) {
    return KNotification_Event44(eventId, qstring(text), (QPixmap*)pixmap, flags);
}

KNotification* k_notification_event54(int32_t eventId, const char* title, const char* text, void* pixmap, const int32_t* flags) {
    return KNotification_Event54(eventId, qstring(title), qstring(text), (QPixmap*)pixmap, flags);
}

KNotification* k_notification_event55(const char* eventId, const char* title, const char* text, const char* iconName, const int32_t* flags) {
    return KNotification_Event55(qstring(eventId), qstring(title), qstring(text), qstring(iconName), flags);
}

KNotification* k_notification_event63(const char* eventId, const char* title, const char* text, const char* iconName, const int32_t* flags, const char* componentName) {
    return KNotification_Event63(qstring(eventId), qstring(title), qstring(text), qstring(iconName), flags, qstring(componentName));
}

KNotification* k_notification_event56(int32_t eventId, const char* title, const char* text, const char* iconName, const int32_t* flags) {
    return KNotification_Event56(eventId, qstring(title), qstring(text), qstring(iconName), flags);
}

KNotification* k_notification_event45(int32_t eventId, const char* title, const char* text, const int32_t* flags) {
    return KNotification_Event45(eventId, qstring(title), qstring(text), flags);
}

void k_notification_beep1(const char* reason) {
    KNotification_Beep1(qstring(reason));
}

const char* k_notification_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_notification_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_notification_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_notification_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_notification_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_notification_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_notification_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_notification_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_notification_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_notification_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_notification_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_notification_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_notification_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_notification_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_notification_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_notification_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_notification_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_notification_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_notification_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_notification_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_notification_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_notification_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_notification_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_notification_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_notification_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_notification_dynamic_property_names");
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

QBindingStorage* k_notification_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_notification_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_notification_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_notification_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_notification_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_notification_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_notification_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_notification_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_notification_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_notification_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_notification_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_notification_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_notification_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_notification_event_filter(void* self, void* watched, void* event) {
    return KNotification_EventFilter((KNotification*)self, (QObject*)watched, (QEvent*)event);
}

bool k_notification_qbase_event_filter(void* self, void* watched, void* event) {
    return KNotification_QBaseEventFilter((KNotification*)self, (QObject*)watched, (QEvent*)event);
}

void k_notification_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KNotification_OnEventFilter((KNotification*)self, (intptr_t)callback);
}

void k_notification_timer_event(void* self, void* event) {
    KNotification_TimerEvent((KNotification*)self, (QTimerEvent*)event);
}

void k_notification_qbase_timer_event(void* self, void* event) {
    KNotification_QBaseTimerEvent((KNotification*)self, (QTimerEvent*)event);
}

void k_notification_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KNotification_OnTimerEvent((KNotification*)self, (intptr_t)callback);
}

void k_notification_child_event(void* self, void* event) {
    KNotification_ChildEvent((KNotification*)self, (QChildEvent*)event);
}

void k_notification_qbase_child_event(void* self, void* event) {
    KNotification_QBaseChildEvent((KNotification*)self, (QChildEvent*)event);
}

void k_notification_on_child_event(void* self, void (*callback)(void*, void*)) {
    KNotification_OnChildEvent((KNotification*)self, (intptr_t)callback);
}

void k_notification_custom_event(void* self, void* event) {
    KNotification_CustomEvent((KNotification*)self, (QEvent*)event);
}

void k_notification_qbase_custom_event(void* self, void* event) {
    KNotification_QBaseCustomEvent((KNotification*)self, (QEvent*)event);
}

void k_notification_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KNotification_OnCustomEvent((KNotification*)self, (intptr_t)callback);
}

void k_notification_connect_notify(void* self, void* signal) {
    KNotification_ConnectNotify((KNotification*)self, (QMetaMethod*)signal);
}

void k_notification_qbase_connect_notify(void* self, void* signal) {
    KNotification_QBaseConnectNotify((KNotification*)self, (QMetaMethod*)signal);
}

void k_notification_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KNotification_OnConnectNotify((KNotification*)self, (intptr_t)callback);
}

void k_notification_disconnect_notify(void* self, void* signal) {
    KNotification_DisconnectNotify((KNotification*)self, (QMetaMethod*)signal);
}

void k_notification_qbase_disconnect_notify(void* self, void* signal) {
    KNotification_QBaseDisconnectNotify((KNotification*)self, (QMetaMethod*)signal);
}

void k_notification_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KNotification_OnDisconnectNotify((KNotification*)self, (intptr_t)callback);
}

QObject* k_notification_sender(void* self) {
    return KNotification_Sender((KNotification*)self);
}

QObject* k_notification_qbase_sender(void* self) {
    return KNotification_QBaseSender((KNotification*)self);
}

void k_notification_on_sender(void* self, QObject* (*callback)()) {
    KNotification_OnSender((KNotification*)self, (intptr_t)callback);
}

int32_t k_notification_sender_signal_index(void* self) {
    return KNotification_SenderSignalIndex((KNotification*)self);
}

int32_t k_notification_qbase_sender_signal_index(void* self) {
    return KNotification_QBaseSenderSignalIndex((KNotification*)self);
}

void k_notification_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KNotification_OnSenderSignalIndex((KNotification*)self, (intptr_t)callback);
}

int32_t k_notification_receivers(void* self, const char* signal) {
    return KNotification_Receivers((KNotification*)self, signal);
}

int32_t k_notification_qbase_receivers(void* self, const char* signal) {
    return KNotification_QBaseReceivers((KNotification*)self, signal);
}

void k_notification_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KNotification_OnReceivers((KNotification*)self, (intptr_t)callback);
}

bool k_notification_is_signal_connected(void* self, void* signal) {
    return KNotification_IsSignalConnected((KNotification*)self, (QMetaMethod*)signal);
}

bool k_notification_qbase_is_signal_connected(void* self, void* signal) {
    return KNotification_QBaseIsSignalConnected((KNotification*)self, (QMetaMethod*)signal);
}

void k_notification_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KNotification_OnIsSignalConnected((KNotification*)self, (intptr_t)callback);
}

void k_notification_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_notification_delete(void* self) {
    KNotification_Delete((KNotification*)(self));
}
