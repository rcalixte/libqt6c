#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqtipccommon.hpp"
#include "libqobject.hpp"
#include "libqsharedmemory.hpp"
#include "libqsharedmemory.h"

QSharedMemory* q_sharedmemory_new() {
    return QSharedMemory_new();
}

QSharedMemory* q_sharedmemory_new2(void* key) {
    return QSharedMemory_new2((QNativeIpcKey*)key);
}

QSharedMemory* q_sharedmemory_new3(const char* key) {
    return QSharedMemory_new3(qstring(key));
}

QSharedMemory* q_sharedmemory_new4(void* parent) {
    return QSharedMemory_new4((QObject*)parent);
}

QSharedMemory* q_sharedmemory_new5(void* key, void* parent) {
    return QSharedMemory_new5((QNativeIpcKey*)key, (QObject*)parent);
}

QSharedMemory* q_sharedmemory_new6(const char* key, void* parent) {
    return QSharedMemory_new6(qstring(key), (QObject*)parent);
}

const QMetaObject* q_sharedmemory_meta_object(void* self) {
    return QSharedMemory_MetaObject((QSharedMemory*)self);
}

void* q_sharedmemory_metacast(void* self, const char* param1) {
    return QSharedMemory_Metacast((QSharedMemory*)self, param1);
}

int32_t q_sharedmemory_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSharedMemory_Metacall((QSharedMemory*)self, param1, param2, param3);
}

void q_sharedmemory_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QSharedMemory_OnMetacall((QSharedMemory*)self, (intptr_t)slot);
}

int32_t q_sharedmemory_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QSharedMemory_QBaseMetacall((QSharedMemory*)self, param1, param2, param3);
}

const char* q_sharedmemory_tr(const char* s) {
    libqt_string _str = QSharedMemory_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sharedmemory_set_key(void* self, const char* key) {
    QSharedMemory_SetKey((QSharedMemory*)self, qstring(key));
}

const char* q_sharedmemory_key(void* self) {
    libqt_string _str = QSharedMemory_Key((QSharedMemory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sharedmemory_set_native_key(void* self, void* key) {
    QSharedMemory_SetNativeKey((QSharedMemory*)self, (QNativeIpcKey*)key);
}

void q_sharedmemory_set_native_key2(void* self, const char* key) {
    QSharedMemory_SetNativeKey2((QSharedMemory*)self, qstring(key));
}

const char* q_sharedmemory_native_key(void* self) {
    libqt_string _str = QSharedMemory_NativeKey((QSharedMemory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QNativeIpcKey* q_sharedmemory_native_ipc_key(void* self) {
    return QSharedMemory_NativeIpcKey((QSharedMemory*)self);
}

bool q_sharedmemory_create(void* self, int64_t size) {
    return QSharedMemory_Create((QSharedMemory*)self, size);
}

int64_t q_sharedmemory_size(void* self) {
    return QSharedMemory_Size((QSharedMemory*)self);
}

bool q_sharedmemory_attach(void* self) {
    return QSharedMemory_Attach((QSharedMemory*)self);
}

bool q_sharedmemory_is_attached(void* self) {
    return QSharedMemory_IsAttached((QSharedMemory*)self);
}

bool q_sharedmemory_detach(void* self) {
    return QSharedMemory_Detach((QSharedMemory*)self);
}

void* q_sharedmemory_data(void* self) {
    return QSharedMemory_Data((QSharedMemory*)self);
}

const void* q_sharedmemory_const_data(void* self) {
    return QSharedMemory_ConstData((QSharedMemory*)self);
}

const void* q_sharedmemory_data2(void* self) {
    return QSharedMemory_Data2((QSharedMemory*)self);
}

bool q_sharedmemory_lock(void* self) {
    return QSharedMemory_Lock((QSharedMemory*)self);
}

bool q_sharedmemory_unlock(void* self) {
    return QSharedMemory_Unlock((QSharedMemory*)self);
}

int64_t q_sharedmemory_error(void* self) {
    return QSharedMemory_Error((QSharedMemory*)self);
}

const char* q_sharedmemory_error_string(void* self) {
    libqt_string _str = QSharedMemory_ErrorString((QSharedMemory*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sharedmemory_is_key_type_supported(int64_t typeVal) {
    return QSharedMemory_IsKeyTypeSupported(typeVal);
}

QNativeIpcKey* q_sharedmemory_platform_safe_key(const char* key) {
    return QSharedMemory_PlatformSafeKey(qstring(key));
}

QNativeIpcKey* q_sharedmemory_legacy_native_key(const char* key) {
    return QSharedMemory_LegacyNativeKey(qstring(key));
}

const char* q_sharedmemory_tr2(const char* s, const char* c) {
    libqt_string _str = QSharedMemory_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_sharedmemory_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSharedMemory_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sharedmemory_set_native_key22(void* self, const char* key, int64_t typeVal) {
    QSharedMemory_SetNativeKey22((QSharedMemory*)self, qstring(key), typeVal);
}

bool q_sharedmemory_create2(void* self, int64_t size, int64_t mode) {
    return QSharedMemory_Create2((QSharedMemory*)self, size, mode);
}

bool q_sharedmemory_attach1(void* self, int64_t mode) {
    return QSharedMemory_Attach1((QSharedMemory*)self, mode);
}

QNativeIpcKey* q_sharedmemory_platform_safe_key2(const char* key, int64_t typeVal) {
    return QSharedMemory_PlatformSafeKey2(qstring(key), typeVal);
}

QNativeIpcKey* q_sharedmemory_legacy_native_key2(const char* key, int64_t typeVal) {
    return QSharedMemory_LegacyNativeKey2(qstring(key), typeVal);
}

const char* q_sharedmemory_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sharedmemory_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_sharedmemory_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_sharedmemory_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_sharedmemory_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_sharedmemory_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_sharedmemory_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_sharedmemory_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_sharedmemory_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_sharedmemory_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_sharedmemory_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_sharedmemory_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_sharedmemory_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_sharedmemory_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_sharedmemory_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_sharedmemory_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_sharedmemory_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_sharedmemory_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_sharedmemory_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_sharedmemory_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_sharedmemory_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_sharedmemory_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_sharedmemory_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_sharedmemory_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_sharedmemory_dynamic_property_names(void* self) {
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
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_sharedmemory_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_sharedmemory_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_sharedmemory_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_sharedmemory_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_sharedmemory_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_sharedmemory_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_sharedmemory_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_sharedmemory_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_sharedmemory_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_sharedmemory_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_sharedmemory_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_sharedmemory_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_sharedmemory_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_sharedmemory_event(void* self, void* event) {
    return QSharedMemory_Event((QSharedMemory*)self, (QEvent*)event);
}

bool q_sharedmemory_qbase_event(void* self, void* event) {
    return QSharedMemory_QBaseEvent((QSharedMemory*)self, (QEvent*)event);
}

void q_sharedmemory_on_event(void* self, bool (*slot)(void*, void*)) {
    QSharedMemory_OnEvent((QSharedMemory*)self, (intptr_t)slot);
}

bool q_sharedmemory_event_filter(void* self, void* watched, void* event) {
    return QSharedMemory_EventFilter((QSharedMemory*)self, (QObject*)watched, (QEvent*)event);
}

bool q_sharedmemory_qbase_event_filter(void* self, void* watched, void* event) {
    return QSharedMemory_QBaseEventFilter((QSharedMemory*)self, (QObject*)watched, (QEvent*)event);
}

void q_sharedmemory_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QSharedMemory_OnEventFilter((QSharedMemory*)self, (intptr_t)slot);
}

void q_sharedmemory_timer_event(void* self, void* event) {
    QSharedMemory_TimerEvent((QSharedMemory*)self, (QTimerEvent*)event);
}

void q_sharedmemory_qbase_timer_event(void* self, void* event) {
    QSharedMemory_QBaseTimerEvent((QSharedMemory*)self, (QTimerEvent*)event);
}

void q_sharedmemory_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QSharedMemory_OnTimerEvent((QSharedMemory*)self, (intptr_t)slot);
}

void q_sharedmemory_child_event(void* self, void* event) {
    QSharedMemory_ChildEvent((QSharedMemory*)self, (QChildEvent*)event);
}

void q_sharedmemory_qbase_child_event(void* self, void* event) {
    QSharedMemory_QBaseChildEvent((QSharedMemory*)self, (QChildEvent*)event);
}

void q_sharedmemory_on_child_event(void* self, void (*slot)(void*, void*)) {
    QSharedMemory_OnChildEvent((QSharedMemory*)self, (intptr_t)slot);
}

void q_sharedmemory_custom_event(void* self, void* event) {
    QSharedMemory_CustomEvent((QSharedMemory*)self, (QEvent*)event);
}

void q_sharedmemory_qbase_custom_event(void* self, void* event) {
    QSharedMemory_QBaseCustomEvent((QSharedMemory*)self, (QEvent*)event);
}

void q_sharedmemory_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QSharedMemory_OnCustomEvent((QSharedMemory*)self, (intptr_t)slot);
}

void q_sharedmemory_connect_notify(void* self, void* signal) {
    QSharedMemory_ConnectNotify((QSharedMemory*)self, (QMetaMethod*)signal);
}

void q_sharedmemory_qbase_connect_notify(void* self, void* signal) {
    QSharedMemory_QBaseConnectNotify((QSharedMemory*)self, (QMetaMethod*)signal);
}

void q_sharedmemory_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QSharedMemory_OnConnectNotify((QSharedMemory*)self, (intptr_t)slot);
}

void q_sharedmemory_disconnect_notify(void* self, void* signal) {
    QSharedMemory_DisconnectNotify((QSharedMemory*)self, (QMetaMethod*)signal);
}

void q_sharedmemory_qbase_disconnect_notify(void* self, void* signal) {
    QSharedMemory_QBaseDisconnectNotify((QSharedMemory*)self, (QMetaMethod*)signal);
}

void q_sharedmemory_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QSharedMemory_OnDisconnectNotify((QSharedMemory*)self, (intptr_t)slot);
}

QObject* q_sharedmemory_sender(void* self) {
    return QSharedMemory_Sender((QSharedMemory*)self);
}

QObject* q_sharedmemory_qbase_sender(void* self) {
    return QSharedMemory_QBaseSender((QSharedMemory*)self);
}

void q_sharedmemory_on_sender(void* self, QObject* (*slot)()) {
    QSharedMemory_OnSender((QSharedMemory*)self, (intptr_t)slot);
}

int32_t q_sharedmemory_sender_signal_index(void* self) {
    return QSharedMemory_SenderSignalIndex((QSharedMemory*)self);
}

int32_t q_sharedmemory_qbase_sender_signal_index(void* self) {
    return QSharedMemory_QBaseSenderSignalIndex((QSharedMemory*)self);
}

void q_sharedmemory_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QSharedMemory_OnSenderSignalIndex((QSharedMemory*)self, (intptr_t)slot);
}

int32_t q_sharedmemory_receivers(void* self, const char* signal) {
    return QSharedMemory_Receivers((QSharedMemory*)self, signal);
}

int32_t q_sharedmemory_qbase_receivers(void* self, const char* signal) {
    return QSharedMemory_QBaseReceivers((QSharedMemory*)self, signal);
}

void q_sharedmemory_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QSharedMemory_OnReceivers((QSharedMemory*)self, (intptr_t)slot);
}

bool q_sharedmemory_is_signal_connected(void* self, void* signal) {
    return QSharedMemory_IsSignalConnected((QSharedMemory*)self, (QMetaMethod*)signal);
}

bool q_sharedmemory_qbase_is_signal_connected(void* self, void* signal) {
    return QSharedMemory_QBaseIsSignalConnected((QSharedMemory*)self, (QMetaMethod*)signal);
}

void q_sharedmemory_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QSharedMemory_OnIsSignalConnected((QSharedMemory*)self, (intptr_t)slot);
}

void q_sharedmemory_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_sharedmemory_delete(void* self) {
    QSharedMemory_Delete((QSharedMemory*)(self));
}
