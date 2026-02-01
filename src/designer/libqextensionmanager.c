#include "libextension.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqextensionmanager.hpp"
#include "libqextensionmanager.h"

QExtensionManager* q_extensionmanager_new() {
    return QExtensionManager_new();
}

QExtensionManager* q_extensionmanager_new2(void* parent) {
    return QExtensionManager_new2((QObject*)parent);
}

const QMetaObject* q_extensionmanager_meta_object(void* self) {
    return QExtensionManager_MetaObject((QExtensionManager*)self);
}

void q_extensionmanager_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QExtensionManager_OnMetaObject((QExtensionManager*)self, (intptr_t)callback);
}

const QMetaObject* q_extensionmanager_qbase_meta_object(void* self) {
    return QExtensionManager_QBaseMetaObject((QExtensionManager*)self);
}

void* q_extensionmanager_metacast(void* self, const char* param1) {
    return QExtensionManager_Metacast((QExtensionManager*)self, param1);
}

void q_extensionmanager_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QExtensionManager_OnMetacast((QExtensionManager*)self, (intptr_t)callback);
}

void* q_extensionmanager_qbase_metacast(void* self, const char* param1) {
    return QExtensionManager_QBaseMetacast((QExtensionManager*)self, param1);
}

int32_t q_extensionmanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QExtensionManager_Metacall((QExtensionManager*)self, param1, param2, param3);
}

void q_extensionmanager_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QExtensionManager_OnMetacall((QExtensionManager*)self, (intptr_t)callback);
}

int32_t q_extensionmanager_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QExtensionManager_QBaseMetacall((QExtensionManager*)self, param1, param2, param3);
}

const char* q_extensionmanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_extensionmanager_register_extensions(void* self, void* factory, const char* iid) {
    QExtensionManager_RegisterExtensions((QExtensionManager*)self, (QAbstractExtensionFactory*)factory, qstring(iid));
}

void q_extensionmanager_on_register_extensions(void* self, void (*callback)(void*, void*, const char*)) {
    QExtensionManager_OnRegisterExtensions((QExtensionManager*)self, (intptr_t)callback);
}

void q_extensionmanager_qbase_register_extensions(void* self, void* factory, const char* iid) {
    QExtensionManager_QBaseRegisterExtensions((QExtensionManager*)self, (QAbstractExtensionFactory*)factory, qstring(iid));
}

void q_extensionmanager_unregister_extensions(void* self, void* factory, const char* iid) {
    QExtensionManager_UnregisterExtensions((QExtensionManager*)self, (QAbstractExtensionFactory*)factory, qstring(iid));
}

void q_extensionmanager_on_unregister_extensions(void* self, void (*callback)(void*, void*, const char*)) {
    QExtensionManager_OnUnregisterExtensions((QExtensionManager*)self, (intptr_t)callback);
}

void q_extensionmanager_qbase_unregister_extensions(void* self, void* factory, const char* iid) {
    QExtensionManager_QBaseUnregisterExtensions((QExtensionManager*)self, (QAbstractExtensionFactory*)factory, qstring(iid));
}

QObject* q_extensionmanager_extension(void* self, void* object, const char* iid) {
    return QExtensionManager_Extension((QExtensionManager*)self, (QObject*)object, qstring(iid));
}

void q_extensionmanager_on_extension(void* self, QObject* (*callback)(void*, void*, const char*)) {
    QExtensionManager_OnExtension((QExtensionManager*)self, (intptr_t)callback);
}

QObject* q_extensionmanager_qbase_extension(void* self, void* object, const char* iid) {
    return QExtensionManager_QBaseExtension((QExtensionManager*)self, (QObject*)object, qstring(iid));
}

const char* q_extensionmanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_extensionmanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_extensionmanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_extensionmanager_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_extensionmanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_extensionmanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_extensionmanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_extensionmanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_extensionmanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_extensionmanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_extensionmanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_extensionmanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_extensionmanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_extensionmanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_extensionmanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_extensionmanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_extensionmanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_extensionmanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_extensionmanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_extensionmanager_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_extensionmanager_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_extensionmanager_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_extensionmanager_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_extensionmanager_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_extensionmanager_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_extensionmanager_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_extensionmanager_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_extensionmanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_extensionmanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_extensionmanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_extensionmanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_extensionmanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_extensionmanager_dynamic_property_names\n");
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

QBindingStorage* q_extensionmanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_extensionmanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_extensionmanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_extensionmanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_extensionmanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_extensionmanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_extensionmanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_extensionmanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_extensionmanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_extensionmanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_extensionmanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_extensionmanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_extensionmanager_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_extensionmanager_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_extensionmanager_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_extensionmanager_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_extensionmanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_extensionmanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_extensionmanager_operator_assign(void* self, void* param1) {
    QAbstractExtensionManager_OperatorAssign((QAbstractExtensionManager*)self, (QAbstractExtensionManager*)param1);
}

bool q_extensionmanager_event(void* self, void* event) {
    return QExtensionManager_Event((QExtensionManager*)self, (QEvent*)event);
}

bool q_extensionmanager_qbase_event(void* self, void* event) {
    return QExtensionManager_QBaseEvent((QExtensionManager*)self, (QEvent*)event);
}

void q_extensionmanager_on_event(void* self, bool (*callback)(void*, void*)) {
    QExtensionManager_OnEvent((QExtensionManager*)self, (intptr_t)callback);
}

bool q_extensionmanager_event_filter(void* self, void* watched, void* event) {
    return QExtensionManager_EventFilter((QExtensionManager*)self, (QObject*)watched, (QEvent*)event);
}

bool q_extensionmanager_qbase_event_filter(void* self, void* watched, void* event) {
    return QExtensionManager_QBaseEventFilter((QExtensionManager*)self, (QObject*)watched, (QEvent*)event);
}

void q_extensionmanager_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QExtensionManager_OnEventFilter((QExtensionManager*)self, (intptr_t)callback);
}

void q_extensionmanager_timer_event(void* self, void* event) {
    QExtensionManager_TimerEvent((QExtensionManager*)self, (QTimerEvent*)event);
}

void q_extensionmanager_qbase_timer_event(void* self, void* event) {
    QExtensionManager_QBaseTimerEvent((QExtensionManager*)self, (QTimerEvent*)event);
}

void q_extensionmanager_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QExtensionManager_OnTimerEvent((QExtensionManager*)self, (intptr_t)callback);
}

void q_extensionmanager_child_event(void* self, void* event) {
    QExtensionManager_ChildEvent((QExtensionManager*)self, (QChildEvent*)event);
}

void q_extensionmanager_qbase_child_event(void* self, void* event) {
    QExtensionManager_QBaseChildEvent((QExtensionManager*)self, (QChildEvent*)event);
}

void q_extensionmanager_on_child_event(void* self, void (*callback)(void*, void*)) {
    QExtensionManager_OnChildEvent((QExtensionManager*)self, (intptr_t)callback);
}

void q_extensionmanager_custom_event(void* self, void* event) {
    QExtensionManager_CustomEvent((QExtensionManager*)self, (QEvent*)event);
}

void q_extensionmanager_qbase_custom_event(void* self, void* event) {
    QExtensionManager_QBaseCustomEvent((QExtensionManager*)self, (QEvent*)event);
}

void q_extensionmanager_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QExtensionManager_OnCustomEvent((QExtensionManager*)self, (intptr_t)callback);
}

void q_extensionmanager_connect_notify(void* self, void* signal) {
    QExtensionManager_ConnectNotify((QExtensionManager*)self, (QMetaMethod*)signal);
}

void q_extensionmanager_qbase_connect_notify(void* self, void* signal) {
    QExtensionManager_QBaseConnectNotify((QExtensionManager*)self, (QMetaMethod*)signal);
}

void q_extensionmanager_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QExtensionManager_OnConnectNotify((QExtensionManager*)self, (intptr_t)callback);
}

void q_extensionmanager_disconnect_notify(void* self, void* signal) {
    QExtensionManager_DisconnectNotify((QExtensionManager*)self, (QMetaMethod*)signal);
}

void q_extensionmanager_qbase_disconnect_notify(void* self, void* signal) {
    QExtensionManager_QBaseDisconnectNotify((QExtensionManager*)self, (QMetaMethod*)signal);
}

void q_extensionmanager_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QExtensionManager_OnDisconnectNotify((QExtensionManager*)self, (intptr_t)callback);
}

QObject* q_extensionmanager_sender(void* self) {
    return QExtensionManager_Sender((QExtensionManager*)self);
}

QObject* q_extensionmanager_qbase_sender(void* self) {
    return QExtensionManager_QBaseSender((QExtensionManager*)self);
}

void q_extensionmanager_on_sender(void* self, QObject* (*callback)()) {
    QExtensionManager_OnSender((QExtensionManager*)self, (intptr_t)callback);
}

int32_t q_extensionmanager_sender_signal_index(void* self) {
    return QExtensionManager_SenderSignalIndex((QExtensionManager*)self);
}

int32_t q_extensionmanager_qbase_sender_signal_index(void* self) {
    return QExtensionManager_QBaseSenderSignalIndex((QExtensionManager*)self);
}

void q_extensionmanager_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QExtensionManager_OnSenderSignalIndex((QExtensionManager*)self, (intptr_t)callback);
}

int32_t q_extensionmanager_receivers(void* self, const char* signal) {
    return QExtensionManager_Receivers((QExtensionManager*)self, signal);
}

int32_t q_extensionmanager_qbase_receivers(void* self, const char* signal) {
    return QExtensionManager_QBaseReceivers((QExtensionManager*)self, signal);
}

void q_extensionmanager_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QExtensionManager_OnReceivers((QExtensionManager*)self, (intptr_t)callback);
}

bool q_extensionmanager_is_signal_connected(void* self, void* signal) {
    return QExtensionManager_IsSignalConnected((QExtensionManager*)self, (QMetaMethod*)signal);
}

bool q_extensionmanager_qbase_is_signal_connected(void* self, void* signal) {
    return QExtensionManager_QBaseIsSignalConnected((QExtensionManager*)self, (QMetaMethod*)signal);
}

void q_extensionmanager_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QExtensionManager_OnIsSignalConnected((QExtensionManager*)self, (intptr_t)callback);
}

void q_extensionmanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_extensionmanager_delete(void* self) {
    QExtensionManager_Delete((QExtensionManager*)(self));
}
