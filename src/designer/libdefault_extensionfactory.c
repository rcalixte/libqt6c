#include "libextension.hpp"
#include "../libqcoreevent.hpp"
#include "libqextensionmanager.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libdefault_extensionfactory.hpp"
#include "libdefault_extensionfactory.h"

QExtensionFactory* q_extensionfactory_new() {
    return QExtensionFactory_new();
}

QExtensionFactory* q_extensionfactory_new2(void* parent) {
    return QExtensionFactory_new2((QExtensionManager*)parent);
}

const QMetaObject* q_extensionfactory_meta_object(void* self) {
    return QExtensionFactory_MetaObject((QExtensionFactory*)self);
}

void q_extensionfactory_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QExtensionFactory_OnMetaObject((QExtensionFactory*)self, (intptr_t)callback);
}

const QMetaObject* q_extensionfactory_qbase_meta_object(void* self) {
    return QExtensionFactory_QBaseMetaObject((QExtensionFactory*)self);
}

void* q_extensionfactory_metacast(void* self, const char* param1) {
    return QExtensionFactory_Metacast((QExtensionFactory*)self, param1);
}

void q_extensionfactory_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QExtensionFactory_OnMetacast((QExtensionFactory*)self, (intptr_t)callback);
}

void* q_extensionfactory_qbase_metacast(void* self, const char* param1) {
    return QExtensionFactory_QBaseMetacast((QExtensionFactory*)self, param1);
}

int32_t q_extensionfactory_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QExtensionFactory_Metacall((QExtensionFactory*)self, param1, param2, param3);
}

void q_extensionfactory_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QExtensionFactory_OnMetacall((QExtensionFactory*)self, (intptr_t)callback);
}

int32_t q_extensionfactory_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QExtensionFactory_QBaseMetacall((QExtensionFactory*)self, param1, param2, param3);
}

const char* q_extensionfactory_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QObject* q_extensionfactory_extension(void* self, void* object, const char* iid) {
    return QExtensionFactory_Extension((QExtensionFactory*)self, (QObject*)object, qstring(iid));
}

void q_extensionfactory_on_extension(void* self, QObject* (*callback)(void*, void*, const char*)) {
    QExtensionFactory_OnExtension((QExtensionFactory*)self, (intptr_t)callback);
}

QObject* q_extensionfactory_qbase_extension(void* self, void* object, const char* iid) {
    return QExtensionFactory_QBaseExtension((QExtensionFactory*)self, (QObject*)object, qstring(iid));
}

QExtensionManager* q_extensionfactory_extension_manager(void* self) {
    return QExtensionFactory_ExtensionManager((QExtensionFactory*)self);
}

QObject* q_extensionfactory_create_extension(void* self, void* object, const char* iid, void* parent) {
    return QExtensionFactory_CreateExtension((QExtensionFactory*)self, (QObject*)object, qstring(iid), (QObject*)parent);
}

void q_extensionfactory_on_create_extension(void* self, QObject* (*callback)(void*, void*, const char*, void*)) {
    QExtensionFactory_OnCreateExtension((QExtensionFactory*)self, (intptr_t)callback);
}

QObject* q_extensionfactory_qbase_create_extension(void* self, void* object, const char* iid, void* parent) {
    return QExtensionFactory_QBaseCreateExtension((QExtensionFactory*)self, (QObject*)object, qstring(iid), (QObject*)parent);
}

const char* q_extensionfactory_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_extensionfactory_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_extensionfactory_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_extensionfactory_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_extensionfactory_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_extensionfactory_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_extensionfactory_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_extensionfactory_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_extensionfactory_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_extensionfactory_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_extensionfactory_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_extensionfactory_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_extensionfactory_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_extensionfactory_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_extensionfactory_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_extensionfactory_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_extensionfactory_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_extensionfactory_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_extensionfactory_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_extensionfactory_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_extensionfactory_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_extensionfactory_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_extensionfactory_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_extensionfactory_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_extensionfactory_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_extensionfactory_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_extensionfactory_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_extensionfactory_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_extensionfactory_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_extensionfactory_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_extensionfactory_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_extensionfactory_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_extensionfactory_dynamic_property_names\n");
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

QBindingStorage* q_extensionfactory_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_extensionfactory_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_extensionfactory_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_extensionfactory_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_extensionfactory_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_extensionfactory_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_extensionfactory_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_extensionfactory_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_extensionfactory_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_extensionfactory_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_extensionfactory_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_extensionfactory_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_extensionfactory_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_extensionfactory_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_extensionfactory_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_extensionfactory_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_extensionfactory_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_extensionfactory_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void q_extensionfactory_operator_assign(void* self, void* param1) {
    QAbstractExtensionFactory_OperatorAssign((QAbstractExtensionFactory*)self, (QAbstractExtensionFactory*)param1);
}

bool q_extensionfactory_event(void* self, void* event) {
    return QExtensionFactory_Event((QExtensionFactory*)self, (QEvent*)event);
}

bool q_extensionfactory_qbase_event(void* self, void* event) {
    return QExtensionFactory_QBaseEvent((QExtensionFactory*)self, (QEvent*)event);
}

void q_extensionfactory_on_event(void* self, bool (*callback)(void*, void*)) {
    QExtensionFactory_OnEvent((QExtensionFactory*)self, (intptr_t)callback);
}

bool q_extensionfactory_event_filter(void* self, void* watched, void* event) {
    return QExtensionFactory_EventFilter((QExtensionFactory*)self, (QObject*)watched, (QEvent*)event);
}

bool q_extensionfactory_qbase_event_filter(void* self, void* watched, void* event) {
    return QExtensionFactory_QBaseEventFilter((QExtensionFactory*)self, (QObject*)watched, (QEvent*)event);
}

void q_extensionfactory_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QExtensionFactory_OnEventFilter((QExtensionFactory*)self, (intptr_t)callback);
}

void q_extensionfactory_timer_event(void* self, void* event) {
    QExtensionFactory_TimerEvent((QExtensionFactory*)self, (QTimerEvent*)event);
}

void q_extensionfactory_qbase_timer_event(void* self, void* event) {
    QExtensionFactory_QBaseTimerEvent((QExtensionFactory*)self, (QTimerEvent*)event);
}

void q_extensionfactory_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QExtensionFactory_OnTimerEvent((QExtensionFactory*)self, (intptr_t)callback);
}

void q_extensionfactory_child_event(void* self, void* event) {
    QExtensionFactory_ChildEvent((QExtensionFactory*)self, (QChildEvent*)event);
}

void q_extensionfactory_qbase_child_event(void* self, void* event) {
    QExtensionFactory_QBaseChildEvent((QExtensionFactory*)self, (QChildEvent*)event);
}

void q_extensionfactory_on_child_event(void* self, void (*callback)(void*, void*)) {
    QExtensionFactory_OnChildEvent((QExtensionFactory*)self, (intptr_t)callback);
}

void q_extensionfactory_custom_event(void* self, void* event) {
    QExtensionFactory_CustomEvent((QExtensionFactory*)self, (QEvent*)event);
}

void q_extensionfactory_qbase_custom_event(void* self, void* event) {
    QExtensionFactory_QBaseCustomEvent((QExtensionFactory*)self, (QEvent*)event);
}

void q_extensionfactory_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QExtensionFactory_OnCustomEvent((QExtensionFactory*)self, (intptr_t)callback);
}

void q_extensionfactory_connect_notify(void* self, void* signal) {
    QExtensionFactory_ConnectNotify((QExtensionFactory*)self, (QMetaMethod*)signal);
}

void q_extensionfactory_qbase_connect_notify(void* self, void* signal) {
    QExtensionFactory_QBaseConnectNotify((QExtensionFactory*)self, (QMetaMethod*)signal);
}

void q_extensionfactory_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QExtensionFactory_OnConnectNotify((QExtensionFactory*)self, (intptr_t)callback);
}

void q_extensionfactory_disconnect_notify(void* self, void* signal) {
    QExtensionFactory_DisconnectNotify((QExtensionFactory*)self, (QMetaMethod*)signal);
}

void q_extensionfactory_qbase_disconnect_notify(void* self, void* signal) {
    QExtensionFactory_QBaseDisconnectNotify((QExtensionFactory*)self, (QMetaMethod*)signal);
}

void q_extensionfactory_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QExtensionFactory_OnDisconnectNotify((QExtensionFactory*)self, (intptr_t)callback);
}

QObject* q_extensionfactory_sender(void* self) {
    return QExtensionFactory_Sender((QExtensionFactory*)self);
}

QObject* q_extensionfactory_qbase_sender(void* self) {
    return QExtensionFactory_QBaseSender((QExtensionFactory*)self);
}

void q_extensionfactory_on_sender(void* self, QObject* (*callback)()) {
    QExtensionFactory_OnSender((QExtensionFactory*)self, (intptr_t)callback);
}

int32_t q_extensionfactory_sender_signal_index(void* self) {
    return QExtensionFactory_SenderSignalIndex((QExtensionFactory*)self);
}

int32_t q_extensionfactory_qbase_sender_signal_index(void* self) {
    return QExtensionFactory_QBaseSenderSignalIndex((QExtensionFactory*)self);
}

void q_extensionfactory_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QExtensionFactory_OnSenderSignalIndex((QExtensionFactory*)self, (intptr_t)callback);
}

int32_t q_extensionfactory_receivers(void* self, const char* signal) {
    return QExtensionFactory_Receivers((QExtensionFactory*)self, signal);
}

int32_t q_extensionfactory_qbase_receivers(void* self, const char* signal) {
    return QExtensionFactory_QBaseReceivers((QExtensionFactory*)self, signal);
}

void q_extensionfactory_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QExtensionFactory_OnReceivers((QExtensionFactory*)self, (intptr_t)callback);
}

bool q_extensionfactory_is_signal_connected(void* self, void* signal) {
    return QExtensionFactory_IsSignalConnected((QExtensionFactory*)self, (QMetaMethod*)signal);
}

bool q_extensionfactory_qbase_is_signal_connected(void* self, void* signal) {
    return QExtensionFactory_QBaseIsSignalConnected((QExtensionFactory*)self, (QMetaMethod*)signal);
}

void q_extensionfactory_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QExtensionFactory_OnIsSignalConnected((QExtensionFactory*)self, (intptr_t)callback);
}

void q_extensionfactory_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_extensionfactory_delete(void* self) {
    QExtensionFactory_Delete((QExtensionFactory*)(self));
}
