#include "libqevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqrect.hpp"
#include <string.h>
#include "libqcoreevent.hpp"
#include "libqinputdevice.hpp"
#include "libqinputdevice.h"

QInputDevice* q_inputdevice_new() {
    return QInputDevice_new();
}

QInputDevice* q_inputdevice_new2(const char* name, long long systemId, int64_t typeVal) {
    return QInputDevice_new2(qstring(name), systemId, typeVal);
}

QInputDevice* q_inputdevice_new3(void* parent) {
    return QInputDevice_new3((QObject*)parent);
}

QInputDevice* q_inputdevice_new4(const char* name, long long systemId, int64_t typeVal, const char* seatName) {
    return QInputDevice_new4(qstring(name), systemId, typeVal, qstring(seatName));
}

QInputDevice* q_inputdevice_new5(const char* name, long long systemId, int64_t typeVal, const char* seatName, void* parent) {
    return QInputDevice_new5(qstring(name), systemId, typeVal, qstring(seatName), (QObject*)parent);
}

const QMetaObject* q_inputdevice_meta_object(void* self) {
    return QInputDevice_MetaObject((QInputDevice*)self);
}

void* q_inputdevice_metacast(void* self, const char* param1) {
    return QInputDevice_Metacast((QInputDevice*)self, param1);
}

int32_t q_inputdevice_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QInputDevice_Metacall((QInputDevice*)self, param1, param2, param3);
}

void q_inputdevice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QInputDevice_OnMetacall((QInputDevice*)self, (intptr_t)slot);
}

int32_t q_inputdevice_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QInputDevice_QBaseMetacall((QInputDevice*)self, param1, param2, param3);
}

const char* q_inputdevice_tr(const char* s) {
    libqt_string _str = QInputDevice_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdevice_name(void* self) {
    libqt_string _str = QInputDevice_Name((QInputDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_inputdevice_type(void* self) {
    return QInputDevice_Type((QInputDevice*)self);
}

int64_t q_inputdevice_capabilities(void* self) {
    return QInputDevice_Capabilities((QInputDevice*)self);
}

bool q_inputdevice_has_capability(void* self, int64_t cap) {
    return QInputDevice_HasCapability((QInputDevice*)self, cap);
}

long long q_inputdevice_system_id(void* self) {
    return QInputDevice_SystemId((QInputDevice*)self);
}

const char* q_inputdevice_seat_name(void* self) {
    libqt_string _str = QInputDevice_SeatName((QInputDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRect* q_inputdevice_available_virtual_geometry(void* self) {
    return QInputDevice_AvailableVirtualGeometry((QInputDevice*)self);
}

const char** q_inputdevice_seat_names() {
    libqt_list _arr = QInputDevice_SeatNames();
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

libqt_list /* of QInputDevice* */ q_inputdevice_devices() {
    libqt_list _arr = QInputDevice_Devices();
    return _arr;
}

const QInputDevice* q_inputdevice_primary_keyboard() {
    return QInputDevice_PrimaryKeyboard();
}

bool q_inputdevice_operator_equal(void* self, void* other) {
    return QInputDevice_OperatorEqual((QInputDevice*)self, (QInputDevice*)other);
}

void q_inputdevice_available_virtual_geometry_changed(void* self, void* area) {
    QInputDevice_AvailableVirtualGeometryChanged((QInputDevice*)self, (QRect*)area);
}

void q_inputdevice_on_available_virtual_geometry_changed(void* self, void (*slot)(void*, void*)) {
    QInputDevice_Connect_AvailableVirtualGeometryChanged((QInputDevice*)self, (intptr_t)slot);
}

const char* q_inputdevice_tr2(const char* s, const char* c) {
    libqt_string _str = QInputDevice_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_inputdevice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QInputDevice_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const QInputDevice* q_inputdevice_primary_keyboard1(const char* seatName) {
    return QInputDevice_PrimaryKeyboard1(qstring(seatName));
}

const char* q_inputdevice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_inputdevice_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_inputdevice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_inputdevice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_inputdevice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_inputdevice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_inputdevice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_inputdevice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_inputdevice_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_inputdevice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_inputdevice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_inputdevice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_inputdevice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_inputdevice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_inputdevice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_inputdevice_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_inputdevice_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_inputdevice_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_inputdevice_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_inputdevice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_inputdevice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_inputdevice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_inputdevice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_inputdevice_dynamic_property_names(void* self) {
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

QBindingStorage* q_inputdevice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_inputdevice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_inputdevice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_inputdevice_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_inputdevice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_inputdevice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_inputdevice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_inputdevice_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_inputdevice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_inputdevice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_inputdevice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_inputdevice_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_inputdevice_event(void* self, void* event) {
    return QInputDevice_Event((QInputDevice*)self, (QEvent*)event);
}

bool q_inputdevice_qbase_event(void* self, void* event) {
    return QInputDevice_QBaseEvent((QInputDevice*)self, (QEvent*)event);
}

void q_inputdevice_on_event(void* self, bool (*slot)(void*, void*)) {
    QInputDevice_OnEvent((QInputDevice*)self, (intptr_t)slot);
}

bool q_inputdevice_event_filter(void* self, void* watched, void* event) {
    return QInputDevice_EventFilter((QInputDevice*)self, (QObject*)watched, (QEvent*)event);
}

bool q_inputdevice_qbase_event_filter(void* self, void* watched, void* event) {
    return QInputDevice_QBaseEventFilter((QInputDevice*)self, (QObject*)watched, (QEvent*)event);
}

void q_inputdevice_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QInputDevice_OnEventFilter((QInputDevice*)self, (intptr_t)slot);
}

void q_inputdevice_timer_event(void* self, void* event) {
    QInputDevice_TimerEvent((QInputDevice*)self, (QTimerEvent*)event);
}

void q_inputdevice_qbase_timer_event(void* self, void* event) {
    QInputDevice_QBaseTimerEvent((QInputDevice*)self, (QTimerEvent*)event);
}

void q_inputdevice_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QInputDevice_OnTimerEvent((QInputDevice*)self, (intptr_t)slot);
}

void q_inputdevice_child_event(void* self, void* event) {
    QInputDevice_ChildEvent((QInputDevice*)self, (QChildEvent*)event);
}

void q_inputdevice_qbase_child_event(void* self, void* event) {
    QInputDevice_QBaseChildEvent((QInputDevice*)self, (QChildEvent*)event);
}

void q_inputdevice_on_child_event(void* self, void (*slot)(void*, void*)) {
    QInputDevice_OnChildEvent((QInputDevice*)self, (intptr_t)slot);
}

void q_inputdevice_custom_event(void* self, void* event) {
    QInputDevice_CustomEvent((QInputDevice*)self, (QEvent*)event);
}

void q_inputdevice_qbase_custom_event(void* self, void* event) {
    QInputDevice_QBaseCustomEvent((QInputDevice*)self, (QEvent*)event);
}

void q_inputdevice_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QInputDevice_OnCustomEvent((QInputDevice*)self, (intptr_t)slot);
}

void q_inputdevice_connect_notify(void* self, void* signal) {
    QInputDevice_ConnectNotify((QInputDevice*)self, (QMetaMethod*)signal);
}

void q_inputdevice_qbase_connect_notify(void* self, void* signal) {
    QInputDevice_QBaseConnectNotify((QInputDevice*)self, (QMetaMethod*)signal);
}

void q_inputdevice_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QInputDevice_OnConnectNotify((QInputDevice*)self, (intptr_t)slot);
}

void q_inputdevice_disconnect_notify(void* self, void* signal) {
    QInputDevice_DisconnectNotify((QInputDevice*)self, (QMetaMethod*)signal);
}

void q_inputdevice_qbase_disconnect_notify(void* self, void* signal) {
    QInputDevice_QBaseDisconnectNotify((QInputDevice*)self, (QMetaMethod*)signal);
}

void q_inputdevice_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QInputDevice_OnDisconnectNotify((QInputDevice*)self, (intptr_t)slot);
}

QObject* q_inputdevice_sender(void* self) {
    return QInputDevice_Sender((QInputDevice*)self);
}

QObject* q_inputdevice_qbase_sender(void* self) {
    return QInputDevice_QBaseSender((QInputDevice*)self);
}

void q_inputdevice_on_sender(void* self, QObject* (*slot)()) {
    QInputDevice_OnSender((QInputDevice*)self, (intptr_t)slot);
}

int32_t q_inputdevice_sender_signal_index(void* self) {
    return QInputDevice_SenderSignalIndex((QInputDevice*)self);
}

int32_t q_inputdevice_qbase_sender_signal_index(void* self) {
    return QInputDevice_QBaseSenderSignalIndex((QInputDevice*)self);
}

void q_inputdevice_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QInputDevice_OnSenderSignalIndex((QInputDevice*)self, (intptr_t)slot);
}

int32_t q_inputdevice_receivers(void* self, const char* signal) {
    return QInputDevice_Receivers((QInputDevice*)self, signal);
}

int32_t q_inputdevice_qbase_receivers(void* self, const char* signal) {
    return QInputDevice_QBaseReceivers((QInputDevice*)self, signal);
}

void q_inputdevice_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QInputDevice_OnReceivers((QInputDevice*)self, (intptr_t)slot);
}

bool q_inputdevice_is_signal_connected(void* self, void* signal) {
    return QInputDevice_IsSignalConnected((QInputDevice*)self, (QMetaMethod*)signal);
}

bool q_inputdevice_qbase_is_signal_connected(void* self, void* signal) {
    return QInputDevice_QBaseIsSignalConnected((QInputDevice*)self, (QMetaMethod*)signal);
}

void q_inputdevice_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QInputDevice_OnIsSignalConnected((QInputDevice*)self, (intptr_t)slot);
}

void q_inputdevice_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_inputdevice_delete(void* self) {
    QInputDevice_Delete((QInputDevice*)(self));
}
