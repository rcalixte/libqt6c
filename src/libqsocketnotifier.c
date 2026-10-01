#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqsocketnotifier.hpp"
#include "libqsocketnotifier.h"

QSocketNotifier* q_socketnotifier_new(int32_t param1) {
    return QSocketNotifier_New(param1);
}

QSocketNotifier* q_socketnotifier_new2(intptr_t socket, int32_t param2) {
    return QSocketNotifier_New2(socket, param2);
}

QSocketNotifier* q_socketnotifier_new3(int32_t param1, void* parent) {
    return QSocketNotifier_New3(param1, (QObject*)parent);
}

QSocketNotifier* q_socketnotifier_new4(intptr_t socket, int32_t param2, void* parent) {
    return QSocketNotifier_New4(socket, param2, (QObject*)parent);
}

const QMetaObject* q_socketnotifier_meta_object(const void* self) {
    return QSocketNotifier_MetaObject((QSocketNotifier*)self);
}

void q_socketnotifier_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QSocketNotifier_OnMetaObject((QSocketNotifier*)self, (intptr_t)callback);
}

const QMetaObject* q_socketnotifier_super_meta_object(const void* self) {
    return QSocketNotifier_SuperMetaObject((QSocketNotifier*)self);
}

void* q_socketnotifier_metacast(void* self, const char* param1) {
    return QSocketNotifier_Metacast((QSocketNotifier*)self, param1);
}

void q_socketnotifier_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QSocketNotifier_OnMetacast((QSocketNotifier*)self, (intptr_t)callback);
}

void* q_socketnotifier_super_metacast(void* self, const char* param1) {
    return QSocketNotifier_SuperMetacast((QSocketNotifier*)self, param1);
}

int32_t q_socketnotifier_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSocketNotifier_Metacall((QSocketNotifier*)self, param1, param2, param3);
}

void q_socketnotifier_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSocketNotifier_OnMetacall((QSocketNotifier*)self, (intptr_t)callback);
}

int32_t q_socketnotifier_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSocketNotifier_SuperMetacall((QSocketNotifier*)self, param1, param2, param3);
}

const char* q_socketnotifier_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_socketnotifier_set_socket(void* self, intptr_t socket) {
    QSocketNotifier_SetSocket((QSocketNotifier*)self, socket);
}

intptr_t q_socketnotifier_socket(const void* self) {
    return QSocketNotifier_Socket((QSocketNotifier*)self);
}

int32_t q_socketnotifier_type(const void* self) {
    return QSocketNotifier_Type((QSocketNotifier*)self);
}

bool q_socketnotifier_is_valid(const void* self) {
    return QSocketNotifier_IsValid((QSocketNotifier*)self);
}

bool q_socketnotifier_is_enabled(const void* self) {
    return QSocketNotifier_IsEnabled((QSocketNotifier*)self);
}

void q_socketnotifier_set_enabled(void* self, bool enabled) {
    QSocketNotifier_SetEnabled((QSocketNotifier*)self, enabled);
}

bool q_socketnotifier_event(void* self, void* param1) {
    return QSocketNotifier_Event((QSocketNotifier*)self, (QEvent*)param1);
}

void q_socketnotifier_on_event(void* self, bool (*callback)(void*, void*)) {
    QSocketNotifier_OnEvent((QSocketNotifier*)self, (intptr_t)callback);
}

bool q_socketnotifier_super_event(void* self, void* param1) {
    return QSocketNotifier_SuperEvent((QSocketNotifier*)self, (QEvent*)param1);
}

const char* q_socketnotifier_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_socketnotifier_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_socketnotifier_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_socketnotifier_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_socketnotifier_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_socketnotifier_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_socketnotifier_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_socketnotifier_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_socketnotifier_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_socketnotifier_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_socketnotifier_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_socketnotifier_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_socketnotifier_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_socketnotifier_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_socketnotifier_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_socketnotifier_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_socketnotifier_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_socketnotifier_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_socketnotifier_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_socketnotifier_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_socketnotifier_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_socketnotifier_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_socketnotifier_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_socketnotifier_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_socketnotifier_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_socketnotifier_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_socketnotifier_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_socketnotifier_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_socketnotifier_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_socketnotifier_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_socketnotifier_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_socketnotifier_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_socketnotifier_dynamic_property_names\n");
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

QBindingStorage* q_socketnotifier_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_socketnotifier_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_socketnotifier_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_socketnotifier_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_socketnotifier_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_socketnotifier_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_socketnotifier_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_socketnotifier_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_socketnotifier_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_socketnotifier_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_socketnotifier_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_socketnotifier_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_socketnotifier_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_socketnotifier_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_socketnotifier_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_socketnotifier_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_socketnotifier_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_socketnotifier_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_socketnotifier_event_filter(void* self, void* watched, void* event) {
    return QSocketNotifier_EventFilter((QSocketNotifier*)self, (QObject*)watched, (QEvent*)event);
}

bool q_socketnotifier_super_event_filter(void* self, void* watched, void* event) {
    return QSocketNotifier_SuperEventFilter((QSocketNotifier*)self, (QObject*)watched, (QEvent*)event);
}

void q_socketnotifier_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSocketNotifier_OnEventFilter((QSocketNotifier*)self, (intptr_t)callback);
}

void q_socketnotifier_timer_event(void* self, void* event) {
    QSocketNotifier_TimerEvent((QSocketNotifier*)self, (QTimerEvent*)event);
}

void q_socketnotifier_super_timer_event(void* self, void* event) {
    QSocketNotifier_SuperTimerEvent((QSocketNotifier*)self, (QTimerEvent*)event);
}

void q_socketnotifier_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSocketNotifier_OnTimerEvent((QSocketNotifier*)self, (intptr_t)callback);
}

void q_socketnotifier_child_event(void* self, void* event) {
    QSocketNotifier_ChildEvent((QSocketNotifier*)self, (QChildEvent*)event);
}

void q_socketnotifier_super_child_event(void* self, void* event) {
    QSocketNotifier_SuperChildEvent((QSocketNotifier*)self, (QChildEvent*)event);
}

void q_socketnotifier_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSocketNotifier_OnChildEvent((QSocketNotifier*)self, (intptr_t)callback);
}

void q_socketnotifier_custom_event(void* self, void* event) {
    QSocketNotifier_CustomEvent((QSocketNotifier*)self, (QEvent*)event);
}

void q_socketnotifier_super_custom_event(void* self, void* event) {
    QSocketNotifier_SuperCustomEvent((QSocketNotifier*)self, (QEvent*)event);
}

void q_socketnotifier_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSocketNotifier_OnCustomEvent((QSocketNotifier*)self, (intptr_t)callback);
}

void q_socketnotifier_connect_notify(void* self, const void* signal) {
    QSocketNotifier_ConnectNotify((QSocketNotifier*)self, (QMetaMethod*)signal);
}

void q_socketnotifier_super_connect_notify(void* self, const void* signal) {
    QSocketNotifier_SuperConnectNotify((QSocketNotifier*)self, (QMetaMethod*)signal);
}

void q_socketnotifier_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QSocketNotifier_OnConnectNotify((QSocketNotifier*)self, (intptr_t)callback);
}

void q_socketnotifier_disconnect_notify(void* self, const void* signal) {
    QSocketNotifier_DisconnectNotify((QSocketNotifier*)self, (QMetaMethod*)signal);
}

void q_socketnotifier_super_disconnect_notify(void* self, const void* signal) {
    QSocketNotifier_SuperDisconnectNotify((QSocketNotifier*)self, (QMetaMethod*)signal);
}

void q_socketnotifier_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QSocketNotifier_OnDisconnectNotify((QSocketNotifier*)self, (intptr_t)callback);
}

QObject* q_socketnotifier_sender(const void* self) {
    return QSocketNotifier_Sender((QSocketNotifier*)self);
}

int32_t q_socketnotifier_sender_signal_index(const void* self) {
    return QSocketNotifier_SenderSignalIndex((QSocketNotifier*)self);
}

int32_t q_socketnotifier_receivers(const void* self, const char* signal) {
    return QSocketNotifier_Receivers((QSocketNotifier*)self, signal);
}

bool q_socketnotifier_is_signal_connected(const void* self, const void* signal) {
    return QSocketNotifier_IsSignalConnected((QSocketNotifier*)self, (QMetaMethod*)signal);
}

void q_socketnotifier_on_activated(void* self, void (*callback)(void*, void*, int32_t)) {
    QSocketNotifier_Connect_Activated((QSocketNotifier*)self, (intptr_t)callback);
}

void q_socketnotifier_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_socketnotifier_delete(void* self) {
    QSocketNotifier_Delete((QSocketNotifier*)(self));
}

QSocketDescriptor* q_socketdescriptor_new(const void* other) {
    return QSocketDescriptor_New((QSocketDescriptor*)other);
}

QSocketDescriptor* q_socketdescriptor_new2(void* other) {
    return QSocketDescriptor_New2((QSocketDescriptor*)other);
}

QSocketDescriptor* q_socketdescriptor_new3() {
    return QSocketDescriptor_New3();
}

QSocketDescriptor* q_socketdescriptor_new4(const void* param1) {
    return QSocketDescriptor_New4((QSocketDescriptor*)param1);
}

#if defined(__linux__) && defined(__FreeBSD__)
QSocketDescriptor* q_socketdescriptor_new5(int descriptor) {
    return QSocketDescriptor_New5(descriptor);
}
#endif

void q_socketdescriptor_copy_assign(void* self, void* other) {
    QSocketDescriptor_CopyAssign((QSocketDescriptor*)self, (QSocketDescriptor*)other);
}

void q_socketdescriptor_move_assign(void* self, void* other) {
    QSocketDescriptor_MoveAssign((QSocketDescriptor*)self, (QSocketDescriptor*)other);
}

#if defined(__linux__) && defined(__FreeBSD__)
int32_t q_socketdescriptor_to_int(const void* self) {
    return QSocketDescriptor_ToInt((QSocketDescriptor*)self);
}
#endif

bool q_socketdescriptor_is_valid(const void* self) {
    return QSocketDescriptor_IsValid((QSocketDescriptor*)self);
}

void q_socketdescriptor_delete(void* self) {
    QSocketDescriptor_Delete((QSocketDescriptor*)(self));
}
