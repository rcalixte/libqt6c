#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkwindowinsetscontroller.hpp"
#include "libkwindowinsetscontroller.h"

KWindowInsetsController* k_windowinsetscontroller_new() {
    return KWindowInsetsController_new();
}

KWindowInsetsController* k_windowinsetscontroller_new2(void* parent) {
    return KWindowInsetsController_new2((QObject*)parent);
}

const QMetaObject* k_windowinsetscontroller_meta_object(void* self) {
    return KWindowInsetsController_MetaObject((KWindowInsetsController*)self);
}

void k_windowinsetscontroller_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KWindowInsetsController_OnMetaObject((KWindowInsetsController*)self, (intptr_t)callback);
}

const QMetaObject* k_windowinsetscontroller_qbase_meta_object(void* self) {
    return KWindowInsetsController_QBaseMetaObject((KWindowInsetsController*)self);
}

void* k_windowinsetscontroller_metacast(void* self, const char* param1) {
    return KWindowInsetsController_Metacast((KWindowInsetsController*)self, param1);
}

void k_windowinsetscontroller_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KWindowInsetsController_OnMetacast((KWindowInsetsController*)self, (intptr_t)callback);
}

void* k_windowinsetscontroller_qbase_metacast(void* self, const char* param1) {
    return KWindowInsetsController_QBaseMetacast((KWindowInsetsController*)self, param1);
}

int32_t k_windowinsetscontroller_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWindowInsetsController_Metacall((KWindowInsetsController*)self, param1, param2, param3);
}

void k_windowinsetscontroller_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KWindowInsetsController_OnMetacall((KWindowInsetsController*)self, (intptr_t)callback);
}

int32_t k_windowinsetscontroller_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KWindowInsetsController_QBaseMetacall((KWindowInsetsController*)self, param1, param2, param3);
}

const char* k_windowinsetscontroller_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* k_windowinsetscontroller_status_bar_background_color(void* self) {
    return KWindowInsetsController_StatusBarBackgroundColor((KWindowInsetsController*)self);
}

void k_windowinsetscontroller_set_status_bar_background_color(void* self, void* color) {
    KWindowInsetsController_SetStatusBarBackgroundColor((KWindowInsetsController*)self, (QColor*)color);
}

QColor* k_windowinsetscontroller_navigation_bar_background_color(void* self) {
    return KWindowInsetsController_NavigationBarBackgroundColor((KWindowInsetsController*)self);
}

void k_windowinsetscontroller_set_navigation_bar_background_color(void* self, void* color) {
    KWindowInsetsController_SetNavigationBarBackgroundColor((KWindowInsetsController*)self, (QColor*)color);
}

void k_windowinsetscontroller_status_bar_background_color_changed(void* self) {
    KWindowInsetsController_StatusBarBackgroundColorChanged((KWindowInsetsController*)self);
}

void k_windowinsetscontroller_on_status_bar_background_color_changed(void* self, void (*callback)(void*)) {
    KWindowInsetsController_Connect_StatusBarBackgroundColorChanged((KWindowInsetsController*)self, (intptr_t)callback);
}

void k_windowinsetscontroller_navigation_bar_background_color_changed(void* self) {
    KWindowInsetsController_NavigationBarBackgroundColorChanged((KWindowInsetsController*)self);
}

void k_windowinsetscontroller_on_navigation_bar_background_color_changed(void* self, void (*callback)(void*)) {
    KWindowInsetsController_Connect_NavigationBarBackgroundColorChanged((KWindowInsetsController*)self, (intptr_t)callback);
}

const char* k_windowinsetscontroller_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinsetscontroller_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_windowinsetscontroller_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_windowinsetscontroller_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_windowinsetscontroller_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_windowinsetscontroller_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_windowinsetscontroller_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_windowinsetscontroller_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_windowinsetscontroller_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_windowinsetscontroller_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_windowinsetscontroller_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_windowinsetscontroller_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_windowinsetscontroller_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_windowinsetscontroller_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_windowinsetscontroller_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_windowinsetscontroller_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_windowinsetscontroller_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_windowinsetscontroller_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_windowinsetscontroller_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_windowinsetscontroller_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_windowinsetscontroller_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_windowinsetscontroller_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_windowinsetscontroller_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_windowinsetscontroller_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_windowinsetscontroller_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_windowinsetscontroller_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_windowinsetscontroller_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_windowinsetscontroller_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_windowinsetscontroller_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_windowinsetscontroller_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_windowinsetscontroller_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_windowinsetscontroller_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_windowinsetscontroller_dynamic_property_names\n");
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

QBindingStorage* k_windowinsetscontroller_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_windowinsetscontroller_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_windowinsetscontroller_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_windowinsetscontroller_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_windowinsetscontroller_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_windowinsetscontroller_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_windowinsetscontroller_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_windowinsetscontroller_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_windowinsetscontroller_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_windowinsetscontroller_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_windowinsetscontroller_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_windowinsetscontroller_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_windowinsetscontroller_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_windowinsetscontroller_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_windowinsetscontroller_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_windowinsetscontroller_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_windowinsetscontroller_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_windowinsetscontroller_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_windowinsetscontroller_event(void* self, void* event) {
    return KWindowInsetsController_Event((KWindowInsetsController*)self, (QEvent*)event);
}

bool k_windowinsetscontroller_qbase_event(void* self, void* event) {
    return KWindowInsetsController_QBaseEvent((KWindowInsetsController*)self, (QEvent*)event);
}

void k_windowinsetscontroller_on_event(void* self, bool (*callback)(void*, void*)) {
    KWindowInsetsController_OnEvent((KWindowInsetsController*)self, (intptr_t)callback);
}

bool k_windowinsetscontroller_event_filter(void* self, void* watched, void* event) {
    return KWindowInsetsController_EventFilter((KWindowInsetsController*)self, (QObject*)watched, (QEvent*)event);
}

bool k_windowinsetscontroller_qbase_event_filter(void* self, void* watched, void* event) {
    return KWindowInsetsController_QBaseEventFilter((KWindowInsetsController*)self, (QObject*)watched, (QEvent*)event);
}

void k_windowinsetscontroller_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KWindowInsetsController_OnEventFilter((KWindowInsetsController*)self, (intptr_t)callback);
}

void k_windowinsetscontroller_timer_event(void* self, void* event) {
    KWindowInsetsController_TimerEvent((KWindowInsetsController*)self, (QTimerEvent*)event);
}

void k_windowinsetscontroller_qbase_timer_event(void* self, void* event) {
    KWindowInsetsController_QBaseTimerEvent((KWindowInsetsController*)self, (QTimerEvent*)event);
}

void k_windowinsetscontroller_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KWindowInsetsController_OnTimerEvent((KWindowInsetsController*)self, (intptr_t)callback);
}

void k_windowinsetscontroller_child_event(void* self, void* event) {
    KWindowInsetsController_ChildEvent((KWindowInsetsController*)self, (QChildEvent*)event);
}

void k_windowinsetscontroller_qbase_child_event(void* self, void* event) {
    KWindowInsetsController_QBaseChildEvent((KWindowInsetsController*)self, (QChildEvent*)event);
}

void k_windowinsetscontroller_on_child_event(void* self, void (*callback)(void*, void*)) {
    KWindowInsetsController_OnChildEvent((KWindowInsetsController*)self, (intptr_t)callback);
}

void k_windowinsetscontroller_custom_event(void* self, void* event) {
    KWindowInsetsController_CustomEvent((KWindowInsetsController*)self, (QEvent*)event);
}

void k_windowinsetscontroller_qbase_custom_event(void* self, void* event) {
    KWindowInsetsController_QBaseCustomEvent((KWindowInsetsController*)self, (QEvent*)event);
}

void k_windowinsetscontroller_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KWindowInsetsController_OnCustomEvent((KWindowInsetsController*)self, (intptr_t)callback);
}

void k_windowinsetscontroller_connect_notify(void* self, void* signal) {
    KWindowInsetsController_ConnectNotify((KWindowInsetsController*)self, (QMetaMethod*)signal);
}

void k_windowinsetscontroller_qbase_connect_notify(void* self, void* signal) {
    KWindowInsetsController_QBaseConnectNotify((KWindowInsetsController*)self, (QMetaMethod*)signal);
}

void k_windowinsetscontroller_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KWindowInsetsController_OnConnectNotify((KWindowInsetsController*)self, (intptr_t)callback);
}

void k_windowinsetscontroller_disconnect_notify(void* self, void* signal) {
    KWindowInsetsController_DisconnectNotify((KWindowInsetsController*)self, (QMetaMethod*)signal);
}

void k_windowinsetscontroller_qbase_disconnect_notify(void* self, void* signal) {
    KWindowInsetsController_QBaseDisconnectNotify((KWindowInsetsController*)self, (QMetaMethod*)signal);
}

void k_windowinsetscontroller_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KWindowInsetsController_OnDisconnectNotify((KWindowInsetsController*)self, (intptr_t)callback);
}

QObject* k_windowinsetscontroller_sender(void* self) {
    return KWindowInsetsController_Sender((KWindowInsetsController*)self);
}

QObject* k_windowinsetscontroller_qbase_sender(void* self) {
    return KWindowInsetsController_QBaseSender((KWindowInsetsController*)self);
}

void k_windowinsetscontroller_on_sender(void* self, QObject* (*callback)()) {
    KWindowInsetsController_OnSender((KWindowInsetsController*)self, (intptr_t)callback);
}

int32_t k_windowinsetscontroller_sender_signal_index(void* self) {
    return KWindowInsetsController_SenderSignalIndex((KWindowInsetsController*)self);
}

int32_t k_windowinsetscontroller_qbase_sender_signal_index(void* self) {
    return KWindowInsetsController_QBaseSenderSignalIndex((KWindowInsetsController*)self);
}

void k_windowinsetscontroller_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KWindowInsetsController_OnSenderSignalIndex((KWindowInsetsController*)self, (intptr_t)callback);
}

int32_t k_windowinsetscontroller_receivers(void* self, const char* signal) {
    return KWindowInsetsController_Receivers((KWindowInsetsController*)self, signal);
}

int32_t k_windowinsetscontroller_qbase_receivers(void* self, const char* signal) {
    return KWindowInsetsController_QBaseReceivers((KWindowInsetsController*)self, signal);
}

void k_windowinsetscontroller_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KWindowInsetsController_OnReceivers((KWindowInsetsController*)self, (intptr_t)callback);
}

bool k_windowinsetscontroller_is_signal_connected(void* self, void* signal) {
    return KWindowInsetsController_IsSignalConnected((KWindowInsetsController*)self, (QMetaMethod*)signal);
}

bool k_windowinsetscontroller_qbase_is_signal_connected(void* self, void* signal) {
    return KWindowInsetsController_QBaseIsSignalConnected((KWindowInsetsController*)self, (QMetaMethod*)signal);
}

void k_windowinsetscontroller_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KWindowInsetsController_OnIsSignalConnected((KWindowInsetsController*)self, (intptr_t)callback);
}

void k_windowinsetscontroller_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_windowinsetscontroller_delete(void* self) {
    KWindowInsetsController_Delete((KWindowInsetsController*)(self));
}
