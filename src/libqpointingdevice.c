#include "libqcoreevent.hpp"
#include "libqeventpoint.hpp"
#include "libqinputdevice.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqevent.hpp"
#include "libqpointingdevice.hpp"
#include "libqpointingdevice.h"

QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new(void* other) {
    return QPointingDeviceUniqueId_new((QPointingDeviceUniqueId*)other);
}

QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new2(void* other) {
    return QPointingDeviceUniqueId_new2((QPointingDeviceUniqueId*)other);
}

QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new3() {
    return QPointingDeviceUniqueId_new3();
}

QPointingDeviceUniqueId* q_pointingdeviceuniqueid_new4(void* param1) {
    return QPointingDeviceUniqueId_new4((QPointingDeviceUniqueId*)param1);
}

void q_pointingdeviceuniqueid_copy_assign(void* self, void* other) {
    QPointingDeviceUniqueId_CopyAssign((QPointingDeviceUniqueId*)self, (QPointingDeviceUniqueId*)other);
}

void q_pointingdeviceuniqueid_move_assign(void* self, void* other) {
    QPointingDeviceUniqueId_MoveAssign((QPointingDeviceUniqueId*)self, (QPointingDeviceUniqueId*)other);
}

QPointingDeviceUniqueId* q_pointingdeviceuniqueid_from_numeric_id(long long id) {
    return QPointingDeviceUniqueId_FromNumericId(id);
}

bool q_pointingdeviceuniqueid_is_valid(void* self) {
    return QPointingDeviceUniqueId_IsValid((QPointingDeviceUniqueId*)self);
}

long long q_pointingdeviceuniqueid_numeric_id(void* self) {
    return QPointingDeviceUniqueId_NumericId((QPointingDeviceUniqueId*)self);
}

void q_pointingdeviceuniqueid_delete(void* self) {
    QPointingDeviceUniqueId_Delete((QPointingDeviceUniqueId*)(self));
}

QPointingDevice* q_pointingdevice_new() {
    return QPointingDevice_new();
}

QPointingDevice* q_pointingdevice_new2(const char* name, long long systemId, int32_t devType, int32_t pType, int32_t caps, int maxPoints, int buttonCount) {
    return QPointingDevice_new2(qstring(name), systemId, devType, pType, caps, maxPoints, buttonCount);
}

QPointingDevice* q_pointingdevice_new3(void* parent) {
    return QPointingDevice_new3((QObject*)parent);
}

QPointingDevice* q_pointingdevice_new4(const char* name, long long systemId, int32_t devType, int32_t pType, int32_t caps, int maxPoints, int buttonCount, const char* seatName) {
    return QPointingDevice_new4(qstring(name), systemId, devType, pType, caps, maxPoints, buttonCount, qstring(seatName));
}

QPointingDevice* q_pointingdevice_new5(const char* name, long long systemId, int32_t devType, int32_t pType, int32_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId) {
    return QPointingDevice_new5(qstring(name), systemId, devType, pType, caps, maxPoints, buttonCount, qstring(seatName), (QPointingDeviceUniqueId*)uniqueId);
}

QPointingDevice* q_pointingdevice_new6(const char* name, long long systemId, int32_t devType, int32_t pType, int32_t caps, int maxPoints, int buttonCount, const char* seatName, void* uniqueId, void* parent) {
    return QPointingDevice_new6(qstring(name), systemId, devType, pType, caps, maxPoints, buttonCount, qstring(seatName), (QPointingDeviceUniqueId*)uniqueId, (QObject*)parent);
}

const QMetaObject* q_pointingdevice_meta_object(void* self) {
    return QPointingDevice_MetaObject((QPointingDevice*)self);
}

void* q_pointingdevice_metacast(void* self, const char* param1) {
    return QPointingDevice_Metacast((QPointingDevice*)self, param1);
}

int32_t q_pointingdevice_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPointingDevice_Metacall((QPointingDevice*)self, param1, param2, param3);
}

void q_pointingdevice_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPointingDevice_OnMetacall((QPointingDevice*)self, (intptr_t)callback);
}

int32_t q_pointingdevice_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPointingDevice_QBaseMetacall((QPointingDevice*)self, param1, param2, param3);
}

const char* q_pointingdevice_tr(const char* s) {
    libqt_string _str = QPointingDevice_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pointingdevice_set_type(void* self, int32_t devType) {
    QPointingDevice_SetType((QPointingDevice*)self, devType);
}

void q_pointingdevice_set_capabilities(void* self, int32_t caps) {
    QPointingDevice_SetCapabilities((QPointingDevice*)self, caps);
}

void q_pointingdevice_set_maximum_touch_points(void* self, int c) {
    QPointingDevice_SetMaximumTouchPoints((QPointingDevice*)self, c);
}

int32_t q_pointingdevice_pointer_type(void* self) {
    return QPointingDevice_PointerType((QPointingDevice*)self);
}

int32_t q_pointingdevice_maximum_points(void* self) {
    return QPointingDevice_MaximumPoints((QPointingDevice*)self);
}

int32_t q_pointingdevice_button_count(void* self) {
    return QPointingDevice_ButtonCount((QPointingDevice*)self);
}

QPointingDeviceUniqueId* q_pointingdevice_unique_id(void* self) {
    return QPointingDevice_UniqueId((QPointingDevice*)self);
}

const QPointingDevice* q_pointingdevice_primary_pointing_device() {
    return QPointingDevice_PrimaryPointingDevice();
}

bool q_pointingdevice_operator_equal(void* self, void* other) {
    return QPointingDevice_OperatorEqual((QPointingDevice*)self, (QPointingDevice*)other);
}

void q_pointingdevice_grab_changed(void* self, void* grabber, int32_t transition, void* event, void* point) {
    QPointingDevice_GrabChanged((QPointingDevice*)self, (QObject*)grabber, transition, (QPointerEvent*)event, (QEventPoint*)point);
}

void q_pointingdevice_on_grab_changed(void* self, void (*callback)(void*, void*, int32_t, void*, void*)) {
    QPointingDevice_Connect_GrabChanged((QPointingDevice*)self, (intptr_t)callback);
}

const char* q_pointingdevice_tr2(const char* s, const char* c) {
    libqt_string _str = QPointingDevice_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pointingdevice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPointingDevice_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const QPointingDevice* q_pointingdevice_primary_pointing_device1(const char* seatName) {
    return QPointingDevice_PrimaryPointingDevice1(qstring(seatName));
}

const char* q_pointingdevice_name(void* self) {
    libqt_string _str = QInputDevice_Name((QInputDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_pointingdevice_type(void* self) {
    return QInputDevice_Type((QInputDevice*)self);
}

int32_t q_pointingdevice_capabilities(void* self) {
    return QInputDevice_Capabilities((QInputDevice*)self);
}

bool q_pointingdevice_has_capability(void* self, int32_t cap) {
    return QInputDevice_HasCapability((QInputDevice*)self, cap);
}

long long q_pointingdevice_system_id(void* self) {
    return QInputDevice_SystemId((QInputDevice*)self);
}

const char* q_pointingdevice_seat_name(void* self) {
    libqt_string _str = QInputDevice_SeatName((QInputDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRect* q_pointingdevice_available_virtual_geometry(void* self) {
    return QInputDevice_AvailableVirtualGeometry((QInputDevice*)self);
}

const char** q_pointingdevice_seat_names() {
    libqt_list _arr = QInputDevice_SeatNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_pointingdevice_seat_names");
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

libqt_list /* of QInputDevice* */ q_pointingdevice_devices() {
    libqt_list _arr = QInputDevice_Devices();
    return _arr;
}

const QInputDevice* q_pointingdevice_primary_keyboard() {
    return QInputDevice_PrimaryKeyboard();
}

void q_pointingdevice_available_virtual_geometry_changed(void* self, void* area) {
    QInputDevice_AvailableVirtualGeometryChanged((QInputDevice*)self, (QRect*)area);
}

void q_pointingdevice_on_available_virtual_geometry_changed(void* self, void (*callback)(void*, void*)) {
    QInputDevice_Connect_AvailableVirtualGeometryChanged((QInputDevice*)self, (intptr_t)callback);
}

const QInputDevice* q_pointingdevice_primary_keyboard1(const char* seatName) {
    return QInputDevice_PrimaryKeyboard1(qstring(seatName));
}

const char* q_pointingdevice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pointingdevice_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pointingdevice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pointingdevice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pointingdevice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pointingdevice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pointingdevice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pointingdevice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pointingdevice_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pointingdevice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pointingdevice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pointingdevice_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pointingdevice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pointingdevice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pointingdevice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pointingdevice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pointingdevice_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pointingdevice_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pointingdevice_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pointingdevice_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pointingdevice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pointingdevice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pointingdevice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pointingdevice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pointingdevice_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_pointingdevice_dynamic_property_names");
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

QBindingStorage* q_pointingdevice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pointingdevice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pointingdevice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pointingdevice_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pointingdevice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pointingdevice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pointingdevice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pointingdevice_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pointingdevice_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pointingdevice_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_pointingdevice_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_pointingdevice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pointingdevice_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_pointingdevice_event(void* self, void* event) {
    return QPointingDevice_Event((QPointingDevice*)self, (QEvent*)event);
}

bool q_pointingdevice_qbase_event(void* self, void* event) {
    return QPointingDevice_QBaseEvent((QPointingDevice*)self, (QEvent*)event);
}

void q_pointingdevice_on_event(void* self, bool (*callback)(void*, void*)) {
    QPointingDevice_OnEvent((QPointingDevice*)self, (intptr_t)callback);
}

bool q_pointingdevice_event_filter(void* self, void* watched, void* event) {
    return QPointingDevice_EventFilter((QPointingDevice*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pointingdevice_qbase_event_filter(void* self, void* watched, void* event) {
    return QPointingDevice_QBaseEventFilter((QPointingDevice*)self, (QObject*)watched, (QEvent*)event);
}

void q_pointingdevice_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPointingDevice_OnEventFilter((QPointingDevice*)self, (intptr_t)callback);
}

void q_pointingdevice_timer_event(void* self, void* event) {
    QPointingDevice_TimerEvent((QPointingDevice*)self, (QTimerEvent*)event);
}

void q_pointingdevice_qbase_timer_event(void* self, void* event) {
    QPointingDevice_QBaseTimerEvent((QPointingDevice*)self, (QTimerEvent*)event);
}

void q_pointingdevice_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPointingDevice_OnTimerEvent((QPointingDevice*)self, (intptr_t)callback);
}

void q_pointingdevice_child_event(void* self, void* event) {
    QPointingDevice_ChildEvent((QPointingDevice*)self, (QChildEvent*)event);
}

void q_pointingdevice_qbase_child_event(void* self, void* event) {
    QPointingDevice_QBaseChildEvent((QPointingDevice*)self, (QChildEvent*)event);
}

void q_pointingdevice_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPointingDevice_OnChildEvent((QPointingDevice*)self, (intptr_t)callback);
}

void q_pointingdevice_custom_event(void* self, void* event) {
    QPointingDevice_CustomEvent((QPointingDevice*)self, (QEvent*)event);
}

void q_pointingdevice_qbase_custom_event(void* self, void* event) {
    QPointingDevice_QBaseCustomEvent((QPointingDevice*)self, (QEvent*)event);
}

void q_pointingdevice_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPointingDevice_OnCustomEvent((QPointingDevice*)self, (intptr_t)callback);
}

void q_pointingdevice_connect_notify(void* self, void* signal) {
    QPointingDevice_ConnectNotify((QPointingDevice*)self, (QMetaMethod*)signal);
}

void q_pointingdevice_qbase_connect_notify(void* self, void* signal) {
    QPointingDevice_QBaseConnectNotify((QPointingDevice*)self, (QMetaMethod*)signal);
}

void q_pointingdevice_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPointingDevice_OnConnectNotify((QPointingDevice*)self, (intptr_t)callback);
}

void q_pointingdevice_disconnect_notify(void* self, void* signal) {
    QPointingDevice_DisconnectNotify((QPointingDevice*)self, (QMetaMethod*)signal);
}

void q_pointingdevice_qbase_disconnect_notify(void* self, void* signal) {
    QPointingDevice_QBaseDisconnectNotify((QPointingDevice*)self, (QMetaMethod*)signal);
}

void q_pointingdevice_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPointingDevice_OnDisconnectNotify((QPointingDevice*)self, (intptr_t)callback);
}

QObject* q_pointingdevice_sender(void* self) {
    return QPointingDevice_Sender((QPointingDevice*)self);
}

QObject* q_pointingdevice_qbase_sender(void* self) {
    return QPointingDevice_QBaseSender((QPointingDevice*)self);
}

void q_pointingdevice_on_sender(void* self, QObject* (*callback)()) {
    QPointingDevice_OnSender((QPointingDevice*)self, (intptr_t)callback);
}

int32_t q_pointingdevice_sender_signal_index(void* self) {
    return QPointingDevice_SenderSignalIndex((QPointingDevice*)self);
}

int32_t q_pointingdevice_qbase_sender_signal_index(void* self) {
    return QPointingDevice_QBaseSenderSignalIndex((QPointingDevice*)self);
}

void q_pointingdevice_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPointingDevice_OnSenderSignalIndex((QPointingDevice*)self, (intptr_t)callback);
}

int32_t q_pointingdevice_receivers(void* self, const char* signal) {
    return QPointingDevice_Receivers((QPointingDevice*)self, signal);
}

int32_t q_pointingdevice_qbase_receivers(void* self, const char* signal) {
    return QPointingDevice_QBaseReceivers((QPointingDevice*)self, signal);
}

void q_pointingdevice_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPointingDevice_OnReceivers((QPointingDevice*)self, (intptr_t)callback);
}

bool q_pointingdevice_is_signal_connected(void* self, void* signal) {
    return QPointingDevice_IsSignalConnected((QPointingDevice*)self, (QMetaMethod*)signal);
}

bool q_pointingdevice_qbase_is_signal_connected(void* self, void* signal) {
    return QPointingDevice_QBaseIsSignalConnected((QPointingDevice*)self, (QMetaMethod*)signal);
}

void q_pointingdevice_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPointingDevice_OnIsSignalConnected((QPointingDevice*)self, (intptr_t)callback);
}

void q_pointingdevice_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pointingdevice_delete(void* self) {
    QPointingDevice_Delete((QPointingDevice*)(self));
}
