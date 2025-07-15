#include "libqevent.hpp"
#include "libqicon.hpp"
#include "libqmenu.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqsystemtrayicon.hpp"
#include "libqsystemtrayicon.h"

QSystemTrayIcon* q_systemtrayicon_new() {
    return QSystemTrayIcon_new();
}

QSystemTrayIcon* q_systemtrayicon_new2(void* icon) {
    return QSystemTrayIcon_new2((QIcon*)icon);
}

QSystemTrayIcon* q_systemtrayicon_new3(void* parent) {
    return QSystemTrayIcon_new3((QObject*)parent);
}

QSystemTrayIcon* q_systemtrayicon_new4(void* icon, void* parent) {
    return QSystemTrayIcon_new4((QIcon*)icon, (QObject*)parent);
}

const QMetaObject* q_systemtrayicon_meta_object(void* self) {
    return QSystemTrayIcon_MetaObject((QSystemTrayIcon*)self);
}

void* q_systemtrayicon_metacast(void* self, const char* param1) {
    return QSystemTrayIcon_Metacast((QSystemTrayIcon*)self, param1);
}

int32_t q_systemtrayicon_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSystemTrayIcon_Metacall((QSystemTrayIcon*)self, param1, param2, param3);
}

void q_systemtrayicon_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSystemTrayIcon_OnMetacall((QSystemTrayIcon*)self, (intptr_t)slot);
}

int32_t q_systemtrayicon_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSystemTrayIcon_QBaseMetacall((QSystemTrayIcon*)self, param1, param2, param3);
}

const char* q_systemtrayicon_tr(const char* s) {
    libqt_string _str = QSystemTrayIcon_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_systemtrayicon_set_context_menu(void* self, void* menu) {
    QSystemTrayIcon_SetContextMenu((QSystemTrayIcon*)self, (QMenu*)menu);
}

QMenu* q_systemtrayicon_context_menu(void* self) {
    return QSystemTrayIcon_ContextMenu((QSystemTrayIcon*)self);
}

QIcon* q_systemtrayicon_icon(void* self) {
    return QSystemTrayIcon_Icon((QSystemTrayIcon*)self);
}

void q_systemtrayicon_set_icon(void* self, void* icon) {
    QSystemTrayIcon_SetIcon((QSystemTrayIcon*)self, (QIcon*)icon);
}

const char* q_systemtrayicon_tool_tip(void* self) {
    libqt_string _str = QSystemTrayIcon_ToolTip((QSystemTrayIcon*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_systemtrayicon_set_tool_tip(void* self, const char* tip) {
    QSystemTrayIcon_SetToolTip((QSystemTrayIcon*)self, qstring(tip));
}

bool q_systemtrayicon_is_system_tray_available() {
    return QSystemTrayIcon_IsSystemTrayAvailable();
}

bool q_systemtrayicon_supports_messages() {
    return QSystemTrayIcon_SupportsMessages();
}

QRect* q_systemtrayicon_geometry(void* self) {
    return QSystemTrayIcon_Geometry((QSystemTrayIcon*)self);
}

bool q_systemtrayicon_is_visible(void* self) {
    return QSystemTrayIcon_IsVisible((QSystemTrayIcon*)self);
}

void q_systemtrayicon_set_visible(void* self, bool visible) {
    QSystemTrayIcon_SetVisible((QSystemTrayIcon*)self, visible);
}

void q_systemtrayicon_show(void* self) {
    QSystemTrayIcon_Show((QSystemTrayIcon*)self);
}

void q_systemtrayicon_hide(void* self) {
    QSystemTrayIcon_Hide((QSystemTrayIcon*)self);
}

void q_systemtrayicon_show_message(void* self, const char* title, const char* msg, void* icon) {
    QSystemTrayIcon_ShowMessage((QSystemTrayIcon*)self, qstring(title), qstring(msg), (QIcon*)icon);
}

void q_systemtrayicon_show_message2(void* self, const char* title, const char* msg) {
    QSystemTrayIcon_ShowMessage2((QSystemTrayIcon*)self, qstring(title), qstring(msg));
}

void q_systemtrayicon_activated(void* self, int64_t reason) {
    QSystemTrayIcon_Activated((QSystemTrayIcon*)self, reason);
}

void q_systemtrayicon_on_activated(void* self, void (*slot)(void*, int64_t)) {
    QSystemTrayIcon_Connect_Activated((QSystemTrayIcon*)self, (intptr_t)slot);
}

void q_systemtrayicon_message_clicked(void* self) {
    QSystemTrayIcon_MessageClicked((QSystemTrayIcon*)self);
}

void q_systemtrayicon_on_message_clicked(void* self, void (*slot)(void*)) {
    QSystemTrayIcon_Connect_MessageClicked((QSystemTrayIcon*)self, (intptr_t)slot);
}

bool q_systemtrayicon_event(void* self, void* event) {
    return QSystemTrayIcon_Event((QSystemTrayIcon*)self, (QEvent*)event);
}

void q_systemtrayicon_on_event(void* self, bool (*slot)(void*, void*)) {
    QSystemTrayIcon_OnEvent((QSystemTrayIcon*)self, (intptr_t)slot);
}

bool q_systemtrayicon_qbase_event(void* self, void* event) {
    return QSystemTrayIcon_QBaseEvent((QSystemTrayIcon*)self, (QEvent*)event);
}

const char* q_systemtrayicon_tr2(const char* s, const char* c) {
    libqt_string _str = QSystemTrayIcon_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_systemtrayicon_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSystemTrayIcon_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_systemtrayicon_show_message4(void* self, const char* title, const char* msg, void* icon, int msecs) {
    QSystemTrayIcon_ShowMessage4((QSystemTrayIcon*)self, qstring(title), qstring(msg), (QIcon*)icon, msecs);
}

void q_systemtrayicon_show_message3(void* self, const char* title, const char* msg, int64_t icon) {
    QSystemTrayIcon_ShowMessage3((QSystemTrayIcon*)self, qstring(title), qstring(msg), icon);
}

void q_systemtrayicon_show_message42(void* self, const char* title, const char* msg, int64_t icon, int msecs) {
    QSystemTrayIcon_ShowMessage42((QSystemTrayIcon*)self, qstring(title), qstring(msg), icon, msecs);
}

const char* q_systemtrayicon_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_systemtrayicon_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_systemtrayicon_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_systemtrayicon_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_systemtrayicon_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_systemtrayicon_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_systemtrayicon_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_systemtrayicon_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_systemtrayicon_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_systemtrayicon_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_systemtrayicon_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_systemtrayicon_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_systemtrayicon_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_systemtrayicon_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_systemtrayicon_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_systemtrayicon_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_systemtrayicon_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_systemtrayicon_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_systemtrayicon_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_systemtrayicon_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_systemtrayicon_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_systemtrayicon_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_systemtrayicon_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_systemtrayicon_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_systemtrayicon_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_systemtrayicon_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_systemtrayicon_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_systemtrayicon_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_systemtrayicon_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_systemtrayicon_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_systemtrayicon_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_systemtrayicon_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_systemtrayicon_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_systemtrayicon_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_systemtrayicon_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_systemtrayicon_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_systemtrayicon_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_systemtrayicon_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_systemtrayicon_event_filter(void* self, void* watched, void* event) {
    return QSystemTrayIcon_EventFilter((QSystemTrayIcon*)self, (QObject*)watched, (QEvent*)event);
}

bool q_systemtrayicon_qbase_event_filter(void* self, void* watched, void* event) {
    return QSystemTrayIcon_QBaseEventFilter((QSystemTrayIcon*)self, (QObject*)watched, (QEvent*)event);
}

void q_systemtrayicon_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSystemTrayIcon_OnEventFilter((QSystemTrayIcon*)self, (intptr_t)slot);
}

void q_systemtrayicon_timer_event(void* self, void* event) {
    QSystemTrayIcon_TimerEvent((QSystemTrayIcon*)self, (QTimerEvent*)event);
}

void q_systemtrayicon_qbase_timer_event(void* self, void* event) {
    QSystemTrayIcon_QBaseTimerEvent((QSystemTrayIcon*)self, (QTimerEvent*)event);
}

void q_systemtrayicon_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSystemTrayIcon_OnTimerEvent((QSystemTrayIcon*)self, (intptr_t)slot);
}

void q_systemtrayicon_child_event(void* self, void* event) {
    QSystemTrayIcon_ChildEvent((QSystemTrayIcon*)self, (QChildEvent*)event);
}

void q_systemtrayicon_qbase_child_event(void* self, void* event) {
    QSystemTrayIcon_QBaseChildEvent((QSystemTrayIcon*)self, (QChildEvent*)event);
}

void q_systemtrayicon_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSystemTrayIcon_OnChildEvent((QSystemTrayIcon*)self, (intptr_t)slot);
}

void q_systemtrayicon_custom_event(void* self, void* event) {
    QSystemTrayIcon_CustomEvent((QSystemTrayIcon*)self, (QEvent*)event);
}

void q_systemtrayicon_qbase_custom_event(void* self, void* event) {
    QSystemTrayIcon_QBaseCustomEvent((QSystemTrayIcon*)self, (QEvent*)event);
}

void q_systemtrayicon_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSystemTrayIcon_OnCustomEvent((QSystemTrayIcon*)self, (intptr_t)slot);
}

void q_systemtrayicon_connect_notify(void* self, void* signal) {
    QSystemTrayIcon_ConnectNotify((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

void q_systemtrayicon_qbase_connect_notify(void* self, void* signal) {
    QSystemTrayIcon_QBaseConnectNotify((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

void q_systemtrayicon_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSystemTrayIcon_OnConnectNotify((QSystemTrayIcon*)self, (intptr_t)slot);
}

void q_systemtrayicon_disconnect_notify(void* self, void* signal) {
    QSystemTrayIcon_DisconnectNotify((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

void q_systemtrayicon_qbase_disconnect_notify(void* self, void* signal) {
    QSystemTrayIcon_QBaseDisconnectNotify((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

void q_systemtrayicon_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSystemTrayIcon_OnDisconnectNotify((QSystemTrayIcon*)self, (intptr_t)slot);
}

QObject* q_systemtrayicon_sender(void* self) {
    return QSystemTrayIcon_Sender((QSystemTrayIcon*)self);
}

QObject* q_systemtrayicon_qbase_sender(void* self) {
    return QSystemTrayIcon_QBaseSender((QSystemTrayIcon*)self);
}

void q_systemtrayicon_on_sender(void* self, QObject* (*slot)()) {
    QSystemTrayIcon_OnSender((QSystemTrayIcon*)self, (intptr_t)slot);
}

int32_t q_systemtrayicon_sender_signal_index(void* self) {
    return QSystemTrayIcon_SenderSignalIndex((QSystemTrayIcon*)self);
}

int32_t q_systemtrayicon_qbase_sender_signal_index(void* self) {
    return QSystemTrayIcon_QBaseSenderSignalIndex((QSystemTrayIcon*)self);
}

void q_systemtrayicon_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSystemTrayIcon_OnSenderSignalIndex((QSystemTrayIcon*)self, (intptr_t)slot);
}

int32_t q_systemtrayicon_receivers(void* self, const char* signal) {
    return QSystemTrayIcon_Receivers((QSystemTrayIcon*)self, signal);
}

int32_t q_systemtrayicon_qbase_receivers(void* self, const char* signal) {
    return QSystemTrayIcon_QBaseReceivers((QSystemTrayIcon*)self, signal);
}

void q_systemtrayicon_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSystemTrayIcon_OnReceivers((QSystemTrayIcon*)self, (intptr_t)slot);
}

bool q_systemtrayicon_is_signal_connected(void* self, void* signal) {
    return QSystemTrayIcon_IsSignalConnected((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

bool q_systemtrayicon_qbase_is_signal_connected(void* self, void* signal) {
    return QSystemTrayIcon_QBaseIsSignalConnected((QSystemTrayIcon*)self, (QMetaMethod*)signal);
}

void q_systemtrayicon_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSystemTrayIcon_OnIsSignalConnected((QSystemTrayIcon*)self, (intptr_t)slot);
}

void q_systemtrayicon_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_systemtrayicon_delete(void* self) {
    QSystemTrayIcon_Delete((QSystemTrayIcon*)(self));
}
