#include "libreadonlypart.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "liblistingnotificationextension.hpp"
#include "liblistingnotificationextension.h"

KParts__ListingNotificationExtension* k_parts__listingnotificationextension_new(void* parent) {
    return KParts__ListingNotificationExtension_new((KParts__ReadOnlyPart*)parent);
}

const QMetaObject* k_parts__listingnotificationextension_meta_object(void* self) {
    return KParts__ListingNotificationExtension_MetaObject((KParts__ListingNotificationExtension*)self);
}

void k_parts__listingnotificationextension_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KParts__ListingNotificationExtension_OnMetaObject((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

const QMetaObject* k_parts__listingnotificationextension_qbase_meta_object(void* self) {
    return KParts__ListingNotificationExtension_QBaseMetaObject((KParts__ListingNotificationExtension*)self);
}

void* k_parts__listingnotificationextension_metacast(void* self, const char* param1) {
    return KParts__ListingNotificationExtension_Metacast((KParts__ListingNotificationExtension*)self, param1);
}

void k_parts__listingnotificationextension_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KParts__ListingNotificationExtension_OnMetacast((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

void* k_parts__listingnotificationextension_qbase_metacast(void* self, const char* param1) {
    return KParts__ListingNotificationExtension_QBaseMetacast((KParts__ListingNotificationExtension*)self, param1);
}

int32_t k_parts__listingnotificationextension_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__ListingNotificationExtension_Metacall((KParts__ListingNotificationExtension*)self, param1, param2, param3);
}

void k_parts__listingnotificationextension_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KParts__ListingNotificationExtension_OnMetacall((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

int32_t k_parts__listingnotificationextension_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KParts__ListingNotificationExtension_QBaseMetacall((KParts__ListingNotificationExtension*)self, param1, param2, param3);
}

const char* k_parts__listingnotificationextension_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t k_parts__listingnotificationextension_supported_notification_event_types(void* self) {
    return KParts__ListingNotificationExtension_SupportedNotificationEventTypes((KParts__ListingNotificationExtension*)self);
}

void k_parts__listingnotificationextension_on_supported_notification_event_types(void* self, int32_t (*callback)()) {
    KParts__ListingNotificationExtension_OnSupportedNotificationEventTypes((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

int32_t k_parts__listingnotificationextension_qbase_supported_notification_event_types(void* self) {
    return KParts__ListingNotificationExtension_QBaseSupportedNotificationEventTypes((KParts__ListingNotificationExtension*)self);
}

KParts__ListingNotificationExtension* k_parts__listingnotificationextension_child_object(void* obj) {
    return KParts__ListingNotificationExtension_ChildObject((QObject*)obj);
}

void k_parts__listingnotificationextension_listing_event(void* self, int32_t param1, void* param2) {
    KParts__ListingNotificationExtension_ListingEvent((KParts__ListingNotificationExtension*)self, param1, (KFileItemList*)param2);
}

void k_parts__listingnotificationextension_on_listing_event(void* self, void (*callback)(void*, int32_t, void*)) {
    KParts__ListingNotificationExtension_Connect_ListingEvent((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

const char* k_parts__listingnotificationextension_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__listingnotificationextension_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_parts__listingnotificationextension_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_parts__listingnotificationextension_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_parts__listingnotificationextension_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_parts__listingnotificationextension_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_parts__listingnotificationextension_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_parts__listingnotificationextension_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_parts__listingnotificationextension_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_parts__listingnotificationextension_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_parts__listingnotificationextension_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_parts__listingnotificationextension_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_parts__listingnotificationextension_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_parts__listingnotificationextension_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_parts__listingnotificationextension_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_parts__listingnotificationextension_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_parts__listingnotificationextension_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_parts__listingnotificationextension_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_parts__listingnotificationextension_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_parts__listingnotificationextension_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_parts__listingnotificationextension_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_parts__listingnotificationextension_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_parts__listingnotificationextension_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_parts__listingnotificationextension_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_parts__listingnotificationextension_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_parts__listingnotificationextension_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_parts__listingnotificationextension_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_parts__listingnotificationextension_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_parts__listingnotificationextension_dynamic_property_names\n");
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

QBindingStorage* k_parts__listingnotificationextension_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_parts__listingnotificationextension_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_parts__listingnotificationextension_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_parts__listingnotificationextension_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_parts__listingnotificationextension_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_parts__listingnotificationextension_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_parts__listingnotificationextension_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_parts__listingnotificationextension_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_parts__listingnotificationextension_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_parts__listingnotificationextension_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_parts__listingnotificationextension_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_parts__listingnotificationextension_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_parts__listingnotificationextension_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_parts__listingnotificationextension_event(void* self, void* event) {
    return KParts__ListingNotificationExtension_Event((KParts__ListingNotificationExtension*)self, (QEvent*)event);
}

bool k_parts__listingnotificationextension_qbase_event(void* self, void* event) {
    return KParts__ListingNotificationExtension_QBaseEvent((KParts__ListingNotificationExtension*)self, (QEvent*)event);
}

void k_parts__listingnotificationextension_on_event(void* self, bool (*callback)(void*, void*)) {
    KParts__ListingNotificationExtension_OnEvent((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

bool k_parts__listingnotificationextension_event_filter(void* self, void* watched, void* event) {
    return KParts__ListingNotificationExtension_EventFilter((KParts__ListingNotificationExtension*)self, (QObject*)watched, (QEvent*)event);
}

bool k_parts__listingnotificationextension_qbase_event_filter(void* self, void* watched, void* event) {
    return KParts__ListingNotificationExtension_QBaseEventFilter((KParts__ListingNotificationExtension*)self, (QObject*)watched, (QEvent*)event);
}

void k_parts__listingnotificationextension_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KParts__ListingNotificationExtension_OnEventFilter((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

void k_parts__listingnotificationextension_timer_event(void* self, void* event) {
    KParts__ListingNotificationExtension_TimerEvent((KParts__ListingNotificationExtension*)self, (QTimerEvent*)event);
}

void k_parts__listingnotificationextension_qbase_timer_event(void* self, void* event) {
    KParts__ListingNotificationExtension_QBaseTimerEvent((KParts__ListingNotificationExtension*)self, (QTimerEvent*)event);
}

void k_parts__listingnotificationextension_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KParts__ListingNotificationExtension_OnTimerEvent((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

void k_parts__listingnotificationextension_child_event(void* self, void* event) {
    KParts__ListingNotificationExtension_ChildEvent((KParts__ListingNotificationExtension*)self, (QChildEvent*)event);
}

void k_parts__listingnotificationextension_qbase_child_event(void* self, void* event) {
    KParts__ListingNotificationExtension_QBaseChildEvent((KParts__ListingNotificationExtension*)self, (QChildEvent*)event);
}

void k_parts__listingnotificationextension_on_child_event(void* self, void (*callback)(void*, void*)) {
    KParts__ListingNotificationExtension_OnChildEvent((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

void k_parts__listingnotificationextension_custom_event(void* self, void* event) {
    KParts__ListingNotificationExtension_CustomEvent((KParts__ListingNotificationExtension*)self, (QEvent*)event);
}

void k_parts__listingnotificationextension_qbase_custom_event(void* self, void* event) {
    KParts__ListingNotificationExtension_QBaseCustomEvent((KParts__ListingNotificationExtension*)self, (QEvent*)event);
}

void k_parts__listingnotificationextension_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KParts__ListingNotificationExtension_OnCustomEvent((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

void k_parts__listingnotificationextension_connect_notify(void* self, void* signal) {
    KParts__ListingNotificationExtension_ConnectNotify((KParts__ListingNotificationExtension*)self, (QMetaMethod*)signal);
}

void k_parts__listingnotificationextension_qbase_connect_notify(void* self, void* signal) {
    KParts__ListingNotificationExtension_QBaseConnectNotify((KParts__ListingNotificationExtension*)self, (QMetaMethod*)signal);
}

void k_parts__listingnotificationextension_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__ListingNotificationExtension_OnConnectNotify((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

void k_parts__listingnotificationextension_disconnect_notify(void* self, void* signal) {
    KParts__ListingNotificationExtension_DisconnectNotify((KParts__ListingNotificationExtension*)self, (QMetaMethod*)signal);
}

void k_parts__listingnotificationextension_qbase_disconnect_notify(void* self, void* signal) {
    KParts__ListingNotificationExtension_QBaseDisconnectNotify((KParts__ListingNotificationExtension*)self, (QMetaMethod*)signal);
}

void k_parts__listingnotificationextension_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KParts__ListingNotificationExtension_OnDisconnectNotify((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

QObject* k_parts__listingnotificationextension_sender(void* self) {
    return KParts__ListingNotificationExtension_Sender((KParts__ListingNotificationExtension*)self);
}

QObject* k_parts__listingnotificationextension_qbase_sender(void* self) {
    return KParts__ListingNotificationExtension_QBaseSender((KParts__ListingNotificationExtension*)self);
}

void k_parts__listingnotificationextension_on_sender(void* self, QObject* (*callback)()) {
    KParts__ListingNotificationExtension_OnSender((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

int32_t k_parts__listingnotificationextension_sender_signal_index(void* self) {
    return KParts__ListingNotificationExtension_SenderSignalIndex((KParts__ListingNotificationExtension*)self);
}

int32_t k_parts__listingnotificationextension_qbase_sender_signal_index(void* self) {
    return KParts__ListingNotificationExtension_QBaseSenderSignalIndex((KParts__ListingNotificationExtension*)self);
}

void k_parts__listingnotificationextension_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KParts__ListingNotificationExtension_OnSenderSignalIndex((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

int32_t k_parts__listingnotificationextension_receivers(void* self, const char* signal) {
    return KParts__ListingNotificationExtension_Receivers((KParts__ListingNotificationExtension*)self, signal);
}

int32_t k_parts__listingnotificationextension_qbase_receivers(void* self, const char* signal) {
    return KParts__ListingNotificationExtension_QBaseReceivers((KParts__ListingNotificationExtension*)self, signal);
}

void k_parts__listingnotificationextension_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KParts__ListingNotificationExtension_OnReceivers((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

bool k_parts__listingnotificationextension_is_signal_connected(void* self, void* signal) {
    return KParts__ListingNotificationExtension_IsSignalConnected((KParts__ListingNotificationExtension*)self, (QMetaMethod*)signal);
}

bool k_parts__listingnotificationextension_qbase_is_signal_connected(void* self, void* signal) {
    return KParts__ListingNotificationExtension_QBaseIsSignalConnected((KParts__ListingNotificationExtension*)self, (QMetaMethod*)signal);
}

void k_parts__listingnotificationextension_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KParts__ListingNotificationExtension_OnIsSignalConnected((KParts__ListingNotificationExtension*)self, (intptr_t)callback);
}

void k_parts__listingnotificationextension_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_parts__listingnotificationextension_delete(void* self) {
    KParts__ListingNotificationExtension_Delete((KParts__ListingNotificationExtension*)(self));
}
