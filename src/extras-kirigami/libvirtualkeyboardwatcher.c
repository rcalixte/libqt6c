#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libvirtualkeyboardwatcher.hpp"
#include "libvirtualkeyboardwatcher.h"

Kirigami__Platform__VirtualKeyboardWatcher* k_irigami__platform__virtualkeyboardwatcher_new() {
    return Kirigami__Platform__VirtualKeyboardWatcher_New();
}

Kirigami__Platform__VirtualKeyboardWatcher* k_irigami__platform__virtualkeyboardwatcher_new2(void* parent) {
    return Kirigami__Platform__VirtualKeyboardWatcher_New2((QObject*)parent);
}

const QMetaObject* k_irigami__platform__virtualkeyboardwatcher_meta_object(void* self) {
    return Kirigami__Platform__VirtualKeyboardWatcher_MetaObject((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

void k_irigami__platform__virtualkeyboardwatcher_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnMetaObject((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

const QMetaObject* k_irigami__platform__virtualkeyboardwatcher_super_meta_object(void* self) {
    return Kirigami__Platform__VirtualKeyboardWatcher_SuperMetaObject((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

void* k_irigami__platform__virtualkeyboardwatcher_metacast(void* self, const char* param1) {
    return Kirigami__Platform__VirtualKeyboardWatcher_Metacast((Kirigami__Platform__VirtualKeyboardWatcher*)self, param1);
}

void k_irigami__platform__virtualkeyboardwatcher_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnMetacast((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

void* k_irigami__platform__virtualkeyboardwatcher_super_metacast(void* self, const char* param1) {
    return Kirigami__Platform__VirtualKeyboardWatcher_SuperMetacast((Kirigami__Platform__VirtualKeyboardWatcher*)self, param1);
}

int32_t k_irigami__platform__virtualkeyboardwatcher_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Kirigami__Platform__VirtualKeyboardWatcher_Metacall((Kirigami__Platform__VirtualKeyboardWatcher*)self, param1, param2, param3);
}

void k_irigami__platform__virtualkeyboardwatcher_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnMetacall((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__virtualkeyboardwatcher_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return Kirigami__Platform__VirtualKeyboardWatcher_SuperMetacall((Kirigami__Platform__VirtualKeyboardWatcher*)self, param1, param2, param3);
}

const char* k_irigami__platform__virtualkeyboardwatcher_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_irigami__platform__virtualkeyboardwatcher_available(void* self) {
    return Kirigami__Platform__VirtualKeyboardWatcher_Available((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

void k_irigami__platform__virtualkeyboardwatcher_available_changed(void* self) {
    Kirigami__Platform__VirtualKeyboardWatcher_AvailableChanged((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_enabled(void* self) {
    return Kirigami__Platform__VirtualKeyboardWatcher_Enabled((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

void k_irigami__platform__virtualkeyboardwatcher_enabled_changed(void* self) {
    Kirigami__Platform__VirtualKeyboardWatcher_EnabledChanged((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_active(void* self) {
    return Kirigami__Platform__VirtualKeyboardWatcher_Active((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

void k_irigami__platform__virtualkeyboardwatcher_active_changed(void* self) {
    Kirigami__Platform__VirtualKeyboardWatcher_ActiveChanged((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_visible(void* self) {
    return Kirigami__Platform__VirtualKeyboardWatcher_Visible((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

void k_irigami__platform__virtualkeyboardwatcher_visible_changed(void* self) {
    Kirigami__Platform__VirtualKeyboardWatcher_VisibleChanged((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_will_show_on_active(void* self) {
    return Kirigami__Platform__VirtualKeyboardWatcher_WillShowOnActive((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

void k_irigami__platform__virtualkeyboardwatcher_will_show_on_active_changed(void* self) {
    Kirigami__Platform__VirtualKeyboardWatcher_WillShowOnActiveChanged((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

Kirigami__Platform__VirtualKeyboardWatcher* k_irigami__platform__virtualkeyboardwatcher_self() {
    return Kirigami__Platform__VirtualKeyboardWatcher_Self();
}

const char* k_irigami__platform__virtualkeyboardwatcher_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_irigami__platform__virtualkeyboardwatcher_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_irigami__platform__virtualkeyboardwatcher_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_irigami__platform__virtualkeyboardwatcher_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_irigami__platform__virtualkeyboardwatcher_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_irigami__platform__virtualkeyboardwatcher_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_irigami__platform__virtualkeyboardwatcher_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_irigami__platform__virtualkeyboardwatcher_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_irigami__platform__virtualkeyboardwatcher_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_irigami__platform__virtualkeyboardwatcher_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_irigami__platform__virtualkeyboardwatcher_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_irigami__platform__virtualkeyboardwatcher_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_irigami__platform__virtualkeyboardwatcher_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_irigami__platform__virtualkeyboardwatcher_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_irigami__platform__virtualkeyboardwatcher_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_irigami__platform__virtualkeyboardwatcher_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_irigami__platform__virtualkeyboardwatcher_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_irigami__platform__virtualkeyboardwatcher_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__virtualkeyboardwatcher_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_irigami__platform__virtualkeyboardwatcher_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_irigami__platform__virtualkeyboardwatcher_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_irigami__platform__virtualkeyboardwatcher_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_irigami__platform__virtualkeyboardwatcher_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_irigami__platform__virtualkeyboardwatcher_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_irigami__platform__virtualkeyboardwatcher_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_irigami__platform__virtualkeyboardwatcher_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_irigami__platform__virtualkeyboardwatcher_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_irigami__platform__virtualkeyboardwatcher_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_irigami__platform__virtualkeyboardwatcher_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_irigami__platform__virtualkeyboardwatcher_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_irigami__platform__virtualkeyboardwatcher_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_irigami__platform__virtualkeyboardwatcher_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_irigami__platform__virtualkeyboardwatcher_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_irigami__platform__virtualkeyboardwatcher_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_irigami__platform__virtualkeyboardwatcher_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_irigami__platform__virtualkeyboardwatcher_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_irigami__platform__virtualkeyboardwatcher_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_irigami__platform__virtualkeyboardwatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_irigami__platform__virtualkeyboardwatcher_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_irigami__platform__virtualkeyboardwatcher_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_irigami__platform__virtualkeyboardwatcher_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_irigami__platform__virtualkeyboardwatcher_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_irigami__platform__virtualkeyboardwatcher_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_irigami__platform__virtualkeyboardwatcher_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_irigami__platform__virtualkeyboardwatcher_event(void* self, void* event) {
    return Kirigami__Platform__VirtualKeyboardWatcher_Event((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QEvent*)event);
}

bool k_irigami__platform__virtualkeyboardwatcher_super_event(void* self, void* event) {
    return Kirigami__Platform__VirtualKeyboardWatcher_SuperEvent((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QEvent*)event);
}

void k_irigami__platform__virtualkeyboardwatcher_on_event(void* self, bool (*callback)(void*, void*)) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnEvent((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

bool k_irigami__platform__virtualkeyboardwatcher_event_filter(void* self, void* watched, void* event) {
    return Kirigami__Platform__VirtualKeyboardWatcher_EventFilter((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QObject*)watched, (QEvent*)event);
}

bool k_irigami__platform__virtualkeyboardwatcher_super_event_filter(void* self, void* watched, void* event) {
    return Kirigami__Platform__VirtualKeyboardWatcher_SuperEventFilter((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QObject*)watched, (QEvent*)event);
}

void k_irigami__platform__virtualkeyboardwatcher_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnEventFilter((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

void k_irigami__platform__virtualkeyboardwatcher_timer_event(void* self, void* event) {
    Kirigami__Platform__VirtualKeyboardWatcher_TimerEvent((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QTimerEvent*)event);
}

void k_irigami__platform__virtualkeyboardwatcher_super_timer_event(void* self, void* event) {
    Kirigami__Platform__VirtualKeyboardWatcher_SuperTimerEvent((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QTimerEvent*)event);
}

void k_irigami__platform__virtualkeyboardwatcher_on_timer_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnTimerEvent((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

void k_irigami__platform__virtualkeyboardwatcher_child_event(void* self, void* event) {
    Kirigami__Platform__VirtualKeyboardWatcher_ChildEvent((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QChildEvent*)event);
}

void k_irigami__platform__virtualkeyboardwatcher_super_child_event(void* self, void* event) {
    Kirigami__Platform__VirtualKeyboardWatcher_SuperChildEvent((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QChildEvent*)event);
}

void k_irigami__platform__virtualkeyboardwatcher_on_child_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnChildEvent((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

void k_irigami__platform__virtualkeyboardwatcher_custom_event(void* self, void* event) {
    Kirigami__Platform__VirtualKeyboardWatcher_CustomEvent((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QEvent*)event);
}

void k_irigami__platform__virtualkeyboardwatcher_super_custom_event(void* self, void* event) {
    Kirigami__Platform__VirtualKeyboardWatcher_SuperCustomEvent((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QEvent*)event);
}

void k_irigami__platform__virtualkeyboardwatcher_on_custom_event(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnCustomEvent((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

void k_irigami__platform__virtualkeyboardwatcher_connect_notify(void* self, void* signal) {
    Kirigami__Platform__VirtualKeyboardWatcher_ConnectNotify((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__virtualkeyboardwatcher_super_connect_notify(void* self, void* signal) {
    Kirigami__Platform__VirtualKeyboardWatcher_SuperConnectNotify((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__virtualkeyboardwatcher_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnConnectNotify((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

void k_irigami__platform__virtualkeyboardwatcher_disconnect_notify(void* self, void* signal) {
    Kirigami__Platform__VirtualKeyboardWatcher_DisconnectNotify((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__virtualkeyboardwatcher_super_disconnect_notify(void* self, void* signal) {
    Kirigami__Platform__VirtualKeyboardWatcher_SuperDisconnectNotify((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__virtualkeyboardwatcher_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnDisconnectNotify((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

QObject* k_irigami__platform__virtualkeyboardwatcher_sender(void* self) {
    return Kirigami__Platform__VirtualKeyboardWatcher_Sender((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

QObject* k_irigami__platform__virtualkeyboardwatcher_super_sender(void* self) {
    return Kirigami__Platform__VirtualKeyboardWatcher_SuperSender((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

void k_irigami__platform__virtualkeyboardwatcher_on_sender(void* self, QObject* (*callback)()) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnSender((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__virtualkeyboardwatcher_sender_signal_index(void* self) {
    return Kirigami__Platform__VirtualKeyboardWatcher_SenderSignalIndex((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

int32_t k_irigami__platform__virtualkeyboardwatcher_super_sender_signal_index(void* self) {
    return Kirigami__Platform__VirtualKeyboardWatcher_SuperSenderSignalIndex((Kirigami__Platform__VirtualKeyboardWatcher*)self);
}

void k_irigami__platform__virtualkeyboardwatcher_on_sender_signal_index(void* self, int32_t (*callback)()) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnSenderSignalIndex((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

int32_t k_irigami__platform__virtualkeyboardwatcher_receivers(void* self, const char* signal) {
    return Kirigami__Platform__VirtualKeyboardWatcher_Receivers((Kirigami__Platform__VirtualKeyboardWatcher*)self, signal);
}

int32_t k_irigami__platform__virtualkeyboardwatcher_super_receivers(void* self, const char* signal) {
    return Kirigami__Platform__VirtualKeyboardWatcher_SuperReceivers((Kirigami__Platform__VirtualKeyboardWatcher*)self, signal);
}

void k_irigami__platform__virtualkeyboardwatcher_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnReceivers((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

bool k_irigami__platform__virtualkeyboardwatcher_is_signal_connected(void* self, void* signal) {
    return Kirigami__Platform__VirtualKeyboardWatcher_IsSignalConnected((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QMetaMethod*)signal);
}

bool k_irigami__platform__virtualkeyboardwatcher_super_is_signal_connected(void* self, void* signal) {
    return Kirigami__Platform__VirtualKeyboardWatcher_SuperIsSignalConnected((Kirigami__Platform__VirtualKeyboardWatcher*)self, (QMetaMethod*)signal);
}

void k_irigami__platform__virtualkeyboardwatcher_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    Kirigami__Platform__VirtualKeyboardWatcher_OnIsSignalConnected((Kirigami__Platform__VirtualKeyboardWatcher*)self, (intptr_t)callback);
}

void k_irigami__platform__virtualkeyboardwatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_irigami__platform__virtualkeyboardwatcher_delete(void* self) {
    Kirigami__Platform__VirtualKeyboardWatcher_Delete((Kirigami__Platform__VirtualKeyboardWatcher*)(self));
}
