#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqsignalmapper.hpp"
#include "libqsignalmapper.h"

QSignalMapper* q_signalmapper_new() {
    return QSignalMapper_new();
}

QSignalMapper* q_signalmapper_new2(void* parent) {
    return QSignalMapper_new2((QObject*)parent);
}

const QMetaObject* q_signalmapper_meta_object(void* self) {
    return QSignalMapper_MetaObject((QSignalMapper*)self);
}

void* q_signalmapper_metacast(void* self, const char* param1) {
    return QSignalMapper_Metacast((QSignalMapper*)self, param1);
}

int32_t q_signalmapper_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSignalMapper_Metacall((QSignalMapper*)self, param1, param2, param3);
}

void q_signalmapper_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSignalMapper_OnMetacall((QSignalMapper*)self, (intptr_t)callback);
}

int32_t q_signalmapper_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSignalMapper_QBaseMetacall((QSignalMapper*)self, param1, param2, param3);
}

const char* q_signalmapper_tr(const char* s) {
    libqt_string _str = QSignalMapper_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signalmapper_set_mapping(void* self, void* sender, int id) {
    QSignalMapper_SetMapping((QSignalMapper*)self, (QObject*)sender, id);
}

void q_signalmapper_set_mapping2(void* self, void* sender, const char* text) {
    QSignalMapper_SetMapping2((QSignalMapper*)self, (QObject*)sender, qstring(text));
}

void q_signalmapper_set_mapping3(void* self, void* sender, void* object) {
    QSignalMapper_SetMapping3((QSignalMapper*)self, (QObject*)sender, (QObject*)object);
}

void q_signalmapper_remove_mappings(void* self, void* sender) {
    QSignalMapper_RemoveMappings((QSignalMapper*)self, (QObject*)sender);
}

QObject* q_signalmapper_mapping(void* self, int id) {
    return QSignalMapper_Mapping((QSignalMapper*)self, id);
}

QObject* q_signalmapper_mapping2(void* self, const char* text) {
    return QSignalMapper_Mapping2((QSignalMapper*)self, qstring(text));
}

QObject* q_signalmapper_mapping3(void* self, void* object) {
    return QSignalMapper_Mapping3((QSignalMapper*)self, (QObject*)object);
}

void q_signalmapper_mapped_int(void* self, int param1) {
    QSignalMapper_MappedInt((QSignalMapper*)self, param1);
}

void q_signalmapper_on_mapped_int(void* self, void (*callback)(void*, int)) {
    QSignalMapper_Connect_MappedInt((QSignalMapper*)self, (intptr_t)callback);
}

void q_signalmapper_mapped_string(void* self, const char* param1) {
    QSignalMapper_MappedString((QSignalMapper*)self, qstring(param1));
}

void q_signalmapper_on_mapped_string(void* self, void (*callback)(void*, const char*)) {
    QSignalMapper_Connect_MappedString((QSignalMapper*)self, (intptr_t)callback);
}

void q_signalmapper_mapped_object(void* self, void* param1) {
    QSignalMapper_MappedObject((QSignalMapper*)self, (QObject*)param1);
}

void q_signalmapper_on_mapped_object(void* self, void (*callback)(void*, void*)) {
    QSignalMapper_Connect_MappedObject((QSignalMapper*)self, (intptr_t)callback);
}

void q_signalmapper_map(void* self) {
    QSignalMapper_Map((QSignalMapper*)self);
}

void q_signalmapper_map2(void* self, void* sender) {
    QSignalMapper_Map2((QSignalMapper*)self, (QObject*)sender);
}

const char* q_signalmapper_tr2(const char* s, const char* c) {
    libqt_string _str = QSignalMapper_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_signalmapper_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QSignalMapper_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_signalmapper_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_signalmapper_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_signalmapper_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_signalmapper_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_signalmapper_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_signalmapper_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_signalmapper_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_signalmapper_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_signalmapper_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_signalmapper_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_signalmapper_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_signalmapper_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_signalmapper_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_signalmapper_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_signalmapper_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_signalmapper_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_signalmapper_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_signalmapper_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_signalmapper_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_signalmapper_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_signalmapper_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_signalmapper_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_signalmapper_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_signalmapper_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_signalmapper_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_signalmapper_dynamic_property_names");
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

QBindingStorage* q_signalmapper_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_signalmapper_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_signalmapper_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_signalmapper_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_signalmapper_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_signalmapper_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_signalmapper_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_signalmapper_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_signalmapper_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_signalmapper_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_signalmapper_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_signalmapper_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_signalmapper_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_signalmapper_event(void* self, void* event) {
    return QSignalMapper_Event((QSignalMapper*)self, (QEvent*)event);
}

bool q_signalmapper_qbase_event(void* self, void* event) {
    return QSignalMapper_QBaseEvent((QSignalMapper*)self, (QEvent*)event);
}

void q_signalmapper_on_event(void* self, bool (*callback)(void*, void*)) {
    QSignalMapper_OnEvent((QSignalMapper*)self, (intptr_t)callback);
}

bool q_signalmapper_event_filter(void* self, void* watched, void* event) {
    return QSignalMapper_EventFilter((QSignalMapper*)self, (QObject*)watched, (QEvent*)event);
}

bool q_signalmapper_qbase_event_filter(void* self, void* watched, void* event) {
    return QSignalMapper_QBaseEventFilter((QSignalMapper*)self, (QObject*)watched, (QEvent*)event);
}

void q_signalmapper_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSignalMapper_OnEventFilter((QSignalMapper*)self, (intptr_t)callback);
}

void q_signalmapper_timer_event(void* self, void* event) {
    QSignalMapper_TimerEvent((QSignalMapper*)self, (QTimerEvent*)event);
}

void q_signalmapper_qbase_timer_event(void* self, void* event) {
    QSignalMapper_QBaseTimerEvent((QSignalMapper*)self, (QTimerEvent*)event);
}

void q_signalmapper_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSignalMapper_OnTimerEvent((QSignalMapper*)self, (intptr_t)callback);
}

void q_signalmapper_child_event(void* self, void* event) {
    QSignalMapper_ChildEvent((QSignalMapper*)self, (QChildEvent*)event);
}

void q_signalmapper_qbase_child_event(void* self, void* event) {
    QSignalMapper_QBaseChildEvent((QSignalMapper*)self, (QChildEvent*)event);
}

void q_signalmapper_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSignalMapper_OnChildEvent((QSignalMapper*)self, (intptr_t)callback);
}

void q_signalmapper_custom_event(void* self, void* event) {
    QSignalMapper_CustomEvent((QSignalMapper*)self, (QEvent*)event);
}

void q_signalmapper_qbase_custom_event(void* self, void* event) {
    QSignalMapper_QBaseCustomEvent((QSignalMapper*)self, (QEvent*)event);
}

void q_signalmapper_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSignalMapper_OnCustomEvent((QSignalMapper*)self, (intptr_t)callback);
}

void q_signalmapper_connect_notify(void* self, void* signal) {
    QSignalMapper_ConnectNotify((QSignalMapper*)self, (QMetaMethod*)signal);
}

void q_signalmapper_qbase_connect_notify(void* self, void* signal) {
    QSignalMapper_QBaseConnectNotify((QSignalMapper*)self, (QMetaMethod*)signal);
}

void q_signalmapper_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSignalMapper_OnConnectNotify((QSignalMapper*)self, (intptr_t)callback);
}

void q_signalmapper_disconnect_notify(void* self, void* signal) {
    QSignalMapper_DisconnectNotify((QSignalMapper*)self, (QMetaMethod*)signal);
}

void q_signalmapper_qbase_disconnect_notify(void* self, void* signal) {
    QSignalMapper_QBaseDisconnectNotify((QSignalMapper*)self, (QMetaMethod*)signal);
}

void q_signalmapper_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSignalMapper_OnDisconnectNotify((QSignalMapper*)self, (intptr_t)callback);
}

QObject* q_signalmapper_sender(void* self) {
    return QSignalMapper_Sender((QSignalMapper*)self);
}

QObject* q_signalmapper_qbase_sender(void* self) {
    return QSignalMapper_QBaseSender((QSignalMapper*)self);
}

void q_signalmapper_on_sender(void* self, QObject* (*callback)()) {
    QSignalMapper_OnSender((QSignalMapper*)self, (intptr_t)callback);
}

int32_t q_signalmapper_sender_signal_index(void* self) {
    return QSignalMapper_SenderSignalIndex((QSignalMapper*)self);
}

int32_t q_signalmapper_qbase_sender_signal_index(void* self) {
    return QSignalMapper_QBaseSenderSignalIndex((QSignalMapper*)self);
}

void q_signalmapper_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSignalMapper_OnSenderSignalIndex((QSignalMapper*)self, (intptr_t)callback);
}

int32_t q_signalmapper_receivers(void* self, const char* signal) {
    return QSignalMapper_Receivers((QSignalMapper*)self, signal);
}

int32_t q_signalmapper_qbase_receivers(void* self, const char* signal) {
    return QSignalMapper_QBaseReceivers((QSignalMapper*)self, signal);
}

void q_signalmapper_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSignalMapper_OnReceivers((QSignalMapper*)self, (intptr_t)callback);
}

bool q_signalmapper_is_signal_connected(void* self, void* signal) {
    return QSignalMapper_IsSignalConnected((QSignalMapper*)self, (QMetaMethod*)signal);
}

bool q_signalmapper_qbase_is_signal_connected(void* self, void* signal) {
    return QSignalMapper_QBaseIsSignalConnected((QSignalMapper*)self, (QMetaMethod*)signal);
}

void q_signalmapper_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSignalMapper_OnIsSignalConnected((QSignalMapper*)self, (intptr_t)callback);
}

void q_signalmapper_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_signalmapper_delete(void* self) {
    QSignalMapper_Delete((QSignalMapper*)(self));
}
